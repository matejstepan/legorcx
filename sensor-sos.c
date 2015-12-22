// program pro auto se sensorem
// SENSOR_1 je ve predu
// SENSOR_3 je vzdadu
// OUT_A je motor, ktery pro FWD jede smerem dozadu
// Program po narazu SENSOR_1 couvne a pipa SOS

#define KRATKA 30
#define DLOUHA 100

task main(){

	SetSensor(SENSOR_1,SENSOR_TOUCH);
	SetSensor(SENSOR_3,SENSOR_TOUCH);

	//uvodni zvuk
	PlaySound(6); Wait(100);

	start jedDopredu;

	while(true){
		if (SENSOR_1==1){
			stop jedDopredu;

			OnFwd(OUT_A); //jed dozadu
			Wait(50);
			Off(OUT_A);

			Wait(300); //cekani pro jistotu 
			start volejSos;
			start blikejSos;
		}
	}
 }

 task jedDopredu(){
 	SetPower(OUT_A,3);
 	while(true){
 		OnRev(OUT_A); Wait(20);
 	}
 }

 task volejSos(){
 	repeat(3){
 		PlayTone(440,KRATKA); Wait(2*KRATKA);
 		
 	}
	 	repeat(3){
 		PlayTone(220,DLOUHA); Wait(DLOUHA+KRATKA);
 		
 	}
 	repeat(3){
 		PlayTone(440,KRATKA); Wait(2*KRATKA);


 		
 	}
 }

 task blikejSos(){
 	repeat(3){
 		On(OUT_C); Wait(KRATKA);
 		Off(OUT_C); Wait(KRATKA);
 		
 	}
	 	
 	repeat(3){
 		On(OUT_C); Wait(DLOUHA);
 		Off(OUT_C); Wait(KRATKA);
 		
 	}
 	repeat(3){
 		On(OUT_C); Wait(KRATKA);
 		Off(OUT_C); Wait(KRATKA);
 		
 	}

 }
	
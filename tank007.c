task main(){
	start blikej;

	SetPower(OUT_A+OUT_C,10);

	repeat(4){
		JedDopredu(100);
		VpravoVbok();
		JedDopredu(100);
		VlevoVbok();
		VlevoVbok();
		JedDopredu(100);
		VlevoVbok();
		JedDopredu(100);
		repeat(4){
			VpravoVbok();
		}		
	
	}   

	Off(OUT_AC);
}

void JedDopredu(int time){
	PlaySound(1);
	OnRev(OUT_C+OUT_A);
	Wait(time);
	Off(OUT_A+OUT_C);
}

void VpravoVbok(){
	PlaySound(3);
	OnRev(OUT_C);
	OnFwd(OUT_A);
	Wait(100);
	Off(OUT_A+OUT_C);
}

void VlevoVbok(){
	PlaySound(4);
	OnRev(OUT_A);
	OnFwd(OUT_C);
	Wait(100);
	Off(OUT_A+OUT_C);
}


task blikej(){
	while(true){
		On(OUT_B);
		Wait(50);
		Off(OUT_B);
		Wait(50);
	}
}
















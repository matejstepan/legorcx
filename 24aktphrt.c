

#define CAS1 450
#define CAS2 199
#define CAS3 50
#define CAS4 250
task main(){
  repeat(4){
  	   OnFwd(OUT_A+OUT_C);
  	   Wait(500);
       cukniLeva();
    	Off(OUT_A+OUT_C);
   	 	Wait(CAS3);
    	vlevoVbok();
    	Wait(CAS3);
    	PlaySound(1);
    	blik(); 
    	Wait(CAS3);
    	pravoVbok();
    	Wait(CAS2);
    }
    pravoVbok();
    pravoVbok();
    OnFwd(OUT_A+OUT_C);
    Wait(500);
    cukniLeva();
    cukniLeva();								
    pravoVbok();
 repeat(10){
 	PlaySound(4);
    blik();
    Wait(CAS3);
 }
    
}    

void vlevoVbok(){
	OnRev(OUT_A);
	OnFwd(OUT_C);
	Wait(220);
	Off(OUT_A+OUT_C);
}

void pravoVbok(){
	OnFwd(OUT_A);
	OnRev(OUT_C);
	Wait(220);
	Off(OUT_A+OUT_C);
}

void blik(){
	repeat(3){
	   OnFwd(OUT_B);
	   Wait(10);
	   Off(OUT_B);
	}	   
}
void cukniLeva(){
	OnRev(OUT_A);
	OnFwd(OUT_C);
	Wait(11);
	Off(OUT_A+OUT_C);
}






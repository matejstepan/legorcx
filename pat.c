

#define CAS1 450
#define CAS2
#define CAS3  50


task main(){
    OnFwd(OUT_A+OUT_C);
    OnFwd(OUT_B);
    Wait(CAS1);
    Off(OUT_A+OUT_C);
    Wait(CAS3);
    vlevoVbok();
    repeat(2){
        Wait(CAS3);
        playSound(1);
        blik();
        Wait(CAS3);
        blik()         
    }
}
void vlevoVbok(){
	OnRev(OUT_A);
	OnFwd(OUT_C);
	Wait(CAS2);
	Off(OUT_A+OUT_C);
}

void pravoVbok(){
	OnFwd(OUT_A);
	OnRev(OUT_C);
	Wait(CAS2);
	Off(OUT_A+OUT_C);
}
void  blik(){
	repeat(3){
		OnFwd(OUT_B);
	   Wait(10);
	    Off(OUT_B);
	}	   
}






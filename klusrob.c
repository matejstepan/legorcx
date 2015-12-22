#define SILA_A 7
#define SILA_C 8

//hodnoty pro baterie
//#define CAS_VPRAVO_VBOK 430
//#define CAS_VLEVO_VBOK 430

//hodnoty pro nabijecku
#define CAS_VPRAVO_VBOK 190
#define CAS_VLEVO_VBOK 190

#define CAS_CUK 15
#define CAS_DECIMETR 300

task main(){
	SetPower(OUT_A,SILA_A);
	SetPower(OUT_C,SILA_C);

	repeat(4){
		jedRovneDecimetru(2);
		PlaySound(4);
		Wait(50);
		pravoVbok();		
	}	

	PlaySound(1);
}

void cukniLeva(){
	OnRev(OUT_A);
	OnFwd(OUT_C);
	Wait(CAS_CUK);
	Off(OUT_A+OUT_C);
}

void jedRovneDecimetru(int mamuject){
	int ujeljsem = 0;
	while (ujeljsem < mamuject){
		OnFwd(OUT_A+OUT_C);
		Wait(CAS_DECIMETR);
		Off(OUT_A+OUT_C);
		ujeljsem = ujeljsem + 1;
		if (ujeljsem < mamuject) {
			cukniLeva();
		}

	}
}

void couvej(int cas){
	OnRev(OUT_A+OUT_C);
	Wait(cas);
	Off(OUT_A+OUT_C);
}
void pravoVbok(){
	OnFwd(OUT_A);
	OnRev(OUT_C);
	Wait(CAS_VPRAVO_VBOK);
	Off(OUT_A+OUT_C);
}
void vlevoVbok(){
	OnRev(OUT_A);
	OnFwd(OUT_C);
	Wait(CAS_VLEVO_VBOK);
	Off(OUT_A+OUT_C);
}
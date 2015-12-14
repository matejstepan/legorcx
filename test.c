// tohle je prpgram blikani
// aby furngoval musi byt na ABC kosticka se zarovkou
// udelal jej Matej

task main(){
	int pauza;
	pauza = 5; //jak dlouho je pauza
	repeat(20){
		//nejdriv osvitim vse
		OnFwd(OUT_ABC);
		Wait(pauza);
		Off(OUT_C);
		Wait(pauza);
		Off(OUT_B);
		Wait(pauza);
		Off(OUT_A);
		Wait(pauza);

		



		

	
		OnFwd(OUT_A);
		Wait(pauza);

		OnFwd(OUT_B);
		Wait(pauza);
		OnFwd(OUT_C);
		Wait(pauza);
	}
}	

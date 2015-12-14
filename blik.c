//blikajici svetla tam a spatky


task main(){
	repeat(2000){
		int pauza;
		pauza = 10;
	            
	            OnFwd(OUT_A);
	            
	            //ted sviti A. 
	            Wait(pauza);
	       	    OnFwd(OUT_B);
	       	    Off(OUT_A);
				Wait(pauza);	
	       	 	
	       	 	//ted sviti B
				OnFwd(OUT_C);
	       	    Off(OUT_B);
				Wait(pauza);
				OnFwd(OUT_B);	

				//ted sviti C
				Off(OUT_C); 
				Wait(pauza);
				OnFwd(OUT_B);
				Wait(pauza);  

				OnFwd(OUT_A);//a ted nazpatek ...
				Off(OUT_B);
				
				Wait(pauza);

    }

}
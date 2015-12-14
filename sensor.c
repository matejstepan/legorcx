task main(){


		SetSensor(SENSOR_1,SENSOR_TOUCH);
		SetSensor(SENSOR_3,SENSOR_TOUCH);


		while(true){
			if (SENSOR_1==1){
				PlayTone(444,30);
	            	Wait(30);

			}
			if (SENSOR_3==1){
				PlayTone(220,100);
	            	Wait(100);

			}
		}

	



 }
	
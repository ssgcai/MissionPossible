#pragma config(Sensor, in2,    Light,          sensorReflection)
#pragma config(Sensor, dgtl10, yellow,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//https://www.youtube.com/watch?v=_JyNHP05FSQ
//#pragma config(Sensor, dgtl2, enc, sensorQuadEncoder)
void display(int lol){
}

task main()
{
  //  int  value;
  //  // assume motor is on port 1
  //  motor[port7] = -50;
  //  // delay while motor accelerates
  //  wait1Msec(500);

  //  //// clear encoder, enc should be the digital port that the encoder is on
  //  //SensorValue[ enc ] = 0;

  //  //// wait for 1 second
  //  //wait1Msec(1000);
  //  //value = SensorValue[ enc ];

  //  //// stop motor
  //  //motor[ port7 ] = 0;

  //  //// send to stdio
  //  //writeDebugStreamLine("encoder count is %d", value );

  //  // done
  //sensorValue[enc] = 0; // It is good practice to reset encoder values at the start of a program.

  ////Calculate inches by multiplying the ratio we determined earlier with the amount of inches we desire.
  ////Since we don't want to calculate every iteration of the loop, we will find the clicks needed
  ////before we begin the loop.
  //int tickGoal = 29;

  //while(SensorValue[enc] < tickGoal)
  //{
  //  motor[port7] = 50;  // The nice thing about encoders is that we can use any power value we want, and
  //  writeDebugStreamLine("encoder count is %d", SensorValue[enc]);
  //}
  //motor[port7] = 0; // Stop the loop once the encoders have counted up the correct number of encoder ticks.

	//while (1 == 1){
	//		motor[port2] = vexRT[Ch2];
	//}
	//int ct = 0;
	//while ( ct < 100){
	//	ct++;
	//	wait1Msec(1000);
	//	writeDebugStreamLine("value is %d", SensorValue[Light]);
	//}



// light testing stuff
	//SensorValue(yellow) = 0;
	//SensorValue(red) = 0;
	//SensorValue(green) = 0;
	//wait1Msec(5000);
	//SensorValue(yellow) = 1;
	//SensorValue(red) = 1;
	//SensorValue(green) = 1;
	//wait1Msec(5000);
	//SensorValue(yellow) = 0;
	//SensorValue(red) = 0;
	//SensorValue(green) = 0;



// resistor temperature stuff
//while (true){
//	writeDebugStream("%d\n", SensorValue[lolxd]);
//	wait1Msec(500);
//}

}

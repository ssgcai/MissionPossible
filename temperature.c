#pragma config(Sensor, in1,    lolxd,          sensorReflection)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

while (true){
	const float M = -0.077;
	const float B = 63.06;
	float x = (float) SensorValue[lolxd];
	writeDebugStream("%d\n", (int) (M*x + B + 0.5));
	wait1Msec(500);
}

}

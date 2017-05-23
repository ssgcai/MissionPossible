#pragma config(Sensor, dgtl1, rightEncoder, sensorQuadEncoder)

task main()
{
	motor[port2] = -2;
	int x = SensorValue[rightEncoder];
	writeDebugStream("%d", x);
	wait1Msec(3000);

}

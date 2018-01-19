#include <CoDrone.h>

void setup() {
  CoDrone.begin(115200);

  CoDrone.AutoConnect(NearbyDrone);

  CoDrone.DroneModeChange(Flight);
  
  CoDrone.Send_LinkModeBroadcast(LinkModeActive);

  CoDrone.FlightEvent(TakeOff);

  THROTTLE = 100;
  PITCH = 30;
  CoDrone.Control();
  delay(2000);

  CoDrone.
  FlightEvent(Landing);
}

void loop() {
  // put your main code here, to run repeatedly:

}

/*
  @@@@@@@@@@@@@@@@@@@@@@                                                                                                                               
  @@@@@@@@@@@@@@@@@@@@@@             @@@.    @@@    @@@.     @@@@    @@@@        @@@@@@@@@        @@@@@@@@@@@@@.     .@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@%%@@@%%@@@%%@@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@@@@@@@        @@@@@@@@@@@@@@     @@@@@@@@@@@@@@        @@@@@@@@@  
  @@@@@  @@@  @@@  @@@@@             @@@@    @@@    @@@@     @@@@    @@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@            @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@   @@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@   @@@@ 
  @@@@@   @    @   @@@@@             @@@@   @@@@    @@@@     @@@@@@@@@@@@       @@@@@@@@@@@        @@@@@   @@@@@       @@@@@   @@@@       @@@@@@@@@@@ 
  @@@@@            @@@@@             @@@@###@@@@@##@@@@@     @@@@    @@@@      @@@@@@@@@@@@       #@@@@@###@@@@@     ##@@@@@###@@@@       @@@@@@@@@@@
  @@@@@@@@@@@@@@@@@@@@@@             @@@@@@@@@@@@@@@@@@@     @@@@    @@@@      @@@@    @@@@@      @@@@@@@@@@@@@@     @@@@@@@@@@@@@@      @@@@     @@@@
  @@@@@@@@@@@@@@@@@@@@@@
  
  Whadda WPM463 two channel Solid State Relay module example
  
  This example will repeatedly turn both SSR channels on and off

  For more information about the Whadda WPM463 two channel Solid State Relay module, check the manual available at https://whadda.com
  
 
  Author: Midas Gossye (Whadda/Velleman)
  Date: 15/03/2021
  URL: https://github.com/WhaddaMakers/Micro_PIR_sensor
*/


const int channel1_pin = 3; // Define SSR channel 1 pin
const int channel2_pin = 4; // Define SSR channel 2 pin

void setup() {
  pinMode(channel1_pin, OUTPUT); // Define SSR channel 1 pin as output
  pinMode(channel2_pin, OUTPUT); // Define SSR channel 2 pin as output
  
  digitalWrite(channel1_pin, HIGH); // Set SSR channel 1 pin HIGH to disable output
  digitalWrite(channel2_pin, HIGH); // Set SSR channel 2 pin HIGH to disable output
  

}

void loop() {
  digitalWrite(channel1_pin, LOW); // Set SSR channel 1 pin LOW to enable CH1 output
  delay(3000); // Wait for 3s (=3000ms)
  digitalWrite(channel1_pin, HIGH); // Set SSR channel 1 pin HIGH to disable CH1 output

  digitalWrite(channel2_pin, LOW); // Set SSR channel 2 pin LOW to enable CH2 output
  delay(3000); // Wait for 3s (=3000ms)
  digitalWrite(channel2_pin, HIGH); // Set SSR channel 2 pin HIGH to disable CH2 output

}

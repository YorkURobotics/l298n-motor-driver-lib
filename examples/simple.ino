#include <L298N.h>

// global variables
const byte PIN_ENABLE = 9;
const byte PIN_INPUT1 = 7;
const byte PIN_INPUT2 = 8;
const bool ROTATE_CLOCKWISE = true;
const bool ROTATE_COUNTERCLOCKWISE = false;
L298N driver(PIN_ENABLE, PIN_INPUT1, PIN_INPUT2);

void setup()
{
  // L298N class instantiation fully handles the motor driver setup
  Serial.begin(9600);
}

/**
 * Main program for triggering a DC motor using the motor driver instance
 * 
 * @pre  - 'driver' is an instance of the L298N class
 *       - 'ROTATE_CLOCKWISE' is a boolean initialized to true
 *       - 'ROTATE_COUNTERCLOCKWISE' is a boolean initialized to false
 * @post 1) motor rotates clockwise for 3 seconds
 *       2) motor stops and stays idle for 2 seconds
 *       3) motor rotates counterclockwise for 3 seconds
 */
void loop()
{
  driver.run(ROTATE_CLOCKWISE, 150);
  delay(3000);

  driver.stop();
  delay(2000);

  driver.run(ROTATE_COUNTERCLOCKWISE, 150);
  delay(3000);
}

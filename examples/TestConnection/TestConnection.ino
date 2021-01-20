#include <Arduino.h>
#include <TMC2130.h>

const long BAUD = 115200;
const int LOOP_DELAY = 2000;
const int  CS_PIN = A2;
uint8_t CHIP_PWR_PIN = A3;


// Instantiate TMC2130
TMC2130 stepper_driver;

void setup()
{
  // Setup serial communications
  Serial.begin(BAUD);

  pinMode(CHIP_PWR_PIN, OUTPUT);
  digitalWrite(CHIP_PWR_PIN, LOW);
  delay(1000);
  digitalWrite(CHIP_PWR_PIN, HIGH);
  delay(1000);

  stepper_driver.setup(CS_PIN);


}

void loop()
{

  if (stepper_driver.communicating())
  {
    Serial.println(F("SPI communicating with stepper driver!"));
  }
  else
  {
    Serial.println(F("SPI not communicating with stepper driver!"));
  }

  stepper_driver.initialize();

  TMC2130::Status status = stepper_driver.getStatus();

  Serial.print(F("status.load = "));
  Serial.println(status.SG_RESULT);

  Serial.print(F("status.full_step_active = "));
  Serial.println(status.full_step_active);

  Serial.print(F("status.current_scaling = "));
  Serial.println(status.current_scaling);


  Serial.print(F("status.stall = "));
  Serial.println(status.stall);

  Serial.print(F("status.over_temperature_shutdown = "));
  Serial.println(status.over_temperature_shutdown);

  Serial.print(F("status.over_temperature_warning = "));
  Serial.println(status.over_temperature_warning);

  Serial.print(F("status.short_to_ground_a = "));
  Serial.println(status.short_to_ground_a);

  Serial.print(F("status.short_to_ground_b = "));
  Serial.println(status.short_to_ground_b);

  Serial.print(F("status.open_load_a = "));
  Serial.println(status.open_load_a);

  Serial.print(F("status.open_load_b = "));
  Serial.println(status.open_load_b);

  Serial.print(F("status.standstill = "));
  Serial.println(status.standstill);


  Serial.println();

  delay(LOOP_DELAY);
}

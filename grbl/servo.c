#include "grbl.h"


void servo_init()
{
  #ifdef HAS_SERVOS
  //initialize servo #1
  pwm_init(&SERVO1_PWM_CHANNEL, SERVO1_PWM_USE_PRIMARY_PIN, SERVO1_PWM_USE_SECONDARY_PIN, servo_pwm_period, 0);
    pwm_enable(&SERVO1_PWM_CHANNEL);
  if (NUM_SERVOS > 1)
  {
    //initialize servo #2
  }
  #endif
  
  /*
   #ifdef VARIABLE_SPINDLE
    spindle_pwm_period = (SystemCoreClock / settings.spindle_pwm_freq);
    spindle_pwm_off_value = (spindle_pwm_period * settings.spindle_pwm_off_value / 100);
    spindle_pwm_min_value = (spindle_pwm_period * settings.spindle_pwm_min_value / 100);
    spindle_pwm_max_value = (spindle_pwm_period * settings.spindle_pwm_max_value / 100);
    pwm_init(&SPINDLE_PWM_CHANNEL, SPINDLE_PWM_USE_PRIMARY_PIN, SPINDLE_PWM_USE_SECONDARY_PIN, spindle_pwm_period, 0);
    pwm_enable(&SPINDLE_PWM_CHANNEL);

    // Configure variable spindle PWM and enable pin, if requried. On the Uno, PWM and enable are
    // combined unless configured otherwise.
    #ifdef USE_SPINDLE_DIR_AS_ENABLE_PIN
      SPINDLE_ENABLE_DDR |= (1<<SPINDLE_ENABLE_BIT); // Configure as output pin.
    #else
      SPINDLE_DIRECTION_DDR |= (1<<SPINDLE_DIRECTION_BIT); // Configure as output pin.
    #endif
    */
  
  /*
  COOLANT_FLOOD_DDR |= (1 << COOLANT_FLOOD_BIT); // Configure as output pin
  #ifdef ENABLE_M7
    COOLANT_MIST_DDR |= (1 << COOLANT_MIST_BIT);
  #endif
  coolant_stop();
  */
}

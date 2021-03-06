#ifndef TIMER2_CONFIG_H_
#define TIMER2_CONFIG_H_


/* Timer2 Mode options:
 * 1- TIMER2_NORMAL_MODE
 * 2- TIMER2_CTC_MODE
 * 3- TIMER2_PWM_PHASECORRECT_MODE
 * 4- TIMER2_PWM_FAST_MODE
 */

#define TIMER2_MODE TIMER2_PWM_FAST_MODE

/*PRESCALER OPTIONS:
   1- TIMER2_NO_PRESCALER
   2- TIMER2_8_PRESCALER
   3- TIMER2_64_PRESCALER
   4- TIMER2_256_PRESCALER
   5- TIMER2_1024_PRESCALER
   6- TIMER2_EXTERNAL_SOURCE_FALLING
   7- TIMER2_EXTERNAL_SOURCE_RISING
   */
#define TIMER2_PRESCALER  TIMER2_1024_PRESCALER
#define TIMER2_PRELOAD    212




#endif /* TIMER2_CONFIG_H_ */

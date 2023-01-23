#include "FreeRTOS.h"

#define  TOGGLE(r)  (r)  /* TODO: create pin toggle macro */
#define  PIN_LED1  (0x01)  /* TODO: figure this out */
#define  PIN_LED2  (0x02)  /* TODO: figure this out */
#define  PIN_LED3  (0x04)  /* TODO: figure this out */
#define  PIN_LED4  (0x08)  /* TODO: figure this out */

void pvtLED1Setup();  /* 4 ms period */
void pvtLED2Setup();  /* 100 ms period */
void pvtLED3Setup();  /* 250 ms period */
void pvtLED4Setup();  /* 512 ms period */


void BlinkLED1(void const *argument)
{
  for(;;)
  {
    TOGGLE(PIN_LED1);
    osDelay(4);  /* TODO: correct? */
  }
}


/* TODO: BlinkLED#(...) for #=2,3,4 */


int main(int argc, char **argv)
{
  /* TODO: generic board setup */
  NULL;  /* TODO: clock config */
  NULL;  /* TODO: GPIO config */

  /* TODO: set up GPIO for LEDs */
  pvtLED1Setup();
  pvtLED2Setup();
  pvtLED3Setup();
  pvtLED4Setup();

  /* TODO: required FreeRTOS setup */
  NULL;

  /* TODO: create tasks for 4 LEDs */
  osThreadDef(Task1, BlinkLED1, osPriorityNormal, 0/*TODO*/, 100/*TODO*/);
  osThreadId Task1Handle = osThreadCreate(osThread(Task1), tcarg/*TODO*/);
  if (Task1Handle == NULL)  { HardFault_Handler(); }

  osThreadId Task2Handle = osThreadCreate(thr2_def/*TODO*/, tcarg/*TODO*/);
  osThreadId Task3Handle = osThreadCreate(thr3_def/*TODO*/, tcarg/*TODO*/);
  osThreadId Task4Handle = osThreadCreate(thr4_def/*TODO*/, tcarg/*TODO*/);

  /* TODO: start scheduler */
  osTimerDef(timerLED1, timerLED1Callback);
  timerLED1Handle = osTimerCreate(osTimer(timerLED1), osTimerPeriodic, NULL);
  /*TODO:maybe move to task*/osTimerStart(timerLED1Handle, 1/*TODO*/);
  timerLED2, ...
  NULL;

  /* TODO: delete task for LED1 after 2 seconds */
  status = osThreadTerminate(Task1Handle);  /* TODO: this should happen once after a two second timer, what works best? */

  /* TODO: proper endless loop */
  NULL;

  for(;;){}  /* TODO: check best practice for unexpected exit from loop */
  return -1;
}


void pvtLED1Setup()
{
  /* TODO */
}


void pvtLED2Setup()
{
  /* TODO */
}


void pvtLED3Setup()
{
  /* TODO */
}


void pvtLED4Setup()
{
  /* TODO */
}

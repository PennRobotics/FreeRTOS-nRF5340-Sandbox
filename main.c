#include "FreeRTOS.h"

void pvtLED1Setup();  /* 4 ms period */
void pvtLED2Setup();  /* 100 ms period */
void pvtLED3Setup();  /* 250 ms period */
void pvtLED4Setup();  /* 512 ms period */


int main(int argc, char **argv)
{
  /* TODO: generic board setup */
  NULL;

  /* TODO: set up GPIO for LEDs */
  pvtLED1Setup();
  pvtLED2Setup();
  pvtLED3Setup();
  pvtLED4Setup();

  /* TODO: required FreeRTOS setup */
  NULL;

  /* TODO: create tasks for 4 LEDs */
  osThreadId thr1, thr2, thr3, thr4;
  thr1 = osThreadCreate(thr1_def/*TODO*/, tcarg/*TODO*/);
  thr2 = osThreadCreate(thr2_def/*TODO*/, tcarg/*TODO*/);
  thr3 = osThreadCreate(thr3_def/*TODO*/, tcarg/*TODO*/);
  thr4 = osThreadCreate(thr4_def/*TODO*/, tcarg/*TODO*/);

  /* TODO: start scheduler */
  NULL;

  /* TODO: delete task for LED1 after 2 seconds */
  NULL;

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

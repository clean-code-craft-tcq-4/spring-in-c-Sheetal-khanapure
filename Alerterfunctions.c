#include "stats.h"
#include "Alert_func.h"
void emailAlerter()
{
  emailAlertCallCount = 1;
}

void ledAlerter()
{
  ledAlertCallCount = 1;
}

alerter_funcptr alerters[0] = &emailAlerter;
alerter_funcptr alerters[1] = &ledAlerter;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(computedStats.max>maxThreshold)
    {
      alerters[0];
      alerters[1];
    }
}


#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float sum_all=0;
    int loop_index=0;
    float minimum = *numberset[0];
    float maximum = *numberset[0];
    for(loop_index=0;loop_index<setlength;loop_index++)
    {
        sum_all+= *numberset[loop_index];
        if(*(numberset+loop_index)<minimum)
        {
            minimum = *(numberset+loop_index);
        }
        if(*(numberset+loop_index)<maximum)
        {
            maximum = *(numberset+loop_index);
        }
    }
    s.average = sum_all/numberset;
    s.min = minimum;
    s.max = maximum;
   
    return s;     
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

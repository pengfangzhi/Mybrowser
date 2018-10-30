#ifndef UTILTIME_H
#define UTILTIME_H

#include <stdint.h>
#include <string>



int64_t GetTimeMicros();

std::string FormatISO8601DateTime(int64_t nTime);

int64_t GetMockTime();

void MilliSleep(int64_t n);




#endif // UTILTIME_H

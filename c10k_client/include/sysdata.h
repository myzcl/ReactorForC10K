#ifndef _SYSDATA_H_
#define _SYSDATA_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <stdlib.h>

typedef struct cpu_info
{
    char name[8];
    unsigned long user;
    unsigned long nice;
    unsigned long system;
    unsigned long idle;	//等待时间
    unsigned long iowait;
    unsigned long irq;
    unsigned long softirq;
} CPUInfo;

typedef struct SysData
{
    int m_cpuRate;  //0-100
    int m_memoryUse;    //
    int m_memoryTotal;  //
} SysData;


void getCpuRate(SysData *sysData);
void getMemory(SysData *sysData);

#endif

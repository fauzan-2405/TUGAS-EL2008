// NAMA     : Muhammad Fauzan
// NIM      : 13220009
// TUGAS    : 2
// PROBLEM  : Round Robin

#include <stdio.h>

int main()
{
    int i, limit, total = 0, x, counter = 0, time_quantum;
    int wait_time = 0, turnaround_time = 0, arrival_time[limit], burst_time[limit], temp[limit];
    float average_wait_time, average_turnaround_time;
    printf("Masukkan total proses yang diinginkan: ");
    scanf("%d", &limit);
    printf("============================================= \n");
    x = limit;
    for(i = 0; i < limit; i++)
    {
        printf("Masukkan waktu kedatangan dan eksekusi P[%d] \n", i);
 
        printf("Waktu Kedatangan: ");
 
        scanf("%d", &arrival_time[i]);
 
        printf("Waktu Eksekusi: ");
 
        scanf("%d", &burst_time[i]);
 
        temp[i] = burst_time[i];
    }
    printf("Masukkan slot Time Quantum: ");
    scanf("d", &time_quantum);

    return 0;
}

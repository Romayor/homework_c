
#include "func.h"
void add_record(sensor info[], int number,uint16_t year, uint8_t month,
    uint8_t day, uint8_t hour, uint8_t minute,int8_t t)
    {
        info[number].year = year; 
        info[number].month = month;
        info[number].day = day;
        info[number].hour = hour;
        info[number].minute = minute;
        info[number].t = t;
    }
int add_info(char *name, sensor info[], int count)
{
    int i = 0, r, year, month, day, hour, minute, t;
    FILE *fp;
    fp  = fopen (name, "r");
        if (fp == NULL)
            printf("error");
        while((r = fscanf(fp, "%d; %d; %d; %d; %d; %d", 
        &year, &month, &day, &hour, &minute, &t)) > 0)
        {
            if (r < 6)
            {
                char s[20];
                r = fscanf(fp,"%[^\n]" , s);
//                printf("line = %d error %d = %s\n", i+1, r, s);
            }
            else
            {
                add_record(info, i++, year, month, day,
                hour, minute, t );
            }
        }
            
    fclose(fp);
    return i;
}
int count_month(sensor info[], int a[], int size, int m)
{
    int count = 0;
    for (int i = 0; i < size; i++ )
    {
        if (info[i].month == m)
        {
            a[count] = info[i].t;
            count++;
        }
    }
    return count;
}
int max_month(int a[] , int count )
{
    int max = a[0];
    for (int i = 1; i < count; i++ )
    {
            if (max<a[i])
                max = a[i];
    }
    return max;
}
int min_month(int a[], int count )
{
    int min = a[0];
    for (int i = 1; i < count; i++ )
    {
            if (min>a[i])
                min = a[i];
    }
return min;
      
}
int average_month(int a[], int count )
{
    int sum = 0;
    for (int i = 0; i < count; i++ )
    {
            sum += a[i];
    }
return sum/count;
        
}
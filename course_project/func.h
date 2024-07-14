#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
} sensor;

void add_record(sensor *, int, uint16_t, uint8_t,uint8_t, uint8_t, uint8_t,int8_t);
int add_info(char *, sensor *, int);
int count_month (sensor *, int *, int , int );
int max_month (int *, int);
int min_month (int *, int);
int average_month (int *, int);
#include "func.h"

#define SIZE 100
char name_file[40];
int m;
int main(int argc, char *argv[])
{
    sensor info[SIZE];
    int t_month[] = {};
    int count, size;
    for(int i = 0; i < argc; i++)
    {
        char* str = argv[i];
        if(str[0] == '-')
        {
            switch (str[1])
            {
            case 'h':
                printf("-f - enter 'file name'.csv\n");
                printf("-m - enter number of the month(1...12)\n");         
                break;
            case 'f':
                {
                sscanf(argv[i+1],"%s", &name_file);
                size = add_info(name_file, info,SIZE);
                printf("Month   Tcp     Tmax   Tmin\n");
                    
                }
                break;
                
            case 'm':
                sscanf(argv[i+1],"%d", &m);
                default:
                break;
            }
    
        }
    }
        if(!m)
        {
            for (m = 1; m < 13; m++)
                    {
                        count = count_month(info,t_month,size,m);
                        printf("%2d\t%2d\t%2d\t%2d\t\n", m, 
                        average_month(t_month, count), 
                        max_month(t_month, count), 
                        min_month(t_month, count));
                    }
        }
        else
        {
            count = count_month(info,t_month,size,m);
            printf("%2d\t%2d\t%2d\t%2d\t\n", m, 
            average_month(t_month, count), 
            max_month(t_month, count), 
            min_month(t_month, count));                
        }
            
    return 0;
}

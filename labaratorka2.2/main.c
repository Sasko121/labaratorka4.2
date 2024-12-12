#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_MONTH_SIZE 31

int main()
{
    float t[MAX_MONTH_SIZE] = { 0.0f }; 
    float avg = 0.0f; 
    int count_of_days = 0;

   
    printf("Enter month's size: ");
    if (scanf("%d", &count_of_days) != 1 || count_of_days <= 0 || count_of_days > MAX_MONTH_SIZE)
    {
        printf("Invalid month size. Using default size %d.\n", MAX_MONTH_SIZE);
        count_of_days = MAX_MONTH_SIZE;
    }

    
    for (int i = 0; i < count_of_days; ++i)
    {
        printf("Enter temp at day %d: ", i + 1);
        if (scanf("%f", t + i) != 1)
        {
            printf("Invalid input temp\n");
            return -1;
        }
        avg += *(t + i); 
    }

   
    avg /= count_of_days;
    printf("\nAverage temp: %.2f\n", avg);

    
    printf("\nTemperature Histogram:\n");   
    for (int i = 0; i < count_of_days; ++i)
    {
        printf("Day %2d [%.2f]: ", i + 1, t[i]);
        int stars = (int)(t[i]); 
        for (int j = 0; j < (stars > 0 ? stars : 0); ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

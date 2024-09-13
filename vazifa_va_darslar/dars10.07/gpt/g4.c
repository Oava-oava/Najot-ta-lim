#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char Airplane_name[20];
    char flight_day[20];
    char from[20];
    char to[20];
    char flig_time[20];
    char land_time[20];

} Airaport;

bool Oylari(char oy[]);
bool Oylari2(char oy[]);

int main()
{
    Airaport Airplanes[12] = {
        {"American Airlines", "12.01.2024", "Los Angeles", "Holland", "23:00 pm", "05:00 am"},
        {"Southwest Airlines", "13.02.2024", "New York", "London", "10:00 am", "04:00 pm"},
        {"Delta Airlines", "14.06.2024", "Chicago", "Paris", "15:30 pm", "09:30 pm"},
        {"United Airlines", "15.04.2024", "San Francisco", "Tokyo", "18:45 pm", "08:45 am"},
        {"JetBlue", "16.05.2024", "Miami", "Berlin", "20:00 pm", "02:00 am"},
        {"Spirit Airlines", "17.06.2024", "Houston", "Rome", "22:15 pm", "06:15 am"},
        {"Frontier Airlines", "18.07.2024", "Seattle", "Madrid", "09:00 am", "05:00 pm"},
        {"Alaska Airlines", "19.08.2024", "Denver", "Amsterdam", "11:30 am", "07:30 pm"},
        {"Hawaiian Airlines", "20.07.2024", "Honolulu", "Sydney", "13:45 pm", "09:45 pm"},
        {"Allegiant Air", "21.8.2024", "Las Vegas", "Dubai", "16:00 pm", "02:00 am"},
        {"American Airlines", "22.11.2024", "Los Angeles", "Holland", "23:00 pm", "05:00 am"},
        {"Southwest Airlines", "23.12.2024", "New York", "London", "10:00 am", "04:00 pm"}};

    printf("Yoz oylarida uchadigan samolyotlar:\n");
    for (int i = 0; i < 12; i++)
    {
        if (Oylari2(Airplanes[i].flight_day))
        {
            printf("Airplane Name: %s\n", Airplanes[i].Airplane_name);
            printf("Flight Day: %s\n", Airplanes[i].flight_day);
            printf("From: %s\n", Airplanes[i].from);
            printf("To: %s\n", Airplanes[i].to);
            printf("Flight Time: %s\n", Airplanes[i].flig_time);
            printf("Land Time: %s\n\n", Airplanes[i].land_time);
        }
    }

    return 0;
}

bool Oylari(char oy[])
{
    // Yoz oylarini aniqlash (Iyun, Iyul, Avgust)
    if (strstr(oy, ".06.") != NULL || strstr(oy, ".07.") != NULL || strstr(oy, ".08.") != NULL)
    {
        return true;
    }
    return false;
}

bool Oylari2(char oy[])
{
    if (oy[4] == '6' || oy[4] == '7' || oy[4] == '8')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

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
    int during_time;

} Airaport;

int main()
{
    Airaport Airplanes[12] = {
        {"American Airlines", "12.01.2024", "Maskov", "Toshkent", "23:00 pm", "02:00 am", 3},
        {"Southwest Airlines", "13.02.2024", "New York", "London", "10:00 am", "04:00 pm", 10},
        {"Delta Airlines", "14.06.2024", "Gurlan", "Toshkent", "15:30 pm", "09:30 pm", 2},
        {"United Airlines", "15.04.2024", "San Francisco", "Tokyo", "18:45 pm", "08:45 am", 10},
        {"JetBlue", "16.05.2024", "Miami", "Berlin", "20:00 pm", "02:00 am", 10},
        {"Spirit Airlines", "17.06.2024", "Xozarasp", "Toshkent", "22:15 pm", "06:15 am", 4},
        {"Frontier Airlines", "18.07.2024", "Seattle", "Madrid", "09:00 am", "05:00 pm", 16},
        {"Alaska Airlines", "19.08.2024", "Denver", "Amsterdam", "11:30 am", "07:30 pm", 7},
        {"Hawaiian Airlines", "20.07.2024", "Honolulu", "Sydney", "13:45 pm", "09:45 pm", 6},
        {"Allegiant Air", "21.08.2024", "Las Vegas", "Dubai", "16:00 pm", "02:00 am", 4},
        {"American Airlines", "22.11.2024", "Los Angeles", "Holland", "23:00 pm", "05:00 am", 6},
        {"Southwest Airlines", "23.12.2024", "New York", "London", "10:00 am", "04:00 pm", 9}
    };

    printf("Toshkentga boradigan samolyotlar:\n");
    for (int i = 0; i < 12; i++)
    {
        if (Airplanes[i].during_time <= 4 && strcmp(Airplanes[i].to, "Toshkent") == 0)
        {
            printf("Airplane Name: %s\n", Airplanes[i].Airplane_name);
            printf("Flight Day: %s\n", Airplanes[i].flight_day);
            printf("From: %s\n", Airplanes[i].from);
            printf("To: %s\n", Airplanes[i].to);
            printf("Flight Time: %s\n", Airplanes[i].flig_time);
            printf("Land Time: %s\n", Airplanes[i].land_time);
            printf("During Time: %d hours\n\n", Airplanes[i].during_time);
        }
    }

    return 0;
}

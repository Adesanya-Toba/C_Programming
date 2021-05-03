#include <stdio.h>

float conv_to_cel(float);

int main()
{
    float fahr_value, cel_value;
    printf("Enter the farenheit value you wnat to convert: ");
    scanf("%f", &fahr_value);

    cel_value = conv_to_cel(fahr_value);
    printf("%.1f %9.1f\n", fahr_value, cel_value);
}

float conv_to_cel(float fahr_value)
{
    float celcius;
    char* far = "Farenheit";
    char* cel = "Celcius";

    printf("%9s %8s\n", far, cel);
    celcius = (5.0 / 9.0) * (fahr_value - 32.0);

    return celcius;
}
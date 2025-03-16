#include <stdio.h>


// This is where you add the two functions
float fahrenheit_to_celsius(float temp_in_f) {
    float temp_in_c = ((temp_in_f - 32) * 5) / 9;
    return temp_in_c;
}

float celsius_to_fahrenheit(float temp_in_c) {
    float temp_in_f = ((temp_in_c * 9) / 5) + 32;
    return temp_in_f;
}

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}
#include <stdio.h>

int main() {
    float radius, area, perimeter;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Area of the circle = %.15f\n", area);
    printf("Perimeter of the circle = %.15f\n", perimeter);

    return 0;
}

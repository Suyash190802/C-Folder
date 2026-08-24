#include <stdio.h>
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}
int main()
{
    float a, b, result;
    int choice;
    float (*operation)(float, float);
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        operation = add;
        break;
    case 2:
        operation = subtract;
        break;
    case 3:
        operation = multiply;
        break;
    case 4:
        if (b == 0)
        {
            printf("Division by zero is not allowed.\n");
            return 0;
        }
        operation = divide;
        break;
    default:
        printf("Invalid choice.\n");
        return 0;
    }
    result = operation(a, b);
    printf("Result = %.2f\n", result);
    return 0;
}
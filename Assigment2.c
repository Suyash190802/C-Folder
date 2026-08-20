/* #include <stdio.h>
int main()
{
    int a[100], n, i;
    int choice, position, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Display");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter position: ");
            scanf("%d", &position);
            printf("Enter element: ");
            scanf("%d", &value);
            for (i = n; i >= position; i--)
            {
                a[i] = a[i - 1];
            }
            a[position - 1] = value;
            n++;
            printf("Updated array: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 2:
            printf("Enter position: ");
            scanf("%d", &position);
            for (i = position - 1; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            printf("Updated array: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        case 3:
            printf("Array: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
 */












/* #include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array: ");

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array: ");

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    printf("Merged array: ");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int a[100], n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Ascending order: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
 */
/* #include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (a[0] > a[1])
    {
        largest = a[0];
        second = a[1];
    }
    else
    {
        largest = a[1];
        second = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}
 */
/* #include <stdio.h>

int main()
{
    int a[100], n, i;
    int even = 0, odd = 0;
    int positive = 0, negative = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int n, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        sum = sum + digit;
        count++;

        n = n / 10;
    }

    printf("Number of digits = %d\n", count);
    printf("Sum of digits = %d", sum);

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int n, original, digit, factorial, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;

        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    if (sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int a, b, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
} */
/* #include <stdio.h>

int main()
{
    int start, end, i, j, flag;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are: ");

    for (i = start; i <= end; i++)
    {
        if (i < 2)
            continue;

        flag = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }

    return 0;
} */
#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nDescending order: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
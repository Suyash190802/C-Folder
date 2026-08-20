#include<stdio.h>
#include<math.h>
int main()
 {
    float a,b,c;
    float D,root1,root2;
    printf("enter a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    if(D>0)
    {
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("Root1=%.2f\n",root1);
        printf("Root2=%.2f\n",root2);
    }
      else if (D == 0) 
    {
        root1 = -b / (2 * a);
        printf("Both roots are equal = %.2f", root1);
    }
    else
    {
        printf("Roots are imaginary/complex");
    }
    return 0;
 } 
   /*  char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special character"); */

 /*  int choice,a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
     printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Multiplication = %d", a * b);
            break;

        case 4:   
                printf("Division = %.2f", (float)a / b);
        case 5:
                printf("Modulus = %d", a % b);
        default:
            printf("Invalid choice");
    }  */ 
   /*  int a,b,c,second;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a > b && a < c) || (a > c && a < b))
        second = a;
    else if ((b > a && b < c) || (b > c && b < a))
        second = b;
    else
        second = c;

    printf("Second largest = %d", second); */
  /*      int units;
    float bills;
    printf("enter units consumed:");
    scanf("%d",&units);
    if (units<=100)
    {
        bills = units*1.5;
    }
    else if (units <= 200)
    {
        bills=(100*1.5)+((units-100)*2.5);
    }
    else {
        bills =  (100 * 1.5) + (100 * 2.5) + ((units - 200) * 4);
    }
      printf("Electricity Bill = Rs. %.2f", bills);  */
/*  int n , original, remainder,result=0;
    printf("enter a number:");
    scanf("%d",&n);
    original=n;
     while (n != 0) {
        remainder = n % 10;
        result = result + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (result == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number"); */
 /*  float m1, m2, m3, m4, m5;

    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    percentage = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("Percentage = %.2f%%\n", percentage);

    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33) {
        printf("Status: Fail\n");
    }
    else {
        printf("Status: Pass\n");

        if (percentage >= 90)
            printf("Grade: A");
        else if (percentage >= 80)
            printf("Grade: B");
        else if (percentage >= 70)
            printf("Grade: C");
        else if (percentage >= 60)
            printf("Grade: D");
        else
            printf("Grade: E");
    }   */     
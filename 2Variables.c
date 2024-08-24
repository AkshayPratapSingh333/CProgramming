#include <stdio.h>
int main()
{
    //A variable in C is a memory location with some name that helps store some form of data and retrieves it when required. We can store different types of data in the variable and reuse the same variable for storing some other data any number of times.
    //C Variable Types
    //The C variables can be classified into the following types:

// Local Variables
// Global Variables
// Static Variables
// Automatic Variables
// Extern Variables
// Register Variables

//Conditions for variables :- 
// A variable name must only contain alphabets, digits(in middle or last), and underscore.
// A variable name must start with an alphabet or an underscore only. It cannot start with a digit or other special characters.
// No whitespace is allowed within the variable name.
// A variable name must not be any reserved word or keyword.ex- auto,enum,break etc

    int a = 7;
    printf("%d",a); 
    // Updation of variabe
    a=9;
    printf("\n");
    printf("\n");
    printf("%d",a);
    // Arithmetic operation..
    a = a +7;
    printf("\n");
    printf("%d",a);
    printf("\n");
    int x=15;
    int y=7;
    printf("%d\n",x+y);
    printf("%d\n",x-y);
    printf("%d\n",x*y);
    printf("%d\n",x/y); // here not 2.14... because of int data type , soln is float data type

    printf("\n");
    // float numbers printing

    float d = 5;
    float e = 2;
    printf("%f",d/e);
    // volume of a sphere

    int r = 7;
    float V = 4 * 3.1415 * r * r * r/3;
    printf("\nThe Volume of Sphere is : %f",V);

    return 0;
}
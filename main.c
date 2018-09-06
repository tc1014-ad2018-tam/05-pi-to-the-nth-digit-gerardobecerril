/*
 * This program tells the user the value of pi with as many decimals as the user desires.
 *
 * Author: Gerardo González Becerril.
 * E-mail: a01411981@itesm.mx
 * Date: September 6, 2018.
 */

#include <stdio.h>
#include <math.h> // This library includes the pow function, for raising a number to the power of another.

int main() {

    double sum = 0; // Variable for storing the values of the formula from each loop.
    int n; // Variable for storing the number of decimals the user wants.

    printf("¿How many decimals do you want? "); // Asks the user for the amount of decimals.
    scanf("%d", &n); // Takes the user's input.

    // For loop that runs the value of k through the formula, each time taking a bigger value from 0 to n.
    for (int k = 0; k <= n; k++) {

        // Stores the values in sum.
        sum += ((pow(16, -k)) * (4.0 / (8.0 * (double)k + 1.0) - 2 / (8.0 * (double)k + 4.0) - 1 / (8.0 * (double)k + 5.0) - 1.0 / (8.0 * (double)k + 6.0)));

    }

    // Prints the result, but only with the amount of decimals indicated by the user.
    printf("%.*f", n, sum);

    return 0;

}
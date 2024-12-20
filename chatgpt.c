#include <stdio.h>
#include <math.h>

// Function for which to find the root: f(x) = x^3 - x - 1
double func(double x) {
    return x * x * x - x - 1;
}

// False Position (Regula Falsi) method
double false_position(double (*f)(double), double a, double b, double tol, int max_iter) {
    double fa = f(a);
    double fb = f(b);
    double c = 0.0;

    if (fa * fb >= 0) {
        printf("The initial interval [a, b] does not contain a root.\n");
        return NAN; // Return NaN (Not a Number) to indicate an error
    }

    for (int i = 0; i < max_iter; ++i) {
        // Calculate the False Position point
        c = b - (fb * (b - a)) / (fb - fa);
        double fc = f(c);

        // Check for convergence
        if (fabs(fc) < tol) {
            printf("Root found with tolerance reached.\n");
            return c;
        }

        // Update the interval [a, b]
        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }
        printf("C = %lf\n",c);
    }

    //printf("Maximum number of iterations reached.\n");
    return c; // Return the last approximation
}

int main() {
    double a = 1.0;
    double b = 2.0;
    double tol = 1e-6;
    int max_iter = 100;

    double root = false_position(func, a, b, tol, max_iter);

    if (!isnan(root)) {
        printf("Approximate root: %lf\n", root);
    }

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Given data
    int N = 1000;
    int O1 = 680;  // All digits different
    int O2 = 289;  // Exactly one pair
    int O3 = 31;   // Three like digits

    double P1 = 0.72;  // Probability all different
    double P2 = 0.27;  // Probability one pair
    double P3 = 0.01;  // Probability all same

    // Calculate expected frequencies
    double E1 = N * P1;
    double E2 = N * P2;
    double E3 = N * P3;

    // Chi-square test statistic
    double chi2 = pow(O1 - E1, 2)/E1 + pow(O2 - E2, 2)/E2 + pow(O3 - E3, 2)/E3;
    double chi2_alpha = 5.99; // df = 2, alpha = 0.05

    cout << "Poker Test:" << endl;
    cout << "Chi-square = " << chi2 << endl;

    // Hypothesis testing
    if (chi2 > chi2_alpha)
        cout << "Reject H0: Numbers are not independent" << endl;
    else
        cout << "Fail to reject H0: Numbers appear independent" << endl;

    return 0;
}

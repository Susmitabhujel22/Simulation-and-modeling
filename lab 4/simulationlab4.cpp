#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Given values
    double rho = -0.1945;
    double sigma = 0.1280;
    double Zcritical = 1.96;

    cout << "AUTOCORRELATION TEST\n\n";

    // Step 1: Hypotheses
    cout << "Step 1: Hypotheses\n";
    cout << "H0: Random numbers are independent\n";
    cout << "H1: Random numbers are NOT independent\n\n";

    // Step 2: Calculate Z
    double Z = rho / sigma;
    cout << "Step 2: Calculate Test Statistic\n";
    cout << "Z = rho / sigma = " << rho << " / " << sigma;
    cout << " = " << Z << "\n\n";

    // Step 3: Compare with critical value
    cout << "Step 3: Compare with Critical Value\n";
    cout << "|Z| = " << fabs(Z) << endl;
    cout << "Critical Value = " << Zcritical << "\n\n";

    // Step 4: Decision
    cout << "Step 4: Decision\n";
    if (fabs(Z) <= Zcritical) {
        cout << "Since |Z| <= 1.96 ? Accept H0\n";
        cout << "Conclusion: Random numbers are independent.\n";
    } else {
        cout << "Since |Z| > 1.96 ? Reject H0\n";
        cout << "Conclusion: Random numbers are NOT independent.\n";
    }

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    float R[5] = {0.54, 0.73, 0.98, 0.11, 0.68};
    int n = 5;
    float Dplus = 0, Dminus = 0;

    sort(R, R + n);

    for(int i = 0; i < n; i++) {
        float Dp = ((float)(i + 1) / n) - R[i];
        float Dm = R[i] - ((float)i / n);

        if(Dp > Dplus)
            Dplus = Dp;
        if(Dm > Dminus)
            Dminus = Dm;
    }

    float D = max(Dplus, Dminus);

    cout << "D+ = " << Dplus << endl;
    cout << "D- = " << Dminus << endl;
    cout << "Calculated D = " << D << endl;

    float Dcritical = 0.565;

    if(D < Dcritical)
        cout << "Null hypothesis accepted: Numbers are uniformly distributed." << endl;
    else
        cout << "Null hypothesis rejected: Numbers are not uniformly distributed." << endl;

    return 0;
}


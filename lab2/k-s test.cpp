#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    float R[10] = {0.35, 0.77, 0.12, 0.33, 0.88, 0.45, 0.19, 0.25, 0.91, 0.54};
    int n = 10;
    float Dplus = 0.0, Dminus = 0.0;
    sort(R, R + n);
    for(int i = 0; i < n; i++) {
        float Dp = ((float)(i + 1)/n) - R[i];
        float Dm = R[i] - ((float)i/n);

        if(Dp > Dplus) Dplus = Dp;
        if(Dm > Dminus) Dminus = Dm;
    }

    float D = max(Dplus, Dminus);
    float Dcritical = 0.41;

    cout << "D+ = " << Dplus << endl;
    cout << "D- = " << Dminus << endl;
    cout << "Calculated D = " << D << endl;

    if(D < Dcritical)
        cout << "Null hypothesis accepted: Numbers are independent." << endl;
    else
        cout << "Null hypothesis rejected: Numbers are not independent." << endl;

    return 0;
}


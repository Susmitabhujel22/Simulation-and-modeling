#include <iostream>
using namespace std;

int main() {
    int X = 117;     
    int a = 43;     
    int m = 1000;    

    float R;

    cout << "Xi\tRi\n";

    for(int i = 1; i <= 4; i++) {
        X = (a * X) % m;   
        R = (float)X / m;

        cout << X << "\t" << R << endl;
    }

    return 0;
}


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    double total = 0.0;
    cin >> num;

    for (int i=0; i<num; i++) {
        double n;
        cin >> n;
        total += n;
    }
    
    cout.precision(12);
    cout << fixed << total / num;
    return 0;
}
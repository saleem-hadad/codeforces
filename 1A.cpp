#include <iostream>
#include <math.h>

using namespace std;

void main(){
    double m, n, a;
    unsigned long long int flagStone = 0;

    cin>> n >> m >> a;
    
    if(n <= a){
        flagStone++;
    }else{
        flagStone = ceil(n / a);
    }
    
    m = m - a;
    
    if((m < a) && (m > 0)){
        flagStone += flagStone;
    }else{
        flagStone += ceil(m / a) * flagStone;
    }

    cout << flagStone;
}
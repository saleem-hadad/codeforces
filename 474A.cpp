#include <iostream>
using namespace std;

int main() {
    string line1 = "qwertyuiop";
    string line2 = "asdfghjkl;";
    string line3 = "zxcvbnm,./";
    string text;
    char op;
    cin >> op;
    cin >> text;
    for (int i =0; i<text.size(); i++) {
        for (int j=0; j<line1.size(); j++) {
            if(line1[j] == text[i]){
                if (op == 'R') {
                    cout << line1[j-1];
                }else{
                    cout << line1[j+1];
                }
            }else if(line2[j] == text[i]){
                if (op == 'R') {
                    cout << line2[j-1];
                }else{
                    cout << line2[j+1];
                }
            }else if(line3[j] == text[i]){
                if (op == 'R') {
                    cout << line3[j-1];
                }else{
                    cout << line3[j+1];
                }
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n,  c = 0;;
    cout << "Prime numbers from 1 to 100 are:" << endl;
    for (n = 1; n <= 100; n++) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                c++;
            }
        }
        if (c == 2) {
            cout << n << " ";
        }
        c=0;
    }
    return 0;
}

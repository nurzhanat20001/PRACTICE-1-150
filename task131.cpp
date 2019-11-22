#include <iostream>

using namespace std;

bool primeNum(int a) {

    for (auto i = 2; i < a; i++ ) {

        if (0 == a % i) {

            return false;

        } else {

            continue;

        }

    }

}

int main() {

    int n;

    cin >> n;

        for (int i = 1; i < n; i++) {

            if (primeNum(i) && primeNum(i + 2)) {

                cout << "Pair:" << i << ' ' << i + 2 << endl;

            }

        }
        }
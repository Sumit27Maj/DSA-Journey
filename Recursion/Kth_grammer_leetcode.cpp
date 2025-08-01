#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n == 1 && k == 1) return 0;
        int mid = pow(2, n - 2);
        if (k <= mid) {
            return kthGrammar(n - 1, k);
        } else {
            return !kthGrammar(n - 1, k - mid);
        }
    }
};

int main() {
    Solution sol;
    
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;

    int result = sol.kthGrammar(n, k);
    cout << "The " << k << "-th symbol in row " << n << " is: " << result << endl;

    return 0;
}

#include <iostream>

using namespace std;
int main(){
    int n, l, r, sum = 0;
    cin >> n;
    int a[n], p[n];
    p[0] = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i != 0) p[i] = p[i - 1] + a[i - 1];
    }

    cin >> l;
    cin >> r; 

    cout << (p[r] + a[r]) - p[l] << endl;
}
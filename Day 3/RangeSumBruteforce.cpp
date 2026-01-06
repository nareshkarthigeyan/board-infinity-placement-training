#include <iostream>

using namespace std;
int main(){
    int n, l, r, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> l;
    cin >> r;

    for(int i = l; i <= r; i++){
        sum += a[i];
    }

    cout << sum << endl;
}
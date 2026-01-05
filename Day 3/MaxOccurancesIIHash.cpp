#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];


    unordered_map<int, int> map;
    int maxE, max = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        map[x]++;
        if (map[x] > max){
            max = map[x];
            maxE = x;
        } 
    }

    cout << maxE << endl;
  
}
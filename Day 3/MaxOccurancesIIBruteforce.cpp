#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int visited[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        visited[i] = 0;
    }

    int maxCount = 0, maxElement = 0, count = 0;

    for(int i = 0; i < n; i++){
        if(visited[i] == 1){
            continue;
        }
        
        count = 1;
        for (int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if (count > maxCount){
            maxCount = count;
            maxElement = a[i];
        }
    }

    cout << maxElement << endl;
}
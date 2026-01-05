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

    int maxCount = 0, minCount = __INT32_MAX__, count = 0;
    int maxE, minE;
    for(int i = 0; i < n; i++){
        if(visited[i] == 1){
            continue;
        }
        
        count = 1;
        visited[i] = 1;

        for (int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                count++;
                visited[i] = 1;
            }
        }

        if (count > maxCount) 
        {
            maxCount = count;
            maxE = a[i];
        }
        if (count < minCount){
            minCount = count;
            maxE = a[i];
        } 
    }

    cout << maxE - minE << endl;
}
#include <stdio.h>
#include <limits.h>

int maxPrefixSum(int a[], int l, int r,int n) {
	int prefix[r+1];
	prefix[l]=0;
	for(int i=l+1;i<=r;i++){
		prefix[i]=prefix[i-1]+a[i-1];
	}
	int maxS=INT_MIN;
	for(int i=l;i<=r;i++){
		if(prefix[i]>maxS)   maxS=prefix[i];
	}
	return maxS;
}

int main() {
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);

        int X;
        scanf("%d", &x);
        while (x -- ) {
            int l, r;
            scanf("%d %d", &l, &r);
            int res = maxPrefixSum(a, l, r,N);
            printf("%d\n", res);

            return 0;
        }
    }
}
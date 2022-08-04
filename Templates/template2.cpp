#include<iostream>
using namespace std;

void funcswap(int *i, int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

template <class N> void myfunc(N a[], int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                funcswap(a+j,a+j-1);
}

int main(){
    int a[5] = {69,35,72,9,18};
    int n = sizeof(a)/sizeof(a[0]);
    myfunc<int>(a,n);
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    int arr[100];
    
    cin >> n >> k;
    
    for(int i = 0; i < n; ++i){
        cin >> arr[i];    
    }
    
    sort(arr, arr+n);
    
    cout << arr[n-k];
    
    return 0;
}

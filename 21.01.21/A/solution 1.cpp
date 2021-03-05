#include <iostream>
#include <algorithm>


using namespace std;

int arr[100100];

int main() {
	int res = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr,arr+n);
	for (int i = 0; i < n; i++){		
		if (arr[i] > res + 1){
			cout << res + 1;
			return 0;
		}
		res += val;
	}
	cout << res + 1;

	return 0;
}
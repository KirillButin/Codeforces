#include <iostream>
using namespace std;
int main()
{
	int n, t;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> t;
		if (t == 2){
			cout << 1 << " " << 1;
		}
		else if (t % 2 == 1)
			cout << t - 1 << " " << 1;
		else
			cout << t - 2 << " " << 2;
		cout << endl;
	}
	return 0;
}
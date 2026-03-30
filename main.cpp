#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, sum;

	cout << "Input two values separated by spaces.\n";
	cin >> n1 >> n2;
	cout << "Enter number of iterations (N>2)\n";
	cin >> N;
	cout << n1 << endl << n2 << endl;
	for (int i=0;i<N-2;i++){
		sum = n1 + n2;
		cout << sum << endl;
		n1 = n2;
		n2 = sum;
	}
}


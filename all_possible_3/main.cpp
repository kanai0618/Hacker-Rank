#include <iostream>
#include<stdlib.h>
#include <iostream>
using namespace std;
void printStrings(char a[], int n, int r);
void printAllCombinations(char a[], int n, int r, char data[], int index);
void disp(char data[], int r);

int main(int argc, char const *argv[])
{
	char a[] = {'a', 'b','c'};
	int n = sizeof(a)/sizeof(a[0]);
	int r = 3;
	system("cls");

	printStrings(a, n, r);

	return 0;
}

void printStrings(char a[], int n, int r)
{
	char data[r];

	printAllCombinations(a, n, r, data, 0);
}

void printAllCombinations(char a[], int n, int r, char data[], int index)
{
	if(index == r) {
		// cout << "index: " << index << " ";
		disp(data, r);
		return ;
	}

	int i;
	for(i=0; i<n; i++) {
		data[index] = a[i];
		printAllCombinations(a, n, r, data, index+1);
	}
}

void disp(char data[], int r)
{
	int i;
	for(i=0; i<r; i++)
		cout << data[i];
	cout << "\n";
}

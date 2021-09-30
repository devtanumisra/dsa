#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> v;


void print_Pos(int a[3][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (v[{ i, j }] == 0)
				cout << "(" << i << ", " << j << ")"
					<< "\n";
}

int main()
{
	int mat[3][3] = { { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 } };

	
	v[{ 0, 0 }] = 1; 
	v[{ 1, 0 }] = 1; 
	v[{ 1, 1 }] = 1; 
	v[{ 2, 2 }] = 1; 

	
	print_Pos(mat);
	return 0;
}

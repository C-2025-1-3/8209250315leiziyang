
#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	int s1, s2, s3;
	cout << "Enter three sides: ";
	cin >> s1 >> s2 >> s3;
	if (is_valid(s1,s2,s3))
		cout << "三角形的面积为： " << _area(s1, s2, s3) << endl;
	else
		cout << "错误" << endl;
	return 0;
}


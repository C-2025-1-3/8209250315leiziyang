/*实验三1.1
#include<iostream>
using namespace std;
int min(int a, int b)
{
	return a < b ? a : b;
}
int gcd(int a, int b)
{
	for (int i = min(a,b);i>=1; i--)
		if(a%i==0&&b%i==0)
			return i;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "m,n的最大公约数为：" << gcd(m, n) << endl;
}*/
/*实验三1.2
#include<iostream>
using namespace std;
int min(int a, int b)
{
	return a < b ? a : b;
}
int max(int a, int b)
{
	return a > b ? a : b;
}
int gcd(int &a,int &b)
{
	  a = a > 0 ? a : -a;
	  b = b > 0 ? b : -b;
	for (int i = min(a, b); i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
int lcm(int& a, int& b)
{
	a = a > 0 ? a : -a;
	b = b > 0 ? b : -b;
	for (int i = max(a, b); i >= 1; i++)
	{
		if (i % a == 0 && i % b == 0)
			return i;
	}
}
int main()
{
    int m, n;
	cin >> m >> n;
	cout << "最大公约数为：" << gcd(m, n) << "\n";
	cout<< "最小公倍数为：" << lcm(m, n) << endl;
	return 0;
}*/
/*实验三2
#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
		else
			return true;
	}
}
int main()
{
	int count = 0;
	int num=2;
	while (count < 200)
	{
		if (is_prime(num)) {
			count++;
			cout << num << " ";
			num++;
		}
		else {
			num++;
		}
		if (count % 10 == 0)
		{
			cout <<endl;
	}
	}
}*/
/*实验三5
#include<iostream>
using namespace std;
int main()
{
	int x=1,y;
	for (int i = 1; i < 10; i++)
	{
		y = (x+1)*2;
		x = y;
	}
	cout<<"第一天摘的桃子数为： "<<x<<endl;
	return 0;
}*/
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

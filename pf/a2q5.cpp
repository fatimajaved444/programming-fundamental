//#include<iostream>
//using namespace std;
//void reverse(int& p)
//{
//	int rem, s = 0;
//	while (p != 0)
//	{
//		rem = p % 10;
//		p = p / 10;
//		s = (s * 10) + rem;
//	}
//	cout << s;
//}
//
//void combine(int& num)
//{
//	int rem, r2, rev = 0;
//	int p = 0;
//
//	for (int i = num; num != 0; num /= 10)
//	{
//		rem = num % 10;
//		rev = rev * 10 + rem;
//	}
//
//	for (int i = rev; rev != 0; rev /= 10)
//	{
//		r2 = rev % 10;
//		p = p * 10 + r2;
//	}
//	cout << p;
//	reverse(p);
//}
//
//int main()
//{
//	int num;
//	cout << "enter any number: " << endl;
//	cin >> num;
//	combine(num);
//
//	return 0;
//}
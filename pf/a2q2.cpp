//#include<iostream>
//using namespace std;
//float power(float b, float exp)
//{
//	float s = 1;
//	for (int i = 1; i <= exp; i++)
//	{
//		s = s * b;
//	}
//	return s;
//}
//
//float factorial(float num)
//{
//	float s = 1;
//	for (int i = 1; i <= num; i++)
//	{
//		s = s * i;
//	}
//	return s;
//}
//
//float result(float x, float num)
//{
//	float s = 0;
//	for (int i = 0; i < num; i++) {
//		s = s + power(x, i) / factorial(i);
//	}
//	return s;
//}
//
//int main()
//{
//	//initialization
//	int num;
//	float x, c = 0;
//	//inputs
//	cout << "enter the number if terms: " << endl;
//	cin >> num;
//	cout << "enter the value of x: " << endl;
//	cin >> x;
//	cout << "e^x: ";
//
//	//calling function
//	cout << result(x, num);
//
//	return 0;
//}
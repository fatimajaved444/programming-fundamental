//#include<iostream>
//using namespace std;
//int main()
//{
//	//initialization
//	int age;
//	float salary, b;
//	char pos, gen;
//
//	//inputs
//	cout << "enetr the salary: ";
//	cin >> salary;
//	cout << "enter the position: " << endl;
//	cout << "(e for executive,s for senior,j for junior)";
//	cin >> pos;
//	cout << "enter the gender: ";
//	cout << "(m/f)";
//	cin >> gen;
//	cout << "enter the age: " << endl;
//	cin >> age;
//
//	//finding bonus
//	if (gen == 'm')
//	{
//		if (age > 30)
//		{
//			if (pos == 'e')
//			{
//				b = 0.25 * salary;
//				cout << "basic salary : " << b;
//
//			}
//			else if (pos == 's')
//			{
//				b = 0.21 * salary;
//				cout << "basic salary : " << b;
//
//			}
//			else
//			{
//				cout << "no bonus";
//			}
//		}
//		else if (age < 30)
//		{
//			if (pos == 'j')
//			{
//				b = 0.17 * salary;
//				cout << "basic salary : " << b;
//
//			}
//			else
//			{
//				cout << "no bonus";
//			}
//		}
//		else if (age == 30)
//		{
//			cout << "no bonus";
//		}
//	}
//	else if (gen == 'f')
//	{
//		if (age < 25)
//		{
//			if (salary > 25000)
//			{
//				b = 0.2 * salary;
//				cout << "basic salary : " << b;
//
//
//			}
//			else
//			{
//				cout << "no bonus";
//			}
//		}
//		else if (age > 25)
//		{
//			if (salary > 50000)
//			{
//				b = 0.25 * salary;
//				cout << "basic salary : " << b;
//
//			}
//			else
//			{
//				cout << "no bonus";
//			}
//		}
//		else if (age == 25)
//		{
//			cout << "no bonus";
//		}
//	}
//	return 0;
//}

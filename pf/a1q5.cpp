//#include<iostream>
//using namespace std;
//int main()
//{
//	int north, east, south, west, employees, salary, rawproduct, productioncost, expenses, s, c, x, profit, taxamount;
//	float tax, t;
//	//inputs
//	cout << "Enter the sales of north division: " << endl;
//	cin >> north;
//	cout << "Enter the sales of east division: " << endl;
//	cin >> east;
//	cout << "Enter the sales of south division: " << endl;
//	cin >> south;
//	cout << "Enter the sales of west division: " << endl;
//	cin >> west;
//
//	cout << "Enter the number of employees currently working in the organization: " << endl;
//	cin >> employees;
//	cout << "Enter the salary of an employee: " << endl;
//	cin >> salary;
//	cout << "Enter the cost of raw product: " << endl;
//	cin >> rawproduct;
//	cout << "Enter the production cost: " << endl;
//	cin >> productioncost;
//	cout << "Enter the amount of miscellaneous expenses: " << endl;
//	cin >> expenses;
//	cout << "Enter the percentage of tax to be paid on the revenue: " << endl;
//	cin >> tax;
//
//	//total sales
//	s = north + south + west + east;
//	cout << "total sales: " << s << endl;
//
//	//totalexpenses
//	c = (employees * salary) + rawproduct + productioncost + expenses;
//	cout << "total expenses: " << c << endl;
//
//	//taxamount
//	t = tax / 100;
//	taxamount = t * s;
//	cout << "tax amount: " << taxamount << endl;
//
//	//profit
//	x = c + taxamount;
//	profit = s - x;
//	cout << "profit: " << profit << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int salary, monthlysalary, s, c, mtd, atd, mfd, providentfund;
//	float t, t1, tax, fund, a, b;
//	cout << "Enter the net annual salary: " << endl;
//	cin >> salary;
//	cout << "Enter the percentage of tax deducted each month: " << endl;
//	cin >> tax;
//	cout << "Enter the percentage of provident fund deducted each month: " << endl;
//	cin >> fund;
//
//	//net monthly salary
//	monthlysalary = salary / 12;
//	cout << "Net monthly salary: " << monthlysalary << endl;
//
//	//total monthly salary
//	a = tax / 100;
//	b = fund / 100;
//	c = monthlysalary / (1 - a - b);
//	cout << "total monthly salary: " << c << endl;
//
//	//total annual salary
//	s = c * 12;
//	cout << "tatal annual salary: " << s << endl;
//
//	//monthly tax deduction
//	t = tax / 100;
//	mtd = c * t;
//	cout << "monthly tax deduction is: " << mtd << endl;
//
//	//annual tax deduction
//	atd = s * t;
//	cout << "annual tax deduction is: " << atd << endl;
//
//	//monthly fund deduction
//	t1 = fund / 100;
//	mfd = c * t1;
//	cout << "monthly fund deduction: " << mfd << endl;
//
//	//Provident fund in the account after one year
//	providentfund = 2 * (s * t1);
//	cout << "Provident fund in the account after one year: " << providentfund << endl;
//
//
//	return 0;
//}
#include <iostream>
#include <vector>
using namespace std;
double sum()
{
	double num1, num2;
	cout << "enter 2 sk" << endl;
	cin >> num1 >> num2;
	return num1 - num2;

}
double quadr()
{
	double num1;
	cout << "enter 1 sk" << endl;
	cin >> num1;
	return num1 * num1 * num1;
}
void average()
{
	vector <double> n{ 1,2,3,4,5,6,7,8,9 };
	cout << (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;
}
void even()
{
	vector <int> n{ 1,2,3,4,5 };
	int i = 0;
	do {
		if (n[i] % 2 == 0)cout << n[i] << " ";
		i++;
	} while (i < n.size());
}
void prime()
{
	vector <int> p{ 2,3,7,11,13,17,19 };
	int num1;
	cout << "enter 1 sk zem 20 kas ir pozitivs" << endl;
	cin >> num1;
	int i = 0; bool a = false;
	do {
		if (num1 == p[i]) { cout << "true"; a = true; }
		i++;
	} while (i < p.size());
		if (a == false)cout << "false";
}
void ss()
{
	vector <int> s{ 1,2,3,4,5,6 };
	int i = 0, sum = 0;
	do {
		cout << s[i] * s[i] << " " << endl;
		sum = sum + s[i] * s[i];
		i++;
	}while (i<s.size());
}
void pos()
{
	vector <int> r{ 1,-2,3,-4,5 };
	int i = 0;
	do {
		if (r[i] > 0) cout << r[i] << " ";
		i++;
	} while (i < r.size());
}
void min()
{
	vector <int> n{ 1,-2,3,-4,5 };
	int i = 0;
	do {
		if (n[i] < 0)cout << n[i] << " ";
		i++;
	} while (i < n.size());
}
void word()
{
	string wor = "Hello";
	int i = wor.size();
	do {
		cout << wor[i];
		i--;
	} while (i != -1);
}
void vards()
	{
	string var = "racecar";
		if (var[0] == var[6] && var[1] == var[5] && var[2] == var[4])cout<<"palindrome";
	}
vector <int> a(vector<int>k)
{
	return k;
}
void nepar()
{
	vector <int> d{ 1,2,3,4,5,6,7,8 };
	int i = 0;
	do {
		if (d[i] %2 != 0) cout << d[i] << " ";
		i++;
	} while (i < d.size());
}
void evon()
{
	int num1;
	cout << "enter para sk" << endl;
	cin >> num1;
	if (num1 % 2 == 0)
	{
		cout << "true";
	}
	if (num1 % 2 != 0)
	{
		cout << "false";
	}
}
void wordl()
{
	string wor = "Ammendments";
	int i = wor.size();
	do {
		cout << wor[i];
		i--;
	} while (i != -1);
}
void wordr()
{
	string wor = "Ammendment";

}
int main()
{
	/*vector<int> k{ 1,2,3 };
	cout << a(k)[0] << a(k)[1] << a(k)[2];*/
	//cout << sum() << " " << quadr();
	//average();
	//even();
	//prime();
	//ss();
	//pos();
	//min();
	//word();
	//vards();
	/*nepar();*/
	//evon();
	//wordl();
}
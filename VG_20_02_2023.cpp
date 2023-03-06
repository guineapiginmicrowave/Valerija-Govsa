//int chislo
//string slova

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <int> sk{ 1,2,3,1,2 };
//	int  i = 0;
//	do {
//		if (sk[i] == 1) { cout << "atradu 1 "; }
//		i++;
//
//	} while (i<sk.size());
//	i = 0;
//
//	do {
//		if (sk[i] == 4) { cout << "atradu 4 "; }
//		i++;
//
//	} while (i < sk.size());
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <string> valsts{ "USA","UK","CH","IN","CA","AU" };
//	vector <string> code{ "+1","+44","+86","+91","+1","+61"};
//
//	cout << "ievadi kodu" << endl;
//	string c1;
//	cin >> c1;
//	int i = 0;
//	do {
//		i++;
//		if (code[i] == c1) cout<< valsts[i]<<" ";
//	} while (i < code.size());
//
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <string> name{ "Anna","Antons","Vlads","Artemijs" };
//	vector <string> atz{ "3","8","7","4" };
//
//	cout << "ievadi atzimi" << endl;
//	string c1;
//	cin >> c1;
//	int i = 0;
//	do {
//		if (atz[i] == c1) cout << name[i];
//		i++;
//	} while (i < atz.size());
//
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <int> sk{  2,3,5,7, };
//	int i = 0;
//	do {
//		cout << sk[i] * sk[i] << endl;
//		i++;
//	} while (i < sk.size());
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//vector <string> svetki{ "Lacplesa diena","Latvijas Republikas proklamesanas diena"};
//vector <string> day{ "11.11","18.11" };
//
//cout << "ievadi datumu" << endl;
//string c1;
//cin >> c1;
//int i = 0;
// bool a = false;
// 
// //do {
//if (day[i] == c1) cout << svetki[i];
//i++;
//} while (i < day.size());
//if (a == false) cout << "Good bye"<< endl;
// 
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector <int> sk{ -1,+2,-4,0,+2,-1,0,+3,-3,+2 };
//	int  i = 0, k = 0;
//	do {
//		if (sk[i] > 0) { k++; }
//		i++;
//
//	} while (i < sk.size());
//	cout << k;
//}


#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <string> valsts{ "LV","LT","EST","UK","PL" };
	int i = 0;
	valsts.pop_back();
}
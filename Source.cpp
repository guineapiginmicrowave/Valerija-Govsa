//#include <iostream>
//
///* fstream header file for ifstream, ofstream,
//fstream classes */
//#include <fstream>
//
//using namespace std;
//
//// Driver Code
//int main()
//{
//	// Creation of ofstream class object
//	ofstream fout;
//
//	string line;
//
//	// by default ios::out mode, automatically deletes
//	// the content of file. To append the content, open in ios:app
//	// fout.open("sample.txt", ios::app)
//	fout.open("sample.txt");
//
//	cout << "ja gribi pabeigt exit";
//	// Execute a loop If file successfully opened
//	while (fout) {
//
//		// Read a Line from standard input
//		cin >> line;
//
//		// Press -1 to exit
//		if (line == "exit")
//			break;
//
//		// Write line in file
//		fout << line << endl;
//	}
//
//	// Close the File
//	fout.close();
//
//	
//
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	string mystring;
//	cout << "what do you want to say" << endl;
//	ofstream a;
//	a.open("conversation.txt"), ios::app;
//	while (a) {
//		cin >> mystring;
//		if (mystring == "exit")
//			break;
//
//		a << mystring << endl;
//	}
//	a.close();
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//	fstream my_file;
//	my_file.open("my_file.txt", ios::out);
//	if (!my_file) {
//		cout << "file not created";
//	}
//	else{
//		cout << "file created successfully";
//		my_file << "    ";
//		my_file.close();
//	}
//	return 0;
//}
//
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int main() {
//	int status;
//	char FileName[20];
//	cout << "enter file name" << endl;
//	cin >> FileName;
//	status = remove(FileName);
//	if (status == 0)
//		cout << "\nFile deleted successfully";
//	else
//		cout << "\nFile occurred";
//	cout << endl;
//	return 0;
//}
//#include <iostream>
//#include<fstream>
//#include<string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int answ;
//	vector <string> rom_cip{ "I","II","III","IV","V","VI","VII","IIX","IX","X" };
//	cin >> answ;
//	cout << rom_cip[answ - 1];
//	ofstream a;
//	a.open("conversation.txt"), ios::app;
//	a << answ << " - " << rom_cip[answ - 1];
//	if (answ > 10 || answ < 0) { cout << "wrong number" << endl; exit(-1); }
//	a.close();
//	int pass;
//	if (pass == 420)
//	{
//		char FileName[20];
//		cout << "enter password" << endl;
//		cin >> FileName;
//		pass = remove(FileName);
//		if (pass == 0)
//			cout << "\nFile deleted successfully";
//		else
//			cout << "\nFile occurred";
//		cout << endl;
//
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
	
}

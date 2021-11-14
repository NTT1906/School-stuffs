#include <iostream>
using namespace std;
int main(){
	string a;
	string ops = "+-*/"; 
	getline(cin, a);
	int pos = -1;
	int i = 0;
	string op = "";
	while(pos < 1){
		pos = a.find(ops[i]);
		if(pos > 0 || i > 3) break;
		i++;
	}
	float s = stof(a.substr(0, pos));
	float e = stof(a.substr(pos+1));
	
	switch(i){
		case 0: //+
			cout << s + e << endl;
			break;
		case 1: //-
			cout << s - e << endl;
			break;
		case 2://*
			cout << s * e << endl;
			break;
		case 3: // "/"
			cout << s / e << endl;
			break;
		default:
			cout << "Math Error" << endl;
	}
	return 0;
}
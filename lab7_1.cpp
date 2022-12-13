#include<iostream>
#include<string>

using namespace std;

string ReverseStr(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string UpperStr(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string LowerStr(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string IsPalindrome(string inputStr, string reversedStr){
	if(inputStr == reversedStr){
		return "Yes";
	}else{
		return "No";
	}
}

int main(){
	string myStr = "";

    cout << "Input text: ";
	cin >> myStr;


    cout << "Reversed text: " << ReverseStr(myStr) << endl;
    cout << "Palindrome: " << IsPalindrome(LowerStr(myStr),LowerStr(ReverseStr(myStr))) << endl;
    return 0;
}

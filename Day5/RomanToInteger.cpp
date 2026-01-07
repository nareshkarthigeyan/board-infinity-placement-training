#include <bits/stdc++.h>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;


    int value = 0, i = 0;
    for(int i = 0; i < s.size() - 1; i++){
        char c = s[i];
        if(roman[s[i + 1]] > roman[c]) {
            value -= roman[c];
        } else {
            value += roman[c];
        }
    }
    value += roman[s[s.size() - 1]];

    return value;
}


int main(){
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
}
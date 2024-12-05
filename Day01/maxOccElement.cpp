#include <bits/stdc++.h>
using namespace std;

char maxOccuringElement(string str){
    unordered_map<char, int> freq;
    int n = str.length();
    char ans;
    int count = 0;
    for(int i=0; i<n; i++){
        freq[str[i]]++;
        if(count < freq[str[i]]){
            ans = str[i];
            count = freq[str[i]];
        }
    }
    return ans; // final answer 
}

int main(){
    string str = "geeksforgeeks";
    cout<< "Max occourence of Element: " << maxOccuringElement(str) << endl;
}
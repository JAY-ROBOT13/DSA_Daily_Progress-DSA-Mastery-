//3.LONGEST SUBSTRING WITHOUT REPEATING CHARACTER:
//Given a string 's',find all length of the longest "substring" wihtout duplicate characters.
//INPUT: S ="bbbbb"
//OUTPUT: 1
//EXPLANATION: The answer is "b" with the longest of '1'

#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_set<char> window;

    int left = 0;
    int maxlenth = 0;

    for(int right = 0; right<s.length(); right++){
        while(window.count(s[right])){
            window.erase(s[left]);
            left++;
        }
        window.insert(s[right]);
        maxlength = max(maxlength, right-left+1);
    }
    return maxlength;
}

//main function
int main(){
    string s = "bbbbbb";
    cout<<lengthOfLongestSubstring(s);

    return 0;
}
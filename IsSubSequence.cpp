//392.IS SBUSEQUENCES:
//Given two strings 's' and 't', return true if 's' is a subsequence of 't' or false otherwise
//A subsequence of a string is a new string that is found from the original string by deleting some(can be none) of the characters without disturbing the relative positions of the remaining characters.(i.e., "ace" is a subsequence of "abcde" while "aec" is not).
//INPUT: s = "abc", t = "ahbgdc"
//OUTPUT: true

#include<iostream>
using namespace std;

class solution{
    public:
    bool isSubsequences(string s, string t){
        int i=0;  //for pointer s
        int j=0;  //for pointer t

        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                i++;  //move in s 
                j++;  //move in t
            } else {
                j++;  //skip current character in t
            }
        }
        return i ==  s.length();
    }
};

//main function
int main(){

    string s="abc";
    string t ="ahbgdc";
    solution s1;

    if(s1.isSubsequences(s,t))
    cout<<"true";
    else
    cout<<"false";

    return 0;

}

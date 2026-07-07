//151.REVERSE WORDS IN STRING
//Given an input string s, reverse the order of the words.
//A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
//Return a string of the words in reverse order concatenated by a single space.
//Note that s may contain leading or trailing spaces or multiple spaces between two words. the returned string should only have a single space separating the words.Do not include any extra spaces.

//e.g., INPUT: s = "the sky is blue"
// OUTPUT : "blue is sky the";

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class solution{
    public:
    string reversewords(string s){

        vector<string>word;         //empty vector
        string word = "";

        int i=0;

        while(i<s.length()){
            //skip spaces
            while(i<s.length() && s[i]==' ')
            i++;

            word= ' ';

            //store one word
            while(i<s.length() && s[i]!= ' '){
                word += s[i];
                i++;
            }
            if(word!= "")
            words.push_back(word);
        }

        string ans = "";
        for(int i=words.size()-1;i>=0;i--){
            ans += words[i];
            if(i != 0)
            ans += " ";
        }
        reutrn ans;


    }
};
//290.WORD PATTERN:
//Given a "Pattern" and a string 's', find if 's' follows the same pattern.
//Here "follow" means a fulll match, such that there is a bijection between a letter in "Pattern" and a "non-empty" word in 's'.Specially:
//Each letter in "Pattern" maps to exactly one unique word in 's'.
//Each unique word in 's' maps to exactly on letter in "Pattern".
//No two letters map to the same word, and no two words map to the same letter.
//INPUT: pattern ='abba'  ,   s = "dog cat cat dog"
//OUTPUT: true
//Expalnation: 
// The bijection can be established as:
//'a' maps to 'dog'
//'b' maps to 'cat'

#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
using namespace std;

bool wordPattern(string pattern, string s){
    vector<string> words;

    stringstream ss(s);
    string word;

    while(ss>>word){
        words.push_back(word);
    }
    if(pattern.length() != words.size())
    return false;

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for(int i=0; i<pattern.length(); i++){
        char ch = pattern[i];
        string w = words[i];

        if(charToWord.count(ch)){
            if(charToWord[ch] != w)
            return false;
        }
        else{
            charToWord[ch] = w;
        }
        if(wordToChar.count(w)){
            if(wordToChar[w] != ch)
            return false;
        } else{
            wordToChar[w] = ch;
        }
    }
    return true;
}

//main function
int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";

    if(wordPattern(pattern,s))
    cout<<"true";
    else
    cout<<"false";

    return 0;
}
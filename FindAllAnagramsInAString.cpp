//438.FIND ALL ANAGRAMS IN A STRING: 
//Given a strings 's' and 'p', return an array of all the start indices of p's anagrams in 's'. You may return the answer in any order.
//INPUT : s = "cbaebabacd" ,  p = "abc"
//OUTPUT : [0,6]

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class solution{
    public:
    vector<int> findAnagrams(string s, string p){
        vector<int> target(26,0);   //frequency of characters in p
        vector<int> window(26,0);  //frquency of current window
        vector<int> ans;

        //Build frequency array for pattern
        for(char ch : p){
            target[ch - 'a']++;
        }

        int left = 0;
        int k = p.size();

        //Traverse the string 
        for(int right = 0; right < s.size(); right++){

            //Add current  character to window
            window[s[right] - 'a']++;

            //If window size exceeds k , remove left character
            if(right - left + 1 > k){
                window[s[left] - 'a']--;
                left++;
            }
            //if window size is exactly 'k' and frequencies match 
            if(right - left + 1 == k && window == target){
                ans.push_back(left);
            }
        }
        return ans;
    }
};

//main fuction
int main(){
    solution s1;

    string s = "cbaebabacd";
    string p = "abc";

    vector<int>ans = s1.findAnagrams(s, p);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";

        return 0;
    }

    // cout<<s1.findAnagrams("cbaebabacd", "abc");

    // //Test case 2
    // cout<<s1.findAnagrams("abab", "ab");

    return 0;
}
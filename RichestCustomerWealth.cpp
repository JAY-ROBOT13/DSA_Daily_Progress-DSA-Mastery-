//1672.Richest customer wealth
//You're given an "mxn" integer grid "accounts" where "accounts[i][j]" is the amount of money the "ith" customer has in the "jth" bank return the wealth that the richest customer has
//A customer's wealth is the amount of money they're in all their bank accounts. the richest customer is the customer that has the maximum wealth
//INPUT: accounts=[[1,2,3],[3,2,1]]
//OUTPUT: 6   
//EXP: 1st customer has wealth: 1+2+3=6         2nd customer has wealth=3+2+1=6

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int maximumwealth(vector<vector<int>>& accounts){
        int maxwealth=0;

        for(int i=0;i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=account[i][j];
            }
            maxwealth=max(maxwealth,wealth);
        }
        return maxwealth;
    }
}

//main function
int main(){
    solution s;
    vector<vector<int>> accounts={{1,2,3}.{3,2,1}};

    cout<<obj.maximumwealth(accounts);

    return 0;
}


//There time complexity is O(m*n);
//and space complexity is: O(1)
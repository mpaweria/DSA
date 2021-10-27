//  https://leetcode.com/problems/count-items-matching-a-rule/

#include<iostream>
#include<vector>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count=0, j=2;
    if(ruleKey == "type")
        j=0;
    else if(ruleKey == "color")
        j=1;

    for(int i=0; i<items.size(); i++)
    {
        if(items[i][j] == ruleValue)
            count++;
    }
    return count;
}

int main()
{
    vector<vector<string>> vec = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};

    cout << countMatches(vec, "color", "silver");
}

// int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
//     int count=0;
//     for(int i=0; i<items.size(); i++)
//     {
//         if(ruleKey == "type")
//         {
//             if(items[i][0] == ruleValue)
//                 count++;
//         }
//         else if(ruleKey == "color")
//         {
//             if(items[i][1] == ruleValue)
//                 count++;
//         }
//         else
//         {
//             if(items[i][2] == ruleValue)
//                 count++;
//         }
//     }        
//     return count;
// }
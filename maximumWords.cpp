//  https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int words = 0, maximum = 0;

    for (int i = 0; i < sentences.size(); i++)
    {
        words = 0;
        for(auto j: sentences[i])
            if(j == ' ')    
                words++;

        maximum = max(words+1, maximum);
    }
    return maximum;
}

int main()
{
    vector<string> vec = {"alice and bob love leetcode", "i think so too", "this is great thank you very much"};
    cout << mostWordsFound(vec);

    return 0;
}

// int mostWordsFound(vector<string>& sentences) {
//     int words = 0, maxWords = 0;

//     for(string s: sentences)
//     {
//         words = 0;
//         for(char i: s)
//         {
//             if(i == ' ')
//                 words++;
//         }
//         maxWords = max(words+1, maxWords);
//     }  
//     return maxWords;
// }
#include<bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {
    int cows = 0, bulls = 0;

    unordered_map <char,int> Ideal;
    for(int i = 0; i < secret.size(); ++i){
        Ideal[secret[i]]++;
    }

    for(int i = 0; i < secret.size();++i){
        if(guess[i] == secret[i]){
            bulls++;
            Ideal[guess[i]]--;
        }
        else if(Ideal[guess[i]]>0){
            Ideal[guess[i]]--;
            cows++;
        }
    }

    return to_string(bulls) + 'A' + to_string(cows) + 'B';
}

/*                     BULLS AND COWS
You are playing the Bulls and Cows game with your friend.

You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess,
you provide a hint with the following info:

Bulls = correct code, correct position. x A's
Cows = correct code, wrong position.    y B's
                                        "xAyB"
Given the secret number secret and your friend's guess guess, return the hint for your friend's guess.

The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. 
Note that both secret and guess may contain duplicate digits.

Constraints:

1 <= secret.length, guess.length <= 1000

secret.length == guess.length

secret and guess consist of digits only.

Example:

Input: secret = "1123", guess = "0111"
 
Output: "1A1B"
 
Explanation: Bulls are connected with a '|' and cows are underlined:
"1123"        "1123"
  |      or     |
"0111"        "0111"
Note that only one of the two unmatched 1s is counted as a cow since the non-bull digits can only be rearranged to allow one 1 to be a bull.
*/
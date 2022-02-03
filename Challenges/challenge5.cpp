// section 10
#include "bits/stdc++.h"
#include "string"
using namespace std;

int main()
{
    string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string keys = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

    string msg, encMsg = "", decMsg = "";
    cout << "Enter a message you want to encrypt \n";
    cin >> msg;
    for (auto x : msg)
    {
        int ind = alphabets.find(x);
        encMsg += keys[ind];
    }
    cout << "Encrypted Messages are :" << encMsg << endl;
    cout << "Enter a message to decrypt :" << endl;
    string msg2;
    cin >> msg2;
    for (auto x : msg2)
    {
        int ind = keys.find(x);
        decMsg += alphabets[ind];
    }
    cout << decMsg;
    return 0;
}
// section 9
#include "bits/stdc++.h"
#include "cctype"
using namespace std;

int main()
{

    char cmd;
    vector<int> list;

    cout << "Operation Available \n";
    cout << "P for print all the numbers \n";
    cout << "A for add a number in the list \n";
    cout << "M for mean of the number \n";
    cout << "S for displaying smallest number \n";
    cout << "L for displaying largest number \n";
    cout << "Q for quit \n";

    while (cmd != 'Q')
    {
        cout << "Enter a operation you want to perform \n";
        cin >> cmd;
        cmd = toupper(cmd);

        switch (cmd)
        {
        case 'P':
            cout << "Numbers are :";
            for (auto x : list)
            {
                cout << x << "  ";
            }
            cout << endl;
            break;
        case 'A':
            int temp;
            cout << "enter a integr you want to add in list\n";
            cin >> temp;
            list.push_back(temp);
            break;
        case 'M':
        {
            int sum = 0;
            for (auto x : list)
            {
                sum += x;
            }
            sum = sum / list.size();
            cout << "mean of the list is :" << sum << endl;
        }
        break;
        case 'S':
        {
            int min = 3000;
            for (auto x : list)
            {
                if (x < min)
                {
                    min = x;
                }
            }
            cout << "smallest number is :" << min << endl;
        }
        break;
        case 'L':
        {
            int max = -3000;
            for (auto x : list)
            {
                if (x > max)
                {
                    max = x;
                }
            }
            cout << "largest number is :" << max << endl;
        }
        break;
        case 'Q':
            cout << "Program Exited!!!!";
            break;

        default:
            cout << "Enter correct command" << endl;
            break;
        }
    }

    return 0;
}
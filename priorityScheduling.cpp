#include "bits/stdc++.h"
#include "vector"
using namespace std;

class Process
{
    int processId;
    int burstTime;
    int Priority;

public:
    Process(int pid, int bt, int pt)
    {
        processId = pid;
        burstTime = bt;
        Priority = pt;
    }

    void display()
    {
        cout << "id " << processId << "   bt " << burstTime << "   pt " << Priority << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of processes : \n";
    vector<Process> processes;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "enter Burst time and Priority\n";
        Process temp(i + 1, a, b);
        processes.push_back(temp);
    }
    processes[0].display();

    return 0;
}

/*FCFS Code
Done by Saif Mahmud Parvez
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> burstTime;
vector<int> waitTimeVec;

int calAvgWait(int procNum);
int calAvgTurn(int procNum);
void FCFS(int procNum);


int main()
{
    int procNum;

    cout<<"Enter number of processes: ";
    cin>>procNum;
    FCFS(procNum);


}

void FCFS(int procNum)
{
    int j;
    int avgWaitTime;
    int avgTurnTime;
    cout<<"Enter Burst Tims:\n";
    for(int i=0;i<procNum;i++)
    {
        cin>>j;
        burstTime.push_back(j);

    }
    avgWaitTime=calAvgWait(procNum);
    avgTurnTime=calAvgTurn(procNum);
    cout<<"Avg Wait Time: "<<avgWaitTime<<endl;
    cout<<"Avg Turn Time: "<<avgTurnTime<<endl;

}


int calAvgWait(int procNum)
{
    int waitTime[procNum];
    waitTime[0]=0;
    for(int i=1;i<procNum;i++)
    {
        waitTime[i]= waitTime[i-1] + burstTime[i-1];
    }

    cout<<"Showing Wait Time: "<<endl;

  for(int i=0;i<procNum;i++)
  {

      cout<<"Process "<<i<<" : "<<waitTime[i]<<endl;
    }

    int total_time=0;
    for(int i=0; i<procNum;i++)
    {
        total_time=total_time+waitTime[i];

    }
    int avgTime=total_time/procNum;

    for(int i=0; i<procNum;i++)
    {
        waitTimeVec.push_back(waitTime[i]);
    }

    return avgTime;
}

int calAvgTurn(int procNum)
{
    int turnTime[procNum];
    for(int i=0;i<procNum;i++)
    {

            turnTime[i]=waitTimeVec[i]+burstTime[i];
    }

    cout<<"Turn Time For Each Process: "<<endl;
    int totalTime=0;
    for(int i=0; i<procNum;i++)
    {
        cout<<"Process "<<i<<" : "<<turnTime[i]<<endl;
        totalTime=totalTime+turnTime[i];
    }

    int avgTime = totalTime/procNum;
    return avgTime;

}

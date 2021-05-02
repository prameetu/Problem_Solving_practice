//Meeting Maximum Guests
//Consider a big party where a log register for guest’s entry and exit times is maintained. 
//Find the time at which there are maximum guests in the party.
#include<bits/stdc++.h>

using namespace std;
//Naive solution
int max_guest_at_time(vector <int> arrival,vector <int> exit)
{
    int n =  *max_element(exit.begin(),exit.end());
    vector <int> count(n+1,0);
    
    for(int i=0;i<arrival.size();i++)
    {
        for(int j=arrival[i];j<=exit[i];j++)
        {
            count[j]++;
        }
    }

    return  *max_element(count.begin(),count.end());
}
//Optimized solution
//O(nlogn)
int max_guest_at_time_optimized(vector <int> arrival,vector <int> exit)
{
    int n = arrival.size();
    sort(arrival.begin(),arrival.end()); sort(exit.begin(),exit.end());
    
    int curr(0),max_people(0);
    int i(0),j(0);
    //i is for arrival vector and j is for exit vector
    while(i<n && j<n)
    {
        if(arrival[i] <= exit[j])
        {
            curr++;
            i++;
        }
        else 
        {
            curr--;
            j++;
        }
        max_people = max(max_people,curr); 
    }

    return max_people;


}


int main()
{
    int n;
    cin >> n;
    int x;
    vector <int> arrival;
    vector <int> exit;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        arrival.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        cin >> x;
        exit.push_back(x);
    }

    cout << "The maximum guest at a time in the party are " << max_guest_at_time_optimized(arrival,exit);


}
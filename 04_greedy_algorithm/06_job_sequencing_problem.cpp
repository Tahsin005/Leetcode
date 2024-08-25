// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 




class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    /*
        https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1
    */
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr + n, [](Job a, Job b) {
            return a.profit > b.profit;
        });
        
        int max_dead = arr[0].dead;

        for (int i = 1; i < n; i++) {
            if (arr[i].dead > max_dead) {
                max_dead = arr[i].dead;
            }
        }
        
        vector<int> freq(max_dead + 1, -1);
        
        int countJobs = 0, jobProfit = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = arr[i].dead; j > 0; j--) {
                if (freq[j] == -1) {
                    freq[j] = i;
                    countJobs++;
                    jobProfit += arr[i].profit;
                    break;
                }
            }
        }
        
        vector<int> ans;
        ans.push_back(countJobs);
        ans.push_back(jobProfit);
        
        return ans;
    } 
};

int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        Job arr[n];

        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}

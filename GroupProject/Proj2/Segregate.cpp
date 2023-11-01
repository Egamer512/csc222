#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
    void segregateElements(int arr[],int n)
    {
        int size = n;
        int i = 0;
        int j = n-1;
        int *a = arr;
        while(i!=j){
            if(*(a+j) <0){
                j--;
            }
        if(*(a+i) < 0){
            int temp = *(a+i);
            *(a+i) = *(a+j);
            *(a+j) = temp;  
            j--;    
        }
        i++;
 }

        // Your code goes here
    }

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}




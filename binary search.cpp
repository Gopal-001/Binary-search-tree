#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr1[n],arr2[m];
	    for(int i=0;i<n;i++)
	    cin>>arr1[i];
	    for(int i=0;i<m;i++)
	    cin>>arr2[i];
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    int count=0;
	    for(int i=0;i<m;i++)
	    {
	        if(binary_search(arr1,arr1 + n,arr2[i]))
	        count++;
	    }
	    if(count==m)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n"
	}
}
// // // #include <bits/stdc++.h>
// // // using namespace std; 
// // // // Function to print a subarray formed by `[start, end]`
// // // int printSubarray(int arr[], int start, int end)
// // // {
// // //     int x=0;
// // //     for (int i = start; i < end; i++) 
// // //     {
// // //         x=x|arr[i];
// // //        // cout<<"arr[i]:"<<arr[i]<<" ";
// // //     } 
// // //    // cout<<"x:"<<x<<"\n";
// // //     //if(x>=k)
// // //     //{
        
// // //         return (x);
// // //    // }
    
// // // }
 
// // // // Function to print all subarrays of the specified array
// // // int  printAllSubarrays(int arr[], int n,int k)
// // // {
// // //     int t=n+1;
// // //     // consider all subarrays starting from `i`
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         int y=0;
// // //         // consider all subarrays ending at `j`
// // //         for (int j = i; j<=n; j++)
// // //          {
// // //             y= printSubarray(arr, i, j);
// // //             //  cout<<"y:"<<y<<"\n";
// // //             //     cout<<i<<" "<<j<<" "<<"\n";
// // //            if(y>=k)
// // //           { 
// // //               if(j-i<=t)
// // //               t=j-i;
// // //           }
// // //          }
// // //     }
// // //     return t;
// // // }
 
// // // int main()
// // // {
// // //     #ifndef ONLINE_JUDGE
// // //     freopen("input.txt","r",stdin);
// // //     freopen("output.txt","w",stdout);
// // //     #endif
// // //     int t;
// // //     cin>>t;
// // //     while(t--)
// // //     {
// // //         int n,k;
// // //         cin>>n>>k;
// // //         int arr[n];
// // //         for(int i=0;i<n;i++)
// // //         cin>>arr[i];
// // //        int z= printAllSubarrays(arr, n,k);
// // //          if(z!=n+1)
// // //         cout<<z<<"\n";
// // //        else
// // //        cout<<-1<<"\n";
// // //    // last:;
// // //      }
// // //     return 0;
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 	vector<int> v;
// // 	int n,k;
// // 	cin>>n>>k;
// // 	for(int i=0;i<n;i++)
// // 	{
// // 		int x;
// // 		cin>>x;
// // 		v.push_back(x);
// // 	}int g=0;
// // 	sort(v.begin(),v.end());
// // 	for(int i=0;i<n;i++)
// // 	{
// // 		g++;
// // 		int x=k;
// // 		if(v[i]!=-1)
// // 	   for(int j=0;j<v.size();j++)
// // 	 	 {
				
// // 				x+=v[i];
// // 		   auto it= find(v.begin(),v.end(),x);
// // 			if(it!=v.end())
// // 			{
// // 				v[it]=-1;
// // 			}
// // 	}
// // 	}
// // 	}
// // }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,q;
// 		cin>>n>>q;
// 		int arr[n];
// 		for(int i=1;i<=n;i++){
// 			cin>>arr[i];
// 		}
// 		//vector<pair<int,int>>queries;
// 		for(int i=1;i<=q;i++){
// 			int l,r;
// 			cin>>l>>r;
// 			int ans =0;
// 			// queries.push_back(make_pair(l,r));
//             // cout<<queries[i].first<<"\n";
// 			for(int j=l,k=1; j<=r, k<=((r-l)+1); j++, k++){
// 				ans += k* arr[j];

// 			}
// 			cout<<ans<<"\n";
// 		}
		
		
		
// 	}


// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	vector<int> v;
// 	int n,k;
// 	cin>>n>>k;
// 	for(int i=0;i<n;i++)
// 	{
// 		int x;
// 		cin>>x;
// 		v.push_back(x);
// 	}int g=0;
// 	sort(v.begin(),v.end());
// 	for(int i=0;i<n;i++)
// 	{
// 		g++;
// 		int x=k;
// 		if(v[i]!=-1)
// 	   for(int j=0;j<n;j++)
// 	 	 {
				
// 				x+=v[i];
// 		   int it= find(v.begin(),v.end(),x)-v.end();
//            cout<<"it:"<<it<<"\n";
// 			if(it<n)
// 			{
// 				v[it]=-1;
// 			}
// 	}
// 	}
// 	cout<<g<<"\n";
// 	}
// }
// #include <bits/stdc++.h>
// using namespace std; 
// Function to print a subarray formed by `[start, end]`
// int printSubarray(int arr[], int start, int end)
// {
//     int x=0;
//     for (int i = start; i < end; i++) 
//     {
//         x=x|arr[i];
//        cout<<"arr[i]:"<<arr[i]<<" ";
//     } 
//    cout<<"x:"<<x<<"\n";
//     if(x>=k)
//     {
        
//         return (x);
//    }
    
// }
 
// Function to print all subarrays of the specified array
// int  printAllSubarrays(int arr[], int n,int k)
// {
//     int t=n+1;
//     consider all subarrays starting from `i`
//     for(int l=0;l<n;l++)
//     for (int i = 0; i < n; i++)
//     {
//         int y=0;
//         consider all subarrays ending at `j`
//         for (int j = i; j<=i+l; j++)
//          {
//             y= printSubarray(arr, i, j);
//              cout<<"y:"<<y<<"\n";
//                cout<<i<<" "<<j<<" "<<"\n";
//            if(y>=k)
//           { 
//               if(j-i<=t)
//               t=j-i;
//               goto last;
//           }
//          }
//     }
//     last:;
//     return t;
// }
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
       int z= printAllSubarrays(arr, n,k);
         if(z!=n+1)
        cout<<z<<"\n";
       else
       cout<<-1<<"\n";
   last:;
     }
    return 0;
}


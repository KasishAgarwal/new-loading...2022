            // Problem statement 
// Given an array a of n integers
// return an array of all the unique 
// quadruplets [a[i],a[j],a[k],a[l]] such that:

// 0 <= i,j, k,l< n
// i, j, k, and l are distinct.
// a[i] + a[j] + a[k] + a[l] == target

 vector<vector<int>>foursum(vector<int>&a,int target) {

        vector<vector<int>>v;
        
        long long int n=a.size();
        long long int sum=0,x=0,res=0;
        sort(a.begin(),a.end());
        
        for(long long int i=0;i<n-3;i++)
        {
            for(long long int j=i+1;j<n-2;j++)
            {
               long long int l=j+1;
               long long int r=n-1;
              while(l<r)
              {
                x=(long long int)a[j]+(long long int)a[l]+(long long int)a[r]+(long long int)a[i];
                if(x==target)
                {
                    v.push_back({a[j],a[l],a[r],a[i]});
                    l++;
                    r--;
                    while(l<r&&a[l]==a[l-1])
                    {
                        l++;
                    }
                    while(r>l&&a[r]==a[r+1])
                    {
                        r--;
                    }
                }
                else if(x>target)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
                while(j+2<a.size()&&a[j]==a[j+1])
            {
                j++;
                continue;
            }
            }  
            while(i+3<a.size()&&a[i]==a[i+1])
            {
                i++;
                continue;
            }
        }
        return v; 
    }

    // Time complexity- O(n*n*n)
    // space complexity-O(1)
 

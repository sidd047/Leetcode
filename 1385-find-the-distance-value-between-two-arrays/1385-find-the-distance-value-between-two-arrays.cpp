class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size(),m=arr2.size();
        int ans=0;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int j=0;
        for(int i=0;i<n;i++){
            while(j<m && arr2[j]<arr1[i]){
                j++;
            }
            if((j<m && abs(arr2[j]-arr1[i])<=d)|| (j-1>=0 && abs(arr2[j-1]-arr1[i])<=d))
            continue;
            ans++;
        }
        return ans;
    }
};
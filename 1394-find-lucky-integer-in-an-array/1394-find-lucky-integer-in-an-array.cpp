class Solution {
public:
    int findLucky(vector<int>& arr) {
        // int n = arr.size();
        // map<int,int>mp;

        // for(int i=0;i<n;i++){
        //     mp[arr[i]]++;
        
        // if(mp[arr[i]] == arr[i]){
        //    //  return arr[i];
       
        // return arr[i];
            
        // }
        // }
        // return arr;
       
    //    for(int i=0;i<arr.size();i++){
    //     int count = 0;

    //     for(int j = 0;j<arr.size();j++){
    //         if(arr[j]==arr[i]){
    //             count++;
    //         }
    //     }
    //     if(count == arr[i]){
    //         return arr[i];
    //     }
    //    }
    //   return -1;


    int ans = -1;
    int j=0;
    for(int i=0;i<arr.size();i++){
        int count =0;
        j=0; // har new i k liye j = 0
        while(j<arr.size()){
            if(arr[j]==arr[i]){
                count++;
            }
            j++;
        }
        if(count == arr[i]){
            ans = max(ans,arr[i]);
        }
    }
    return ans;
    }
};
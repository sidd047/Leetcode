// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
//     }
// };

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        int i = 0;
        int j = 0;

        vector<int> temp;

        while(i < n && j < m) {

            if(nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            }
            else {
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while(i < n) {
            temp.push_back(nums1[i]);
            i++;
        }

        while(j < m) {
            temp.push_back(nums2[j]);
            j++;
        }

        int total = temp.size();

        if(total % 2 == 1) {
            return temp[total / 2];
        }
        else {
            return (temp[total / 2 - 1] +
                    temp[total / 2]) / 2.0;
        }




    }
};
class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            
            int n1 = nums1.size();
            int n2 = nums2.size();
            int n3 = n1 + n2;
            double r;
            int m;
    
            int* arr = new int[n3];
    
            for (int i = 0; i < n1; i++) {
                arr[i] = nums1[i];
            }
    
            for (int i = 0; i < n2; i++) {
                arr[n1 + i] = nums2[i];
            }
    
            sort(arr, arr + n3);
    
            if (n3 % 2 == 0) {
                m = n3 / 2;
                r = (arr[m - 1] + arr[m]) / 2.0;
                return r;
            } else {
                m = n3 / 2;
                r = arr[m];
                return r;
            }
    
           
        }
    };
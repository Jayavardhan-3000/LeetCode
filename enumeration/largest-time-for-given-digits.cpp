class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
       sort(arr.begin(),arr.end()); 
        string ans = "";
        do{
            int h = arr[0]*10+arr[1];
            int m = arr[2]*10+arr[3];
            if(h < 24 && m < 60){
            string current = to_string(h/10)+to_string(h%10)+":"+to_string(m/10)+to_string(m%10);
            if(ans < current)ans=current;
            }
        }while(next_permutation(arr.begin(),arr.end()));
        return ans;
    }
};
class NumArray {
public:
vector<int>arr;
vector<int>psum;
    NumArray(vector<int>& nums) {
        arr = nums;
        psum.resize(arr.size());
        psum[0] = arr[0];
        for(int i = 1; i < arr.size(); i++)
        psum[i] = psum[i-1]+arr[i];
    }
    
    void update(int index, int val) {
        int diff = val - arr[index];
        arr[index] = val;
        for(int i = index; i < arr.size(); i++){
            psum[i] += diff;
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        if(left == 0)return psum[right];
        return psum[right]-psum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
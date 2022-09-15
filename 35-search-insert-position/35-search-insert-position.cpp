class Solution {
public:
    
    int searchInsert(vector<int>& data, int find) {
    
    int low=0, high = data.size()-1;

    int mid;

    while(low<=high){
        mid = (low + high)/2;

        if(data[mid] == find)
            return mid;

        else if(data[mid] > find)
            high = mid-1;
        
        else if(data[mid] < find)
            low = mid+1;
    }
    if(data[mid] > find)
        return mid;
        
    return mid+1;
    }
};
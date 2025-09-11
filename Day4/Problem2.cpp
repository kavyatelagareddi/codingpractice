class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l==r) return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
    }
  public:
    void merge(vector<int>&arr,int l,int m,int r){
        int left=l;
        vector<int>temp;
        int right=m+1;
        while(left<=m&&right<=r){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=m){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=r){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=l;i<=r;i++){
            arr[i]=temp[i-l];
            
        }
    }
};
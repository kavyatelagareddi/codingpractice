class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        int gap=(m+n+1)/2;
        while(gap>0){
            int i=0;
            int j=gap;
            while(j<m+n){
                int val1;
                int val2;
                if(i<n) val1=a[i];
                else  val1=b[i-n];
                
                if(n>j) val2=a[j];
                else   val2=b[j-n];
                
                if(val1>val2){
                    if(i<n&&j<n){
                        swap(a[i],a[j]);
                    
                    }
                    else if(i<n&&j>=n){
                        swap(a[i],b[j-n]);
                    }
                    else{
                        swap(b[i-n],b[j-n]);
                    }
                   
                }
                 i++;
                 j++;
                
            }
            if(gap==1) break;
            gap=(gap+1)/2;
        }
        
    }
};
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()>1){
        //TODO: Need to be sorted first
        
        
        int i=0;
        int j=1;
        do{
            //overlap
            if(max(A[i].start,A[j].start)>min(A[i].end,A[j].end)){
                i++;
                j++;
            }else{ //not overlap
                A[i].start = min(A[i].start,A[j].start);
                A[i].end = max(A[i].end,A[j].end);
                A.erase(A.begin()+j);
            }
        }while(j!=A.size());
    }
    return A;
}

class Solution {
public:
    
    int findMedian(int A[], int m, int B[], int n, int k) {
        if(m == 0) return B[k-1];
        if(n == 0) return A[k-1];
        
        int i = m >> 1, j = n >> 1, *p, *q, t;
        
        if(A[i] < B[j]) {
            p = A;
            q = B;
        }
        else {
            p = B;
            q = A;
            swap(i, j);
            swap(m, n);
        }
        
        t = i + j + 1;
        
        if(t >= k)
            return findMedian(p, m, q, j, k);
        else {
            return findMedian(p+i+1, m-i-1, q, n, k-i-1);
        }
    }
    
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int k = m + n;
        double res = 0.0 + findMedian(A, m, B, n, k/2+1);
        if(k % 2 == 0)
            res = (res + findMedian(A, m, B, n, k/2))/2;
        return res;
    }   
};
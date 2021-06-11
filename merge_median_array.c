// https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/

//cpp

vector <int> a;
        float m;
        for(int i=0;i<nums1.size();i++)
            a.push_back(nums1[i]);
        for(int j=0;j<nums2.size();j++)
            a.push_back(nums2[j]);
        
        sort(a.begin(),a.end());
        
        if(a.size()%2!=0)
            m = (a[a.size()/2]);
        else 
            m = (((a[(a.size()-1)/2])+(a[(a.size())/2]))/2.0);
        return m;

//c
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    float a = 0.0;
    int i=0,j=0,k=0;
    int * num = malloc((nums1Size + nums2Size)*sizeof(int));
    while (i<nums1Size && j<nums2Size)
    {
        if (nums1[i]<nums2[j])
            num[k++] = nums1[i++];
        else
            num[k++] = nums2[j++];
    }
    while(i<nums1Size)
        num[k++] = nums1[i++];
    while(j<nums2Size)
        num[k++] = nums2[j++];
    
    if(k %2 == 0)
    {
        a = ( (num[(k-1)/2]) + (num[(k)/2]) ) / 2.0;
    }
    else
    {
        a = num[k/2];
    }
    return a;
}

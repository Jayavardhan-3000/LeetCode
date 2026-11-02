double findMedianSortedArrays(int* nums1, int nums1size, int* nums2, int nums2size) {int a[nums1size+nums2size],o=0,p=0,i;
    float b;
for( i = 0; i < nums1size+nums2size&&nums1size > p&& nums2size > o; i++){
if(nums1[p] < nums2[o])
a[i] = nums1[p++];
else
a[i] = nums2[o++];
}
    while (p < nums1size) {
        a[i++] = nums1[p++];
    }


    while (o < nums2size) {
        a[i++] = nums2[o++];
    }


    if((nums1size+nums2size)%2)
    b = a[(nums1size+nums2size)/2];
    else
       b = (a[(nums1size+nums2size)/2-1]+a[((nums1size+nums2size)/2)])/2.0; 
    return b;
}
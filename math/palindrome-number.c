bool isPalindrome(int x) {
    int long rev = 0 , c = x;
    while(x>0){
        rev = 10*rev+(x%10);
        x = x/10;
    }
if(rev == c)
return true;
else
return false;
}
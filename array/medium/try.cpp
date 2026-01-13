#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int maxArea(vector<int>& height) 
{
    int max = 0;
    int L=0,R=0;
    int l = 0;
    int r = height.size()-1;

    while(l<r)
    {
        cout<<"l "<<l<<" r "<<r<<endl;
        int water = (r-l) * min(height[l], height[r]);
        if(water >  max)
        {
            max = water;
            L=l;
            R=r;
        }
        if(height[l] < height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout<<"Answer is L : "<<height[L]<<" R : "<<height[R]<<" Max is :"<<max<<endl;
    return max;
}

int main()
{
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    int res = maxArea(arr);

}
















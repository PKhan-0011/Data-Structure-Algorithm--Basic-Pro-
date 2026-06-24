// merge interval's 
// merge two sorted array...
#include <iostream>
#include <vector>
using namespace std;

void mergeTwoArray(int arr[], int arrSize, int brr[], int brrSize, vector<int> &ans){
      int i = 0;
      int j = 0;

      while(i < arrSize && j < brrSize){
            if(arr[i] > brr[j]){
                  ans.push_back(brr[j]);
                  j++;
            }
            else{
            ans.push_back(arr[i]);
             i++;
            }
      }
     
      while(i < arrSize){
           ans.push_back(arr[i]);
           i++;
      }
      while(j < brrSize){
           ans.push_back(brr[j]);
           j++;
      }
}

int main(){
     int arr[] = {20,40,60,70,80};
     int arrSize = 5;

     int brr[] = {10, 30, 50, 90, 100, 110};
     int brrSize = 6;

     vector<int> ans;
     mergeTwoArray(arr, arrSize, brr, brrSize, ans); 
     
     for(auto i: ans){
          cout << i << " " ;
     }

    return 0;
}


// leetcode 88 question hai ye okkh!..

class Solution {
public:
    
    void mergeTwoArray(vector<int>& nums1, int m, vector<int>& nums2, int n, vector<int> &ans){
           int i = 0;
           int j = 0;

           while(i < nums1.size() && j < nums2.size()){
                 if( nums2[j] > nums1[i]){
                      ans.push_back(nums1[i]);
                      i++;
                 }
                 else{
                     ans.push_back(nums2[j]);
                     j++;
                 }
           }

           // yha p abb like i and j dono m s ek out of bound ja chuka hai..
           while(i < nums1.size()){
               ans.push_back(nums1[i]);
               i++;
           }

           while(j < nums2.size()){
             ans.push_back(nums2[j]);
             j++;
           }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> ans;

         while(nums1.size() > m){
             nums1.pop_back();
         }

         //similarly tera nums2 m bhi yhi hone wala hai okh!...

             while(nums2.size() > n){
                nums2.pop_back();
             }
         

         mergeTwoArray(nums1, m, nums2, n, ans);

         nums1 = ans; //ye wala smjh hi nahi aya yrr to be honest..

         for(auto i : ans){
             cout << i << " ";
         }
    }
};
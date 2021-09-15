#include<iostream>
#include <cmath>
using namespace std;

int j(int a[],int n,int num){


        int lower=0;
        int upper=sqrt(n);



        while(a[upper]<=num && upper<n){

                lower=upper;

                upper +=sqrt(n);

                if (upper>n){

                   upper =n;
                }

        for(int i=0;i<n;i++){
            if(a[i]==num)
                return i;
        }


        }
        return -1;

}






int main(void)
{
	int n ,arr[100],want;

	cin>>n;

	for(int i=0;i<n;i++){
        cin>>arr[i];

	}

	cin>>want;

	 cout<<j(arr,n,want);
	return 0;
}

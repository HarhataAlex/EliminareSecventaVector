#include <iostream>
#include<vector>
#include<bits/stdc++.h>

void secventa(std::vector <int> &sir)
{
    int sec=0;
    int nr=0;
    int k= sir.size();
    int i=0;
    
    while(i<=k)
    {
        {
            if(sir[i]==sir[i+1] && sir[i]==sir[i+2] && sir[i]==sir[i+3])
            {
                sec ++;
                for (int j=i; j<k; j++)
                    sir[j]=sir[j+4];
                k-=4;
            }
            else if ((sir[i]==sir[i+1] && sir[i]==sir[i+2]))
            {
               for(int j=i; j<k; j++)
                    sir[j]=sir[j+3];
                k-=3;
            }
             
        }
    }
    //for (int j=k+1; j<=sir.size(); j++)
     // sir.erase(j);

 //    for(int i=0; i<k - 2 ;i++)
 //    {
 //        if(sir[i]==sir[i+1] && sir[i]==sir[i+2])
 //        sec ++;
 //    }
 //    int i=0;
 //    while(i<k-2)
 //    //for(int i=0;i<k;i++)
 //    {
 //        if(sir[i]==sir[i+1] && sir[i]==sir[i+2]&&sir[i]==sir[i+3])
 //        {
 //            for(int j=i;j<k-1;j++)
 //            {
 //                sir[j]=sir[j+1];
 //                sir[j+1] = sir[j+2];  
 //                sir[j+2] = sir[j+3];
 //            }
 //             k--;
 //             nr=nr+2;
 //        } 
 //        else if (sir[i]==sir[i+1] && sir[i]==sir[i+2])
 //        {for(int j=i;j<k-1;j++)
 //            {
 //                sir[j]=sir[j+2];
 //                sir[j+1] = sir[j+3];  
 //                sir[j+2] = sir[j+4];
 //            }
 //             k--;
 //             nr=nr+2;
 //        }
 //         else 
 //         i++;
 //    }
    std::cout<<"elementele sunt : " ;
     for(int i=0 ; i<k; i++)
    {
        std::cout<<sir[i];
    } 
    
}

int main()
{                             
    std::vector <int> sir2 = { 5,1 ,3 ,3 ,2 ,2 ,2 ,2 ,3 ,1 ,1 ,5 ,6 ,4 ,4 ,4 ,4 ,7 };
    secventa(sir2);
   
    return 0;
}

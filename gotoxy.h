/*******************************************************************************************************************************************************

                         First Header File    

*******************************************************************************************************************************************************/		      

#include<iostream>

using namespace std;


/**** Gotoxy Function ****/

   void gotoxy(int x,int y)
 {
      for(int m=0;m<=y;m++)  //vertical Line;
     
     {
         cout<<"\n";
	
           }

       for(int l=0;l<=x;l++)  //Horinzontal Line;
      
      {
         cout<<" ";

           }
	   
    }  

                          /**** End ****/

      

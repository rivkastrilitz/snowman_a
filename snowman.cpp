#include "snowman.hpp"
#include "strings.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
#include <array>
#include <cstring>
#include <cstdlib>
#include <exception>
#include <cassert>





using namespace std;
   void checkInput(int num){
        int cur;
        for( int i=0;i<8;i++){
            cur=num%10;
         if( cur>4 ){
          throw out_of_range("invalid input");

          }
         num=num/10;

          }
       if(num>0){
        throw out_of_range("invalid input-n is too long");
      }

   }
namespace ariel{
    string snowman(int n ){
        checkInput(n);
        string input=to_string(n);
        int la=input.at(4)-'0';
        int ra=input.at(5)-'0';
        string hats=hat[input.at(0)-'0'];
        string head="(";
        head.append(leye[input.at(2)-'0']);
        head.append(nose[input.at(1)-'0']);
        head.append(reye[input.at(3)-'0']);
        head.append(")");
        string larms=larm[input.at(4)-'0'];
        string rarms=rarm[input.at(5)-'0'];
        string tors=torso[input.at(6)-'0'];
        string bot=botom[input.at(7)-'0'];


        string lhe;
        string rhe;
        string rt;
        string lt;
        
        string snowM;
        

        switch (la)
        {
        case 1:
            lt=larms;
            lhe=" ";
            break; 
        case 2:
            lhe= "\\";
            lt=" ";
            break;
        case 3:
            lt=larms;
            lhe=" ";
            break; 
        case 4:
            lt=larms;
            lhe=" ";
            break; 
        
        default:
            break;
        }

        switch (ra)
        {
        case 1:
            rt=rarms;
            rhe=" ";
            break;    
        case 2:
            rhe="/";

            break;
        case 3:
            rt=rarms;
            rhe=" ";
            break;
        case 4:
            rt=rarms;
            rhe=" ";
        
        default:
            break;
        }
        
        snowM.append(hats+lhe+head+rhe+"\n"+lt+tors+rt+"\n"+bot);
       return snowM;
    }  
   

}






#include <stdio.h>
#include <string.h>

int main(){
  
    char grade[12];

    printf("Enter your grade (capital letter):");
    scanf("%s", grade);

    //== used to compare single character, number which can either be a int or a float.
    // strcmp used to compare text multiple character .
    // strcmp is function and not a symbol hence we cannot say Grade strcmp 'A'  but instead we have to call a function.
    // to call a function: functionname(string1, string2) for example  strcmp(Grade,"A-").
    // if what the user have enterd is equal to the condition in other words it's true return 0 so   strcmp(Grade,"A-")==0; if conditon is not equal we use (!=).  
    // || is used to mean ; either , or for example if input is A or A- we use   strcmp(Grade,'A')==0 || strcmp(Grade,"A-") meaning either of those conditions are met.
    // for user input we don't use & when assigning for string 

    if(strcmp(grade,"A")==0 || strcmp(grade,"A-")==0 || strcmp(grade,"B+")==0 ||              
   strcmp(grade,"B")==0 || strcmp(grade,"B-")==0 || strcmp(grade,"C+")==0 ){
    printf("You are qulified for Bachelors Degree at university level");
   } 
   else if(strcmp(grade,"C")==0 || strcmp(grade,"C-")==0 || strcmp(grade,"D+")==0 || strcmp(grade,"D")==0 || strcmp(grade,"D-")==0){
    printf("You are advised to take a course in TVET");
   }
   else {
    printf("invalid grade entery ");
   }

















    return 0;
}


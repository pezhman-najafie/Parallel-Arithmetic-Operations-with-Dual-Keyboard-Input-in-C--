#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int fun (string stt,string arr,int le){

    int temp=stt.length()-1,sum=0;

      for(int j=1;j<stt.length();j++){

            for(int i=0;i<le;i++){


                if(stt[j]==arr[i]){

                    temp--;

                    sum+=i * pow(10,temp);


                }
            }
        }

    return sum;

}

int fun1 (string stt,string arr,int le){

    int temp=stt.length(),sum=0;

      for(int j=0;j<stt.length();j++){

            for(int i=0;i<le;i++){


                if(stt[j]==arr[i]){

                    temp--;

                    sum+=i * pow(10,temp);


                }
            }
        }

    return sum;

}


int main()
{
    //             0   1   2   3   4   5   6   7   8    9   -   +   /   *
    char arry[14]={'w','e','r','t','y','u','i','o','p','l','m','j','v','z'};
    int len=14;
    long double left,right;
    char arry1[14]={'0','1','2','3','4','5','6','7','8','9','-','+','/','*'};
    string str;

    while(str!="q"){
        cin>>str;
         if(str[0]=='z'||str[0]=='j'||str[0]=='m'||str[0]=='v'){

            if(str[0]=='z')
               left *=fun(str,arry,len);
            if(str[0]=='j')
               left +=fun(str,arry,len);
            if(str[0]=='v')
               left /=fun(str,arry,len);
            if(str[0]=='m')
               left -=fun(str,arry,len);

            cout<<"               left : "<<left<<endl;
    }
    else if(str[0]=='w'|| str[0]=='e'|| str[0]=='r'|| str[0]=='t'|| str[0]=='y' || str[0]=='u'|| str[0]=='i'|| str[0]=='o'|| str[0]=='p'||str[0]=='l'){


        left=fun1(str,arry,len);
        cout<<"               left: "<<left<<endl;

    }
    else if(str[0]=='/'||str[0]=='*'||str[0]=='+'||str[0]=='-'){

            if(str[0]=='*')
               right *=fun(str,arry1,len);
            if(str[0]=='+')
               right +=fun(str,arry1,len);
            if(str[0]=='/')
               right /=fun(str,arry1,len);
            if(str[0]=='-')
               right -=fun(str,arry1,len);
        cout<<"               right: "<<right<<endl;


    }
    else{

        right=fun1(str,arry1,len);
        if(str!="q")
          cout<<"               right: "<<right<<endl;


    }


    }




    return 0;
}






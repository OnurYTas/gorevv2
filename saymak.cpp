#include <iostream>

using namespace std;
string saysoy(int a){
    
    
    string arr1[]={"","bir","iki","üç","dört","beş","altı","yedi","sekiz","dokuz"};
    string arr2[]={"","on","yirmi","otuz","kırk","elli","altmış","yetmiş","seksen","doksan"};
    string arr3[]={"","yüz","ikiyüz","üçyüz","dörtyüz","beşyüz","altıyüz","sekizyüz","dokuzyüz"};
    string arr5[3][10]={{"","bir","iki","üç","dört","beş","altı","yedi","sekiz","dokuz"},
    {"","on","yirmi","otuz","kırk","elli","altmış","yetmiş","seksen","doksan"},
    {"","yüz","ikiyüz","üçyüz","dörtyüz","beşyüz","altıyüz","sekizyüz","dokuzyüz"}};
    int a3=a%10;
    int a2=(a/10)%10;
    int a1 = (a/100)%10;
    //basamakları elde et
    // std::cout<<a1<<a2<<a3<<std::endl;
    int alar[3]={a3,a2,a1};
    string s ="";
    if(a==0){
        s="sıfır";
    }
    else{
        for(int i =0;i<3;i++){
            s=arr5[i][alar[i]]+s;

            //std::cout<<arr5[i][alar[i]]<<" "<<alar[i]<<std::endl;

        }
    }
    return(s);
}
int main()
{
    cout<<"sayıgirin: ";
    int l;
    cin>>l;
    std::cout << saysoy(l)<<std::endl;
  
    return 0;
}
//
//  main.cpp
//  first_CplusProject
//
//  Created by 冯予烁 on 2023/5/11.
//

#include <iostream>
#include "Sales_item.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    /*
    std::cout<<"Enter two numbers:"<<std::endl;
    int v1=0, v2=0;
    std::cin>>v1 >>v2;
    std::cout<<"The sum of "<<v1<<" and "<<v2
        <<" is "<<v1+v2<<std::endl;
    std::cout<<"Hello, World!"<<std::endl;
    
    std::cout<<"The product of "<<v1<<" and "<<v2<<" is "<< v1*v2<<std::endl;
    std::cout<<"The first number is "<<v1<<std::endl;
    std::cout<<"The second number is "<<v2<<std::endl;
    */
    
    // 循环练习
    /*
    int sum=0, val=1;
    int sum2=0, val2=50;
    while(val<=10){
        sum+=val;
        ++val;
    }
    std::cout<<"The sum of 1 to 10 is "<<sum<<std::endl;
    while(val2<=100){
        sum2+=val2;
        ++val2;
    }
    std::cout<<"The sum of 50 to 100 is "<<sum2<<std::endl;
    
    int v1=0, v2=0;
    int v3=0;
    std::cout<<"Enter two numbers:"<<std::endl;
    std::cin>>v1>>v2;
    if (v1>=v2){
        v3=v2;
        v2=v1;
        v1=v3;
    }
    v3=v1;
    while(v3<=v2){
        std::cout<<v3<<std::endl;
        ++v3;
    }
    
    
    int sum=0;
    for(int i=-100; i<=100;++i){
        sum+=i;
    }
    std::cout<<"The result is "<<sum<<std::endl;
    
    int sum=0, value=0;
    while(std::cin>>value)
        sum+=value;
    std::cout<<"Sum is: "<<sum<<std::endl;
    
    int v1=0, v2=0;
    std::cout<<"Enter two numbers:"<<std::endl;
    std::cin>>v1>>v2;
    if (v1<=v2){
        while(v1<=v2){
            std::cout<<v1<<std::endl;
            ++v1;
        }  
    }
    else{
        while (v2<=v1){
            std::cout<<v2<<std::endl;
            ++v2;
        }
    }
    */
    
    //Class practice
    //Sales_item item1, item2;
    //std::cin>>item1>>item2;
    //std::cout<<item1+item2<<std::endl;
    
    Sales_item total;
    if (std::cin>>total){
        Sales_item trans;
        while (std::cin>> trans){
            if(total.isbn()==trans.isbn()){
                total+=trans;
            }
            else{
                std::cout<<total<<std::endl;
                total=trans;
            }
        }
        
    }else{
        std::cout<<"No Data!"<<std::endl;
        return -1;
    }
    
    
    
    
    return 0;
}

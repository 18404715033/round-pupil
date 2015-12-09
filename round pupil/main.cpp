//
//  main.cpp
//  round pupil
//
//  Created by 李伯阳 on 15/12/9.
//  Copyright © 2015年 李伯阳. All rights reserved.
//

#include <iostream>
using namespace std;
const double PI=3.1415926;
int main(int argc, const char * argv[]) {
    double r,l,s;
    cin>>r;
    l=2*PI*r;
    cout<<"l="<<l<<endl;
    s=PI*r*r;
    cout<<"s="<<s<<endl;
    return 0;
}

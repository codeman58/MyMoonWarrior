//
//  DLog.h
//  MyMoonWarrior
//
//  Created by cesc on 13-3-10.
//
//

#ifndef __MyMoonWarrior__DLog__
#define __MyMoonWarrior__DLog__

#include <iostream>

#include "cocos2d.h"
USING_NS_CC;

//  Log 工具类
class DLog {
public:
    const static bool flag = true;
    
public:
    
    DLog();
    ~DLog();
    static void d( const char* content );
};
#endif /* defined(__MyMoonWarrior__DLog__) */

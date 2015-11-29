//
//  LLDGameLevel.m
//  GuFengDui
//
//  Created by Aaron Zhang on 11/25/15.
//  Copyright © 2015 Aaron Zhang. All rights reserved.
//

#import "LLDGameLevel.h"

@implementation LLDGameLevel

+ (id)modelWithBase:(LLDPlayBaseModel)base baseNum:(int)baseNum win:(LLDPlayWinModel)win winnum:(int)winNum tip:(NSString *)tip {
    LLDGameLevel *model = [[LLDGameLevel alloc] init];
    model.basemodel = base;
    model.basemodelnum = baseNum;
    model.winmodel = win;
    model.winmodelnum = winNum;
    model.tipMsg = tip;
    model.dotCount = 10;
    
    return model;
}

- (id)init {
    self = [super init];
    if (self) {
        
    }
    return self;
}

@end

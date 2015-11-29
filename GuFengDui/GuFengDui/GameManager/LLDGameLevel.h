//
//  LLDGameLevel.h
//  GuFengDui
//
//  Created by Aaron Zhang on 11/25/15.
//  Copyright © 2015 Aaron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger, LLDPlayBaseModel) {
    LLDPlayBaseModelTime,       // Time Model
    LLDPlayBaseModelStep,       // Step Model
};

typedef NS_ENUM(NSInteger, LLDPlayWinModel) {
    LLDPlayWinModelScore,       // Score
    LLDPlayWinModelRedDot,      // Win Points
    LLDPlayWinModelBlueDot,     // Win Points
    LLDPlayWinModelGreenDot,    // Win Points
    LLDPlayWinModelPurpleDot,   // Win Points
    LLDPlayWinModelGrayDot,     // Win Points
    LLDPlayWinModelCrasy,       // Crasy Model
};

@interface LLDGameLevel : NSObject

@property (assign, nonatomic) LLDPlayBaseModel basemodel;       // Base Model
@property (assign, nonatomic) int              basemodelnum;    // Model Number
@property (assign, nonatomic) LLDPlayWinModel  winmodel;        // Win Model
@property (assign, nonatomic) int              winmodelnum;     // Win Model Numer
@property (assign, nonatomic) NSString        *tipMsg;          // Gate Tip Message
@property (assign, nonatomic) int              dotCount;        // Gate Count, default is 10 gates.

+ (id)modelWithBase:(LLDPlayBaseModel)base baseNum:(int)baseNum win:(LLDPlayWinModel)win winnum:(int)winNum tip:(NSString *)tip;

@end

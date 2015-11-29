//
//  LLDGameManager.h
//  GuFengDui
//
//  Created by Aaron Zhang on 11/25/15.
//  Copyright © 2015 Aaron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LLDItemView.h"

@class LLDGameLevel;

@interface LLDGameManager : NSObject

@property (assign, nonatomic) int score;
@property (assign, nonatomic) int lostStep;

+ (LLDGameManager *)defaultManager;

- (int)getCurrentLevel;

- (NSString *)getCurrentTip;

- (BOOL)isWinTheGame;
- (BOOL)isGameOver;

- (LLDGameLevel *)getCurLevelModel;

- (void)clearDotType:(LLDItemViewStyle)type count:(int)count;

@end

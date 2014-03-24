/*
 Copyright 2011 Lingzhi
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

//
//  LZSliderByScrollView.h
//  SliderByScrollView
//
//  Created by Lingzhi on 14-2-11.
//  Copyright (c) 2014年 Lingzhi. All rights reserved.
//

#import <UIKit/UIKit.h>


#define markMin 0
#define markMaxDef 1000
#define markUnit 1
#define markUnitMid 5
#define markUnitBig 10

//#define bestWholeWidth 320
#define bestWholeHeight 50

#define markUnitWidth 8

#define markUnitHeight 10
#define markUnitMidHeight 15
#define markUnitBigHeight 20

#define markLabelFontSize 12
//#define markLabelWidth 30
#define markLabelHeight 15

#define markXianWidth 1
#define AtLeastTimeSpanBySecondWhenReduceScrollEvent 0.1f

@class LZSliderByScrollView;

@protocol LZSliderByScrollViewDelegate <NSObject>

- (void)scrollStopped:(int)curMark;
- (void)scrolling:(int)curMark;

@end



@interface LZSliderByScrollView : UIView

@property(nonatomic,assign)NSUInteger max;

@property(nonatomic,assign)BOOL needReduceScrollingEvent;

@property (nonatomic,assign) IBOutlet id <LZSliderByScrollViewDelegate> delegate;


@property(nonatomic,assign)BOOL inDebugMode;

@property(nonatomic,assign)BOOL needPointerImageView;
@property(nonatomic,assign)BOOL needPointerLineView;

@property(nonatomic,strong)UIView *PointerLineView;
@property(nonatomic,strong)UIImageView *PointerImageView;
@property(nonatomic,strong)UIScrollView *ScrollView;




-(void)scrollToGivenMark:(int)markIndex;
-(int)getCurrentMark;


@end

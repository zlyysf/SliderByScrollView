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
//  LZViewControllerMySliderByScrollView.m
//  SliderByScrollView
//
//  Created by Lingzhi on 14-2-11.
//  Copyright (c) 2014年 Lingzhi. All rights reserved.
//

#import "LZViewControllerMySliderByScrollView.h"

@interface LZViewControllerMySliderByScrollView ()

@end

@implementation LZViewControllerMySliderByScrollView

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
    [self.ScaleSlider setFrame:CGRectMake(0, 100, 320, 50)];
    
    [self.ScaleSlider scrollToGivenMark:123];
    [self.ScaleSlider scrollToGivenMark:120];
    [self.ScaleSlider scrollToGivenMark:123];//all ok
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



#pragma mark- LZSliderByScrollViewDelegate
- (void)scrollStopped:(int)curMark
{
    [self.LabelCurMarkValue setText:[NSString stringWithFormat:@"%d",curMark ]];
}

- (void)scrolling:(int)curMark
{
    [self.LabelCurMarkValue setText:[NSString stringWithFormat:@"%d",curMark ]];
}

@end

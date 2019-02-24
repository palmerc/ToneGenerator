//
//  ToneGeneratorViewController.h
//  ToneGenerator
//
//  Created by Matt Gallagher on 2010/10/20.
//  Copyright 2010 Matt Gallagher. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>
#import <AudioUnit/AudioUnit.h>

@interface ToneGeneratorViewController : UIViewController
{
    @public
    double frequency;
    double sampleRate;
    double theta;
}

@property (strong, nonatomic) IBOutlet UISlider *frequencySlider;
@property (strong, nonatomic) IBOutlet UIButton *playButton;
@property (strong, nonatomic) IBOutlet UILabel *frequencyLabel;

- (IBAction)sliderChanged:(UISlider *)frequencySlider;
- (IBAction)togglePlay:(UIButton *)selectedButton;
- (void)stop;

@end


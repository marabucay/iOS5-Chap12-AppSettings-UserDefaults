//
//  BIDFlipsideViewController.h
//  AppSettings
//
//  Created by Maria Alice C. Lim on 9/18/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BIDFlipsideViewController;

@protocol BIDFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(BIDFlipsideViewController *)controller;
@end

@interface BIDFlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <BIDFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end

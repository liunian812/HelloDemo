//
//  PANDetailViewController.h
//  HelloDemo
//
//  Created by patrick on 14-7-10.
//  Copyright (c) 2014年 patrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PANDetailViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *storyLabel;
@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UIButton *labelButton;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

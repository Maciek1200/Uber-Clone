//
//  DetailViewController.h
//  style up
//
//  Created by Maciek Popielarz on 11/5/18.
//  Copyright (c) 2018 fancy grows. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


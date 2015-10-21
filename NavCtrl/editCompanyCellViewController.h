//
//  editCompanyCellViewController.h
//  NavCtrl
//
//  Created by Robert Baghai on 10/11/15.
//  Copyright © 2015 Aditya Narayan. All rights reserved.
//

#import "qcdDemoViewController.h"
#import "ChildViewController.h"
#import "DataAccessObject.h"
#import <UIKit/UIKit.h>

@interface editCompanyCellViewController : UIViewController


@property (retain, nonatomic) IBOutlet UILabel *createdCompNameTitle;

@property (retain, nonatomic) IBOutlet UITextField *createdCompanyName;

@property(nonatomic,strong)NSIndexPath *indexPath;



- (IBAction)makeChangesButton:(id)sender;

@property (strong, nonatomic) Company * company;

@property (retain, nonatomic) NSMutableArray *compList;
@property (retain, nonatomic) IBOutlet UILabel *compViewTitle;

@property (retain, nonatomic) IBOutlet UITextField *editStockCodeText;


@property (nonatomic, retain) DataAccessObject *dao;


@end
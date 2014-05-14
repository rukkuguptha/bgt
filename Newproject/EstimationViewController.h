//
//  EstimationViewController.h
//  Newproject
//
//  Created by GMSIndia1 on 5/9/14.
//  Copyright (c) 2014 GMSIndia1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModlEstimation.h"

@interface EstimationViewController : UIViewController{
    
    NSInteger poptype;
    NSInteger leadtuch;
    NSInteger custtuch;
     BOOL recordResults;
    NSString *leadastring;
    NSString * customerstring;
    UIButton *button;
    NSString * typestg;
    
}
@property(strong,nonatomic) ModlEstimation *mdlestmtn;

/*popover*/
@property(strong,nonatomic)UIPopoverController *popOverController;
@property(strong,nonatomic)UITableView *popOverTableView;


/* xmlparser*/
@property(strong,nonatomic)NSXMLParser *xmlParser;
@property(strong,nonatomic)NSMutableString *soapResults;
@property(strong,nonatomic)NSMutableData *webData;
@property (strong, nonatomic)NSMutableArray *planarray;
@property (strong, nonatomic)NSMutableArray *Estimationarray;
@property (strong, nonatomic)NSMutableArray *leadcustmrarry;
@property (strong, nonatomic)NSMutableDictionary *leaddict;
@property (strong, nonatomic)NSMutableDictionary *custmrdict;

@property (strong, nonatomic)NSMutableArray *typelistarray;
@property (strong, nonatomic)NSMutableDictionary *typelistdict;
@property (strong, nonatomic)NSMutableDictionary *revtypelistarray;

@property (strong, nonatomic) IBOutlet UIView *titleview;

@property (strong, nonatomic) IBOutlet UITableViewCell *estmtncell;
@property (strong, nonatomic) IBOutlet UILabel *estlbl;
@property (strong, nonatomic) IBOutlet UILabel *cmpnylbl;

@property (strong, nonatomic) IBOutlet UITableView *estmntable;
@property (strong, nonatomic) IBOutlet UIButton *leadchckbtnlbl;

@property (strong, nonatomic) IBOutlet UIButton *custmrchckbtn;
@property (strong, nonatomic) IBOutlet UIButton *leadcustmrbtnlbl;
@property (strong, nonatomic) IBOutlet UIButton *planbtnlbl;
@property (strong, nonatomic) IBOutlet UIButton *wrktypebtnlbl;

@property (strong, nonatomic) IBOutlet UIView *addview;
@property (strong, nonatomic) IBOutlet UILabel *leadcustmlbl;



- (IBAction)clsebtn:(id)sender;
- (IBAction)addbtn:(id)sender;
- (IBAction)disclurebtn:(id)sender;
- (IBAction)addclsebtn:(id)sender;

- (IBAction)leadchckbtn:(id)sender;
- (IBAction)custmrchck:(id)sender;
- (IBAction)leadcustmrbtb:(id)sender;
- (IBAction)planbtn:(id)sender;
- (IBAction)wrktypebtn:(id)sender;
- (IBAction)updatebtn:(id)sender;
- (IBAction)cancelbtn:(id)sender;


- (IBAction)editbtn:(id)sender;

@end

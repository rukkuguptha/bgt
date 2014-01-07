//
//  EqpmViewController.h
//  Newproject
//
//  Created by GMSIndia1 on 12/13/13.
//  Copyright (c) 2013 GMSIndia1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Equpmntmdl.h"
@interface EqpmViewController : UIViewController{
      BOOL recordResults;
    NSInteger btntype;
    UIButton *button;
    NSInteger path;
    NSInteger deltepath;
    NSInteger   webtype;
    
}
@property(strong,nonatomic)Equpmntmdl *eqmdl;
@property(strong,nonatomic)NSMutableArray *Equpntarray;
@property(strong,nonatomic)NSMutableArray *Subtypearray;
@property(strong,nonatomic)NSMutableArray *Searcharray;


@property (strong, nonatomic) IBOutlet UITextField *stockinhndtxtfld;

@property (strong, nonatomic)NSString*searchstring;

@property (strong, nonatomic) IBOutlet UISearchBar * SearchingBar;

/*popover*/
@property(strong,nonatomic)UIPopoverController *popOverController;
@property(strong,nonatomic)UITableView *popOverTableView;

/* xmlparser*/
@property(strong,nonatomic)NSXMLParser *xmlParser;
@property(strong,nonatomic)NSMutableString *soapResults;
@property(strong,nonatomic)NSMutableData *webData;

//outlets
@property(strong,nonatomic)IBOutlet UITableView *equipmenttbl;
@property(strong,nonatomic)IBOutlet UITableViewCell *equipcell;
@property(strong,nonatomic)IBOutlet UIView *titleview;
@property(strong,nonatomic)IBOutlet UIView *addequipmentview;
@property(strong,nonatomic)IBOutlet UINavigationItem *navItem;
@property(strong,nonatomic)IBOutlet UIScrollView *scroll_addview;

@property (strong, nonatomic) IBOutlet UITextField *codetxfld;
@property (strong, nonatomic) IBOutlet UITextField *destxtfld;

@property (strong, nonatomic) IBOutlet UITextField *subtypetxtfld;
@property (strong, nonatomic) IBOutlet UITextField *purchasetxtfld;

@property (strong, nonatomic) IBOutlet UITextField *serialtxtfld;

@property (strong, nonatomic) IBOutlet UITextField *manufattxtfld;
@property (strong, nonatomic) IBOutlet UITextField *insuredtxtfld;
@property (strong, nonatomic) IBOutlet UITextField *hurstxtfld;
@property (strong, nonatomic) IBOutlet UITextField *fueltxtfld;
@property (strong, nonatomic) IBOutlet UITextField *condtntxtfld;
@property (strong, nonatomic) IBOutlet UITextField *hurlytxtfld;
@property (strong, nonatomic) IBOutlet UITextField *dailytxtfld;

@property (strong, nonatomic) IBOutlet UITextField *shiftwisetxtfld;

@property (strong, nonatomic) IBOutlet UITextField *weeklytxtfld;
@property (strong, nonatomic) IBOutlet UITextField *monthlytxtfld;
@property (strong, nonatomic) IBOutlet UITextField *yearlytxtfld;
- (IBAction)updatebtn:(id)sender;
- (IBAction)cancelbtn:(id)sender;

/*cell outlets*/

@property (strong, nonatomic) IBOutlet UILabel *codelbl;
@property (strong, nonatomic) IBOutlet UILabel *desclbl;
@property (strong, nonatomic) IBOutlet UILabel *typelbl;
@property (strong, nonatomic) IBOutlet UIButton *subsearchlbl;

- (IBAction)subsearch:(id)sender;
- (IBAction)deletebtn:(id)sender;

-(IBAction)closeEqupment:(id)sender;
-(IBAction)addEquipment:(id)sender;
-(IBAction)editequipview:(id)sender;
-(IBAction)closeaddview:(id)sender;
@end

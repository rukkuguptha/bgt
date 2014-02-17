//
//  SitevisitViewController.m
//  Newproject
//
//  Created by GMSIndia 2 on 13/02/14.
//  Copyright (c) 2014 GMSIndia1. All rights reserved.
//

#import "SitevisitViewController.h"

@interface SitevisitViewController ()

@end

@implementation SitevisitViewController

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
    // Do any additional setup after loading the view from its nib.
    
    [[UITabBar appearance] setTintColor:[UIColor redColor]];
    _prdunratetble.layer.borderColor=[UIColor colorWithRed:234.0/255.0f green:244.0/255.0f blue:249.0/255.0f alpha:1.0f].CGColor;
    _prdunratetble.layer.borderWidth=3.0;
    NSArray*newarray=[[NSArray alloc]initWithObjects:_genralitm,_rateitm,_docuitm, nil];
    [self.firsttabbar setItems:newarray animated:YES];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark-tableview datasource
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 5;
    
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"mycell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
        [[NSBundle mainBundle]loadNibNamed:@"Ratecellview" owner:self options:nil];
        cell=_ratecell;
    }
   // cell.textLabel.text=[_serviceaddedarray objectAtIndex:indexPath.row];
    
    return cell;
}
-(void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item{
    
    
    
    
    if ([self.firsttabbar.items objectAtIndex:0]) {
        
        _gernalview.hidden=NO;
        
    }
    if ([self.firsttabbar.items objectAtIndex:1]) {
        
        _rateview.hidden=NO;
        
        
    }
    if ([self.firsttabbar.items objectAtIndex:2]) {
        
        _docmntview.hidden=NO;
        
}

    

    
}

-(IBAction)closesitevisit:(id)sender
{
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (IBAction)cmpxtyofwrkbtn:(id)sender {
    
    
}

- (IBAction)updatebtn:(id)sender {
}
- (IBAction)ratedeletebtn:(id)sender {
}

- (IBAction)Rateaddbtn:(id)sender {
}

- (IBAction)celleditbtn:(id)sender {
}
@end

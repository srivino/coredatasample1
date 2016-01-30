//
//  DevicedetailViewController.h
//  coredatasample1
//
//  Created by Rajarajeswaran Shanmugam on 1/25/16.
//  Copyright © 2016 janbaskclass. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>



@interface DevicedetailViewController : UIViewController


- (IBAction)cancel:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *versionTextField;
@property (strong, nonatomic) IBOutlet UITextField *companyTextField;

@property (strong, nonatomic) NSManagedObject *device;

- (IBAction)save:(id)sender;

@end

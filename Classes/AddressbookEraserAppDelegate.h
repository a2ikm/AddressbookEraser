//
//  AddressbookEraserAppDelegate.h
//  AddressbookEraser
//
//  Created by ikeda_m on 10/06/05.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddressbookEraserAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UIActivityIndicatorView *indicator;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *indicator;

- (IBAction)removeAllRecords:(id)sender;
- (void)remove;


@end


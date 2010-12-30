//
//  SGPhoneStatusAppDelegate.h
//  SGPhoneStatus
//
//  Created by Saurabh Garg on 12/30/10.
//  Copyright 2010 eBuddy BV. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SGPhoneStatusAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

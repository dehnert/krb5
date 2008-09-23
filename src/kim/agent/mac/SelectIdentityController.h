/*
 * Copyright 2008 Massachusetts Institute of Technology.
 * All Rights Reserved.
 *
 * Export of this software from the United States of America may
 * require a specific license from the United States Government.
 * It is the responsibility of any person or organization contemplating
 * export to obtain such a license before exporting.
 * 
 * WITHIN THAT CONSTRAINT, permission to use, copy, modify, and
 * distribute this software and its documentation for any purpose and
 * without fee is hereby granted, provided that the above copyright
 * notice appear in all copies and that both that copyright notice and
 * this permission notice appear in supporting documentation, and that
 * the name of M.I.T. not be used in advertising or publicity pertaining
 * to distribution of the software without specific, written prior
 * permission.  Furthermore if you modify this software you must label
 * your software as modified software and not distribute it in such a
 * fashion that it might be confused with the original M.I.T. software.
 * M.I.T. makes no representations about the suitability of
 * this software for any purpose.  It is provided "as is" without express
 * or implied warranty.
 */

#import <Cocoa/Cocoa.h>
#import "BadgedImageView.h"
#import "Identities.h"

@interface SelectIdentityController : NSWindowController {

    IBOutlet NSArrayController *identityArrayController;
    
    IBOutlet BadgedImageView *kerberosIconImageView;
    IBOutlet NSTextField *headerTextField;
    IBOutlet NSTextField *explanationTextField;
    
    IBOutlet NSTableView *identityTableView;
    IBOutlet NSTableColumn *identityTableColumn;
    IBOutlet NSTableColumn *timeRemainingTableColumn;
    IBOutlet NSButton *addIdentityButton;
    IBOutlet NSButton *removeIdentityButton;
    IBOutlet NSButton *selectIdentityButton;
    IBOutlet NSButton *cancelButton;
    
    Identities *identities;
    NSTimer *refreshTimer;
}

- (IBAction) add: (id) sender;
- (IBAction) remove: (id) sender;

- (IBAction) select: (id) sender;
- (IBAction) cancel: (id) sender;

- (int) runWindow;

- (void) timedRefresh:(NSTimer *)timer;

@end

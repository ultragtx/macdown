//
//  MPEditorView.h
//  MacDown
//
//  Created by Tzu-ping Chung  on 30/8.
//  Copyright (c) 2014 Tzu-ping Chung . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol MPRelativeFilePathResolver <NSObject>
@required
- (NSString *)relativeFilePath:(NSString *)filePath;
@end

@interface MPEditorView : NSTextView

@property BOOL scrollsPastEnd;
@property (weak) id<MPRelativeFilePathResolver> relativeFilePathResolver;
- (NSRect)contentRect;

@end

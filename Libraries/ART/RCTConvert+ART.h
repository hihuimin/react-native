/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <QuartzCore/QuartzCore.h>

#import "ARTBrush.h"
#import "ARTCGFloatArray.h"
#import "ARTTextFrame.h"
#import "RCTConvert.h"

@interface RCTConvert (ART)

+ (CGPathRef)CGPath:(id)json;
+ (CTFontRef)CTFont:(id)json;
+ (CTTextAlignment)CTTextAlignment:(id)json;
+ (ARTTextFrame)ARTTextFrame:(id)json;
+ (ARTCGFloatArray)ARTCGFloatArray:(id)json;
+ (ARTBrush *)ARTBrush:(id)json;

+ (CGPoint)CGPoint:(id)json offset:(NSUInteger)offset;
+ (CGRect)CGRect:(id)json offset:(NSUInteger)offset;
+ (CGColorRef)CGColor:(id)json offset:(NSUInteger)offset;
+ (CGGradientRef)CGGradient:(id)json offset:(NSUInteger)offset;

@end

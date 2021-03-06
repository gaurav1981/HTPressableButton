//
//  UIImage+HTButton.h
//  HTPressableButton
//
//  Created by He Rin Kim on 4/14/14.
//  Copyright (c) 2014 He Rin Kim & Thanakron Tandavas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (HTButton)

+ (UIImage *) buttonWithColor: (UIColor *) buttonColor
                      andSize: (CGSize) size
              andShadowHeight: (CGFloat) shadowHeight
               andShadowColor: (UIColor *) shadowColor
              andCornerRadius: (CGFloat) cornerRadius;

+ (UIImage *) buttonWithHighlightedColor: (UIColor *) buttonColor
                                 andSize: (CGSize) size
                         andShadowHeight: (CGFloat) shadowHeight
                          andShadowColor: (UIColor *) shadowColor
                         andCornerRadius: (CGFloat) cornerRadius;

+ (UIImage *) circularButtonWithColor: (UIColor *) buttonColor
                            andSize: (CGSize) size
                    andShadowHeight: (CGFloat) shadowHeight
                     andShadowColor: (UIColor *) shadowColor
                    andCornerRadius: (CGFloat) cornerRadius;

+ (UIImage *) circularButtonWithHighlightedColor: (UIColor *) buttonColor
                                       andSize: (CGSize) size
                               andShadowHeight: (CGFloat) shadowHeight
                                andShadowColor: (UIColor *) shadowColor
                               andCornerRadius:(CGFloat) cornerRadius;

+ (UIImage *) imageWithColor: (UIColor *) color
                     andSize: (CGSize) size
             andCornerRadius: (CGFloat) cornerRadius;

@end

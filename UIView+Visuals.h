//
//  UIView+Visuals.h
//  uiviewtmp
//
//  Created by Heiko Dreyer on 25.05.11.
//  Copyright 2011 boxedfolder.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UIView (Visuals)

/*
 *  Sets a corners with radius, given stroke size & color
 */
-(void)cornerRadius: (CGFloat)radius 
         strokeSize: (CGFloat)size 
              color: (UIColor *)color;

/*
 *  Draws shadow with properties
 */
-(void)shadowWithColor: (UIColor *)color 
                offset: (CGSize)offset 
               opacity: (CGFloat)opacity 
                radius: (CGFloat)radius;

/*
 *  Removes from superview with fade
 */
-(void)removeFromSuperviewWithFadeDuration: (NSTimeInterval)duration;

/*
 *  Adds a subview with given transition & duration
 */
-(void)addSubview: (UIView *)view withTransition: (UIViewAnimationTransition)transition duration: (NSTimeInterval)duration;

/*
 *  Removes from superview with given transition & duration
 */
-(void)removeFromSuperviewWithTransition: (UIViewAnimationTransition)transition duration: (NSTimeInterval)duration;

@end

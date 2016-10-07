//
//  MHLayer+ReadyMade.h
//  MHAnimation
//
//  Created by longminghong on 16/10/7.
//  Copyright © 2016年 longminghong. All rights reserved.
//

#import "MHLayer.h"

typedef NS_ENUM(NSInteger,MHLayerReflectionDirection) {

    MHLayerReflectionDirectionX,
    MHLayerReflectionDirectionY,
};

@interface MHLayer (ReadyMade)

#pragma mark -
#pragma mark reflection

- (void)reflection:(MHLayer *)target position:(CGPoint)position borderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth opacity:(CGFloat)opacity rotationDirection:(MHLayerReflectionDirection)direction;


- (void)reflection:(MHLayer *)target position:(CGPoint)position borderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth opacity:(CGFloat)opacity rotationDirection:(MHLayerReflectionDirection)direction withGradient:(BOOL)gradient gradientEndColor:(UIColor *)endColor startPoint:(CGPoint)startPoint;



@end

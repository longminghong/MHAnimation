//
//  MHLayer+GradientLayer.m
//  MHAnimation
//
//  Created by longminghong on 16/10/7.
//  Copyright © 2016年 longminghong. All rights reserved.
//

#import "MHLayer+GradientLayer.h"

@implementation MHLayer (GradientLayer)

+ (instancetype)layerGradientLayer{
    
    MHLayer *gradient = [[super alloc]init];
    
    gradient.gradientLayer = [CAGradientLayer layer];
    
    return gradient;
}

+ (instancetype)layerGradientLayerWityLayer:(CALayer *)aLayer{
    
    MHLayer *gradient = [[super alloc]init];
    
    gradient.gradientLayer = [CAGradientLayer layer];
    
    [gradient.gradientLayer setBounds:aLayer.bounds];
    
    return gradient;
}

- (void)layerStartColor:(UIColor *)startColor endColor:(UIColor *)endColor startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint position:(CGPoint)position{
    
    if (CGPointEqualToPoint(CGPointZero, position)) {
        
        self.gradientLayer.position = CGPointMake(self.gradientLayer.bounds.size.width / 2, self.gradientLayer.bounds.size.height * 0.65);
    }else{
        
        self.gradientLayer.position = position;
    }
    
    UIColor *colorStart;
    UIColor *colorEnd;
    
    if (startColor) {
        
        colorStart = startColor;
    }else{
        colorStart = MHLayerColorClear;
    }
    
    if (endColor) {
        
        colorEnd = endColor;
    }else{
        endColor = MHLayerColorWhite;
    }
    
    self.gradientLayer.colors = @[(id)colorStart.CGColor,(id)colorEnd.CGColor];
    
    CGPoint pointStart;
    CGPoint pointEnd;
    
    if (CGPointEqualToPoint(CGPointZero, startPoint)) {
        
        pointStart = startPoint;
    }else{
        
        pointStart = CGPointMake(0.5, 0.5);
    }
    
    if (CGPointEqualToPoint(CGPointZero, endPoint)) {
        
        pointEnd = endPoint;
    }else{
        
        pointEnd = CGPointMake(0.5, 1.0);
    }
    
    self.gradientLayer.startPoint = pointStart;
    self.gradientLayer.endPoint = pointEnd;
    
}
@end

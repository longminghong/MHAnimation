//
//  MHLayer+GradientLayer.h
//  MHAnimation
//
//  Created by longminghong on 16/10/7.
//  Copyright © 2016年 longminghong. All rights reserved.
//

#import "MHLayer.h"

@interface MHLayer (GradientLayer)

+ (instancetype)layerGradientLayer;
+ (instancetype)layerGradientLayerWityLayer:(CALayer *)aLayer;

- (void)layerStartColor:(UIColor *)startColor endColor:(UIColor *)endColor startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint position:(CGPoint)position;

@end

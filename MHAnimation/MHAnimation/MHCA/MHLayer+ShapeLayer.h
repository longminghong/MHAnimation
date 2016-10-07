//
//  MHLayer+ShapeLayer.h
//  MHAnimation
//
//  Created by longminghong on 16/10/7.
//  Copyright © 2016年 longminghong. All rights reserved.
//

#import "MHLayer.h"

typedef NS_ENUM(NSInteger,MHLayerShapeFillRule) {

    MHLayerShapeFillRuleNonZero,
    MHLayerShapeFillRuleEvenOdd,
};

typedef NS_ENUM(NSInteger,MHLayerShapeCapStyle) {
    
    MHLayerShapeCapStyleButt,
    MHLayerShapeCapStyleRound,
    MHLayerShapeCapStyleSquare,
};

typedef NS_ENUM(NSInteger,MHLayerShapeJoinStyle) {
    
    MHLayerShapeJoinStyleMiter,
    MHLayerShapeJoinStyleRound,
    MHLayerShapeJoinStyleBevel,
};

@interface MHLayer (ShapeLayer)

+ (instancetype)layerShapeLayerWityLayer:(CALayer *)aLayer;

- (void)layerFillColor:(UIColor *)fillColor path:(CGPathRef)pathRef fillRule:(MHLayerShapeFillRule)rule;

- (void)layerStrokeColor:(UIColor *)strokeColor width:(CGFloat)width  capStyle:(MHLayerShapeCapStyle)capStyle joinStyle:(MHLayerShapeJoinStyle)joinStyle miterLimit:(CGFloat)miter dashPhase:(CGFloat)dash;
@end

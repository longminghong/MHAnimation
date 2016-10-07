//
//  MHLayer.h
//  MHAnimation
//
//  Created by longminghong on 16/10/7.
//  Copyright © 2016年 longminghong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

#define MHLayerColorClear [UIColor clearColor]
#define MHLayerColorWhite [UIColor whiteColor]

typedef NS_ENUM(NSInteger,MHLayerGravity) {

    MHLayerGravityCenter,
    MHLayerGravityTop,
    MHLayerGravityBottm,
    MHLayerGravityLeft,
    MHLayerGravityRight,
    MHLayerGravityTopLeft,
    MHLayerGravityTopRight,
    MHLayerGravityBottmLeft,
    MHLayerGravityBottomRight,
    MHLayerGravityResize,
    MHLayerGravityResizeAspect,
    MHLayerGravityResizeAspectFill,
};

@interface MHLayer : NSObject{

    
}

@property (nonatomic,strong)    CAGradientLayer *gradientLayer;


@property (nonatomic,assign)    CGSize shadowOffset;
@property (nonatomic,assign)    CGColorRef shadowColorRef;
@property (nonatomic,assign)    CGSize shadowRadius;
@property (nonatomic,assign)    CGSize shadowOpacity;

@property (nonatomic,assign)    CGColorRef borderColorRef;
@property (nonatomic,assign)    CGColorRef borderWidth;

#pragma mark -
#pragma mark initial CALayer instance.
+ (instancetype)initLayer;

- (instancetype)initWityLayer:(CALayer *)aLayer;
+ (instancetype)initLayerWithFrame:(CGRect)frame;

+ (instancetype)layerEAGLLayerWityLayer:(CALayer *)aLayer;
+ (instancetype)layerEmitterLayerWityLayer:(CALayer *)aLayer;

+ (instancetype)layerMetalLayerWityLayer:(CALayer *)aLayer;
+ (instancetype)layerOpenGLLayerWityLayer:(CALayer *)aLayer;
+ (instancetype)layerReplicatorLayerWityLayer:(CALayer *)aLayer;
+ (instancetype)layerScrollLayerWityLayer:(CALayer *)aLayer;

+ (instancetype)layerTextLayerWityLayer:(CALayer *)aLayer;
+ (instancetype)layerTiledLayerWityLayer:(CALayer *)aLayer;


#pragma mark -
#pragma mark Animation Duration Config

- (void)setAnimationDuration:(NSTimeInterval)time;

#pragma mark -
#pragma mark shadow config

- (void)shadowColor:(UIColor *)color shadowRadius:(CGFloat)radius shadowOpacity:(CGFloat)opacity shadowOffset:(CGSize)size;

#pragma mark -
#pragma mark border config

- (void)borderColor:(UIColor *)color borderWidth:(CGFloat)width;

#pragma mark -
#pragma mark cornerRadius config

- (void)roundRadius;
- (void)cornerRadius:(CGFloat)radius;

- (void)setContentWithImage:(UIImage *)image contentsGravity:(MHLayerGravity)gravity;


#pragma mark -
#pragma mark improve performance


#pragma mark -
#pragma mark add animation

- (void)addAnimation;
@end

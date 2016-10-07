//
//  ViewController.m
//  MHAnimation
//
//  Created by longminghong on 16/10/7.
//  Copyright © 2016年 longminghong. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIView *demo = [[UIView alloc]initWithFrame:CGRectMake(50, 100, 200, 100)];
    
    CALayer *layer = [CALayer layer];
    layer.frame = CGRectMake(0, 0, 128, 192);
    layer.backgroundColor = [UIColor redColor].CGColor;
    layer.opacity = 0.9f;
    
    [demo.layer addSublayer:layer];
    demo.layer.backgroundColor = [UIColor clearColor].CGColor;
    demo.layer.borderWidth = 1.0f;
    demo.layer.borderColor = [UIColor grayColor].CGColor;
    
    demo.layer.cornerRadius = 5;
    
    demo.layer.contents = (id)[UIImage imageNamed:@"attributes_2x.png"].CGImage;
    demo.layer.contentsGravity = kCAGravityResizeAspectFill;
//    demo.layer.contentsRect = demo.layer.bounds;
    
    [demo.layer setMasksToBounds:YES];
    [self.view addSubview:demo];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

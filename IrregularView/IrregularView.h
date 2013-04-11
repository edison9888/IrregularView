//
//  IrregularView.h
//  IrregularImages
//
//  Created by OranWu on 13-4-10.
//  Copyright (c) 2013年 Oran Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface IrregularView : UIImageView

//need to be a shape, it means the start point must be the same with the end point
@property (nonatomic, strong)   NSMutableArray   *trackPoints;
@property (nonatomic, readwrite) UIBezierPath     *tempPath;
@property (nonatomic, readwrite) float            cornerRadius;
@property (nonatomic, readwrite) float            borderWidth;

- (void)setMask;
@end

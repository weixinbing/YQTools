//
//  UIImageView+Addition_yq.h
//  YQToolsDemo
//
//  Created by weixb on 2017/2/16.
//  Copyright © 2017年 weixb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (Addition_yq)

/**
 *  @brief  根据frame创建imageview
 *
 *  @param frame imageview frame
 *
 *  @return imageview
 */
+ (id)yq_imageViewWithFrame:(CGRect)frame;

+ (id)yq_imageViewWithStretchableImage:(NSString*)imageName Frame:(CGRect)frame;

- (void)yq_setImageWithStretchableImage:(NSString*)imageName;


// 画水印
// 图片水印
- (void)yq_setImage:(UIImage *)image withWaterMark:(UIImage *)mark inRect:(CGRect)rect;
// 文字水印
- (void)yq_setImage:(UIImage *)image withStringWaterMark:(NSString *)markString inRect:(CGRect)rect color:(UIColor *)color font:(UIFont *)font;
- (void)yq_setImage:(UIImage *)image withStringWaterMark:(NSString *)markString atPoint:(CGPoint)point color:(UIColor *)color font:(UIFont *)font;

@end

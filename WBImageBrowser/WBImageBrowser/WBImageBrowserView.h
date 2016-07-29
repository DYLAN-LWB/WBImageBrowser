//
//  WBImageBrowserView.h
//  WBImageBrowser
//
//  Created by 李伟宾 on 16/7/29.
//  Copyright © 2016年 李伟宾. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREEN_WIDTH    [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT   [[UIScreen mainScreen] bounds].size.height

@protocol WBImageBrowserViewDelegate <NSObject>

- (void)pictureBrowserViewhide;

@end

@interface WBImageBrowserView : UIView


/** 图片开始的索引 */
@property (nonatomic, assign) NSInteger startIndex;

@property (nonatomic, assign) id<WBImageBrowserViewDelegate> delegate;


/** 屏幕方向 */
@property (nonatomic, assign) UIInterfaceOrientation orientation;

/** 用到的 */
@property (nonatomic, strong) UIViewController *viewController;


/**
 *  网络图片初始化方式
 *
 *  @param frame
 *  @param delegate
 *  @param browserInfoArray 网络地址数组
 *
 *  @return
 */
+ (instancetype)pictureBrowsweViewWithFrame:(CGRect)frame delegate:(id<WBImageBrowserViewDelegate>)delegate browserInfoArray:(NSArray *)browserInfoArray;


/**
 *  清除图片缓存
 */
+ (void)clearImagesCache;

/**
 *  显示在父视图
 *
 *  @param view 父视图
 */
- (void)showInView:(UIView *)view;

@end
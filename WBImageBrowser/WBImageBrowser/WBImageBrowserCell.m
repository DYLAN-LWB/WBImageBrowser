//
//  WBImageBrowserCell.m
//  WBImageBrowser
//
//  Created by 李伟宾 on 16/7/29.
//  Copyright © 2016年 李伟宾. All rights reserved.
//

#import "WBImageBrowserCell.h"

@implementation WBImageBrowserCell


- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.bgScrollView  = [[UIScrollView alloc] init];
        self.bgScrollView.maximumZoomScale = 3.0;
        self.bgScrollView.minimumZoomScale = 1;
        self.bgScrollView.showsHorizontalScrollIndicator = NO;
        self.bgScrollView.showsVerticalScrollIndicator = NO;
        [self.contentView addSubview:self.bgScrollView];
        
        self.bgImageView = [[UIImageView alloc] init];
        self.bgImageView.contentMode = UIViewContentModeScaleAspectFit;
        [self.bgScrollView addSubview:self.bgImageView];        
        
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    self.bgScrollView.frame = self.bounds;
    self.bgImageView.frame = self.bounds;
}
@end

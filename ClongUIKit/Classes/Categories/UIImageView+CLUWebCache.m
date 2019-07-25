//
//  UIImageView+CLUWebCache.m
//  ClongUIKit
//
//  Created by zcl on 2019/7/25.
//

#import "UIImageView+CLUWebCache.h"
#import <SDWebImage/UIImageView+WebCache.h>

@implementation UIImageView (CLUWebCache)

- (void)clu_setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage {
    [self sd_setImageWithURL:url placeholderImage:placeholderImage];
}

@end

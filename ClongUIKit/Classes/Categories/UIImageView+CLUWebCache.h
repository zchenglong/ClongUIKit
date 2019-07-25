//
//  UIImageView+CLUWebCache.h
//  ClongUIKit
//
//  Created by zcl on 2019/7/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (CLUWebCache)

- (void)clu_setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage;

@end

NS_ASSUME_NONNULL_END

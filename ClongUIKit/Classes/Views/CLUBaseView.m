//
//  CLUBaseView.m
//  ClongUIKit
//
//  Created by zcl on 2019/7/16.
//

#import "CLUBaseView.h"

@implementation CLUBaseView

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        [self initViews];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    [self makeAutolayoutContraints];
}

#pragma mark - CLUBaseViewTempleteMethodProtocol

- (void)initViews {
    
}

- (void)makeAutolayoutContraints {
    
}

- (void)updateUIWithDisplayModel:(id<CLUBaseViewDisplayModelProtocol>)displayModel {
    self.displayModel = displayModel;
}

+ (CGFloat)viewHeight {
    return 0;
}

@end

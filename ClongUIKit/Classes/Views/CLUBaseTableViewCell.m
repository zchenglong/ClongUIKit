//
//  CLUBaseTableViewCell.m
//  ClongUIKit
//
//  Created by zcl on 2019/7/16.
//

#import "CLUBaseTableViewCell.h"

@implementation CLUBaseTableViewCell


/**
 Init With Xib or Storyboard
 */
- (void)awakeFromNib {
    [super awakeFromNib];
    [self initViews];
}


/**
 Init With TableView dequeue cell with Identifier
 */
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self initViews];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    [self makeAutolayoutContraints];
}

#pragma mark - CLUBaseTableViewCellTempleteMethodProtocol

- (void)initViews {
    [self setSelectionStyle:UITableViewCellSelectionStyleNone];
}

- (void)makeAutolayoutContraints {
    
}

- (void)updateUIWithDisplayModel:(id<CLUBaseTableViewCellDisplayModelProtocol>)displayModel {
    self.displayModel = displayModel;
}

+ (NSString *)cellIdentifier {
    return [NSString stringWithFormat:@"%@_Identifier", NSStringFromClass([self class])];
}

+ (CGFloat)cellHeight {
    return 0;
}

@end

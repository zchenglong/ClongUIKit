//
//  CLUBaseTableViewCell.h
//  ClongUIKit
//
//  Created by zcl on 2019/7/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The Display Layer Model Protocol
 Realize the protocol by Subcell Display Model
 */
@protocol CLUBaseTableViewCellDisplayModelProtocol <NSObject>
@end

/**
 Cell Templete Method
 The actual implementation by Subcell
 */
@protocol CLUBaseTableViewCellTempleteMethodProtocol <NSObject>

//Cell load process
- (void)initViews;
- (void)makeAutolayoutContraints;
- (void)updateUIWithDisplayModel:(id<CLUBaseTableViewCellDisplayModelProtocol>)displayModel;

//Cell Information
+ (NSString *)cellIdentifier;
+ (CGFloat)cellHeight;

@end

/**
 The TableViewCell
 */
@interface CLUBaseTableViewCell : UITableViewCell <CLUBaseTableViewCellTempleteMethodProtocol>

//Action Handler Block
@property(nonatomic,copy) void (^onCellElementActionHandler)(id action, id param);

//The Data Display Model
@property(nonatomic, strong) id<CLUBaseTableViewCellDisplayModelProtocol> displayModel;

@end

NS_ASSUME_NONNULL_END

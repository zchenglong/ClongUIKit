//
//  CLUBaseView.h
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
@protocol CLUBaseViewDisplayModelProtocol <NSObject>
@end

/**
 Cell Templete Method
 The actual implementation by Subcell
 */
@protocol CLUBaseViewTempleteMethodProtocol <NSObject>

//Cell load process
- (void)initViews;
- (void)makeAutolayoutContraints;
- (void)updateUIWithDisplayModel:(id<CLUBaseViewDisplayModelProtocol>)displayModel;

//Cell Information
+ (CGFloat)viewHeight;

@end

@interface CLUBaseView : UIView <CLUBaseViewTempleteMethodProtocol>

//Action Handler Block
@property(nonatomic,copy) void (^onViewElementActionHandler)(id action, id param);

//The Data Display Model
@property(nonatomic, strong) id<CLUBaseViewDisplayModelProtocol> displayModel;

@end

NS_ASSUME_NONNULL_END

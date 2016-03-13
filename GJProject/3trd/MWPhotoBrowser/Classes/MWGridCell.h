//
//  MWGridCell.h
//  MWPhotoBrowser
//
//  Created by Michael Waterfall on 08/10/2013.
//
//

#import <UIKit/UIKit.h>
#import "MWPhoto.h"
#import "MWGridViewController.h"
#import "PSTCollectionView.h"

@protocol MWGridCellDelegate <NSObject>

@optional
-(void)MWGridCellDidSelected;
@end

@interface MWGridCell : PSTCollectionViewCell {}

@property (nonatomic, weak) MWGridViewController *gridController;
@property (nonatomic) NSUInteger index;
@property (nonatomic, assign) id <MWPhoto> photo;
@property (nonatomic) BOOL selectionMode;
@property (nonatomic) BOOL isSelected;
@property(nonatomic,assign) id<MWGridCellDelegate> delegate;
- (void)displayImage;

@end

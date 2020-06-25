//
//  PhotoCell.h
//  Tumblr
//
//  Created by Ruben Green on 6/25/20.
//  Copyright © 2020 Ruben Green. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PhotoCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *photoImageView;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end

NS_ASSUME_NONNULL_END

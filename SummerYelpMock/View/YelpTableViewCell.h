//
//  YelpTableViewCell.h
//  SummerYelpMock
//
//  Created by Vivian02 on 8/29/17.
//  Copyright © 2017 Vivian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end


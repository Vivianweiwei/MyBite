//
//  FilterTableViewCell.h
//  SummerYelpMock
//
//  Created by Vivian on 9/12/17.
//  Copyright © 2017 Vivian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpFilterDataModel.h"

@interface FilterTableViewCell : UITableViewCell

- (void)updateDataModel:(YelpFilterDataModel *)dataModel;

@end

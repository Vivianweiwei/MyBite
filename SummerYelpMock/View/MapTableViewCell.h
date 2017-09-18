//
//  MapTableViewCell.h
//  SummerYelpMock
//
//  Created by Vivian02 on 9/5/17.
//  Copyright © 2017 Vivian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"


@interface MapTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

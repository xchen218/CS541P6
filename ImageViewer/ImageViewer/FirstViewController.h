//
//  FirstViewController.h
//  ImageViewer
//
//  Created by Xiang on 2019/4/5.
//  Copyright © 2019年 xchen218. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "CollectionCell.h"
#import "SerchSetingView.h"


@interface FirstViewController : BaseViewController{
    NSMutableArray *_dataArr;
    UICollectionView *_collectionView;
    UITextField *_field;
    
}


@end


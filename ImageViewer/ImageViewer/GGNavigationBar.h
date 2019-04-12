//


#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, GGNavigationBarType){
    GGNavigationBarTypeNormal = 0,
    GGNavigationBarTypeCustom = 1, // 无返回
    GGNavigationBarTypeNone = 2,
};
@interface GGNavigationBar : UIView


@property (nonatomic,strong,readonly) UIImageView *backgroundView;
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) UIColor *titleColor;
@property (nonatomic,strong) UIFont *titleFont;
@property (nonatomic,strong)UIView *leftView;
@property (nonatomic,strong)UIView *rightView;


@end

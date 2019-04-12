

#import <UIKit/UIKit.h>
#import "GGNavigationBar.h"
#import "MJRefresh.h"
#import "MBProgressHUD+string.h"

#define orgX 16

@interface BaseViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>{
    int currentPage;
    int total;
    GGNavigationBar *_naviBar;
    
}

@property (nonatomic,assign) BOOL noTable;
@property (nonatomic,strong) UITableView *tableView;

@property (nonatomic,assign) BOOL showGDTADView;

-(void)setNaviType:(GGNavigationBarType)naviType;

-(void)showHudView;
-(void)hideHudView;

-(void)showMessage:(NSString*)message;


@end

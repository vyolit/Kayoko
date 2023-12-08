//
//  KayokoTableView.h
//  Kayoko
//
//  Created by Alexandra Aurora Göttlicher
//

#import <UIKit/UIKit.h>
#import "KayokoTableViewCell.h"
#import "../../../Manager/PasteboardManager.h"

@interface KayokoTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
@property(nonatomic)NSString* name;
@property(nonatomic)NSArray* items;
@property(nonatomic, assign)BOOL automaticallyPaste;
- (instancetype)initWithName:(NSString *)name;
- (void)reloadDataWithItems:(NSArray *)items;
@end

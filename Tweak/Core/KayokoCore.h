//
//  KayokoCore.h
//  Kayoko
//
//  Created by Alexandra Aurora Göttlicher
//

#import "substrate.h"
#import "../../Manager/PasteboardManager.h"
#import "Views/KayokoView.h"

static CGFloat const kHeight = 420;

KayokoView* kayokoView;

NSUserDefaults* preferences;
BOOL pfEnabled;

NSUInteger pfMaximumHistoryAmount;
BOOL pfSaveText;
BOOL pfSaveImages;
BOOL pfAutomaticallyPaste;

@interface UIStatusBarWindow  : UIWindow
@end

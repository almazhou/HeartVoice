//
//  AppDelegate.h
//  HeartVoice
//
//  Created by xzhou on 10/8/13.
//  Copyright (c) 2013 xzhou. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong, nonatomic) RootViewController *rootViewController;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

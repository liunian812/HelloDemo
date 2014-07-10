//
//  PANAppDelegate.h
//  HelloDemo
//
//  Created by patrick on 14-7-10.
//  Copyright (c) 2014年 patrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PANAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

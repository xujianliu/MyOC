//
//  AppDelegate.h
//  MyOC
//
//  Created by xujian on 2019/11/19.
//  Copyright © 2019 xujian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


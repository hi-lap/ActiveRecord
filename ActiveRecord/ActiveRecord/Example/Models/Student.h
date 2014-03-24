//
//  Student.h
//  ActiveRecord
//
//  Created by Michal Konturek on 20/03/2014.
//  Copyright (c) 2014 Michal Konturek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Course, Module, Registration, StudyGroup;

@interface Student : NSManagedObject

@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSNumber * uid;
@property (nonatomic, retain) Course *course;
@property (nonatomic, retain) NSSet *modules;
@property (nonatomic, retain) NSSet *studyGroups;
@property (nonatomic, retain) Registration *registration;
@end

@interface Student (CoreDataGeneratedAccessors)

- (void)addModulesObject:(Module *)value;
- (void)removeModulesObject:(Module *)value;
- (void)addModules:(NSSet *)values;
- (void)removeModules:(NSSet *)values;

- (void)addStudyGroupsObject:(StudyGroup *)value;
- (void)removeStudyGroupsObject:(StudyGroup *)value;
- (void)addStudyGroups:(NSSet *)values;
- (void)removeStudyGroups:(NSSet *)values;

@end

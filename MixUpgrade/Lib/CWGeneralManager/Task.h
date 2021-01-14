//
//  PythonTask.h
//  TestDemo
//
//  Created by ciwei luo on 2020/4/20.
//  Copyright © 2017 Innorev. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Task : NSObject
-(instancetype)initWithPythonPath:(NSString*)path parArr:(NSArray *)parArr lauchPath:(NSString *)lauchPath;
-(instancetype)initWithLauchPath:(NSString *)lauchPath  cmd:(NSString *)cmd;
-(instancetype)initWithLauchPath:(NSString *)lauchPath;
-(void)cw_setParArr:(NSArray *)parArr  pythonPath:(NSString*)path;
-(NSString*)cw_send:(NSString*)command;
//-(NSString*)timeoutsend:(NSString*)command;
-(BOOL)cw_close;
-(BOOL)cw_isOpen;
-(NSString*)cw_read;
-(instancetype)initWithShellPath:(NSString*)filePath parArr:(NSArray *)parArr pythonPath:(NSString *)pythonPath;
@property (nonatomic,strong) NSFileHandle *writeHandle;
+(NSString *)termialWithCmd:(NSString *)cmd;
@end

NS_ASSUME_NONNULL_END

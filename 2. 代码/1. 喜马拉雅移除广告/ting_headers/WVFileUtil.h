//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WVFileUtil : NSObject
{
}

+ (void)updateLstModifiedTime:(id)arg1;
+ (_Bool)checkIsStopWordFile:(id)arg1;
+ (id)getMuchFilePath:(id)arg1 withMD5Name:(id)arg2;
+ (id)fileNameFromPath:(id)arg1;
+ (id)getMuchFilePath:(id)arg1 withResourceName:(id)arg2;
+ (id)getMuchFolder:(id)arg1;
+ (id)getCommonFolder:(id)arg1;
+ (id)getConfigurationFolder:(id)arg1;
+ (id)md5:(id)arg1;
+ (id)getWVCachesFilePath:(id)arg1;
+ (id)getWVCachesPath;
+ (id)getDocumentPath;
+ (id)getBunddlePath;
+ (id)mainBunddle;
+ (void)updateFileLastModifiedTime:(id)arg1;
+ (double)getFileLastModifiedTime:(id)arg1;
+ (_Bool)addSkipBackupAttributesToFile:(id)arg1;
+ (unsigned long long)folderSize:(id)arg1;
+ (unsigned long long)fileSizeForPath:(id)arg1;
+ (id)listAllFilesAt:(id)arg1 isRecursive:(_Bool)arg2;
+ (_Bool)copyItemInDirectory:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;
+ (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2;
+ (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2;
+ (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)removeItemAtPath:(id)arg1;
+ (void)createFolderWithoutBackup:(id)arg1;
+ (_Bool)createFolder:(id)arg1 error:(id *)arg2;
+ (_Bool)createFolder:(id)arg1;
+ (id)getPathDesc:(id)arg1;
+ (id)getCachesFilePath:(id)arg1;
+ (id)getCachesPath;
+ (id)getConfigPath;
+ (id)getWVAppPath;
+ (id)getTempPath:(id)arg1;
+ (void)initialize;
+ (id)mainBundle;

@end


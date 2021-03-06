//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FIRInstanceIDBackupExcludedPlist : NSObject
{
    _Bool _fileInStandardDirectory;
    NSDictionary *_cachedPlistContents;
    NSString *_fileName;
    NSString *_subDirectoryName;
}

@property(nonatomic) _Bool fileInStandardDirectory; // @synthesize fileInStandardDirectory=_fileInStandardDirectory;
@property(copy, nonatomic) NSString *subDirectoryName; // @synthesize subDirectoryName=_subDirectoryName;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSDictionary *cachedPlistContents; // @synthesize cachedPlistContents=_cachedPlistContents;
- (void).cxx_destruct;
- (unsigned long long)supportedDirectory;
- (_Bool)doesFileExistInDirectory:(unsigned long long)arg1;
- (id)pathWithName:(id)arg1 inDirectory:(unsigned long long)arg2;
- (id)plistPathInDirectory:(unsigned long long)arg1;
- (unsigned long long)plistDirectory;
- (_Bool)doesFileExist;
- (_Bool)moveToApplicationSupportSubDirectory:(id)arg1;
- (id)contentAsDictionary;
- (_Bool)deleteFile:(id *)arg1;
- (_Bool)writeDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFileName:(id)arg1 subDirectory:(id)arg2;

@end


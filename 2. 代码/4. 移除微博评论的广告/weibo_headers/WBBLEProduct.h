//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "WBBLEUploadTaskDelegate-Protocol.h"

@class CBCentralManager, CBUUID, NSMutableArray, NSString, SNHTTPRequestOperationWrapper, WBBLEDevice, WBHCDeviceInfo, WBHCProductInfo;
@protocol WBBLEProductDelegate;

@interface WBBLEProduct : NSObject <CBCentralManagerDelegate, WBBLEUploadTaskDelegate>
{
    CBCentralManager *_centralManager;
    CDUnknownBlockType _scanBlock;
    SNHTTPRequestOperationWrapper *_bindRequest;
    _Bool _isScanning;
    _Bool _inBackground;
    _Bool _waitBLEOpen;
    id <WBBLEProductDelegate> _delegate;
    unsigned long long _mode;
    unsigned long long _state;
    unsigned long long _failState;
    NSMutableArray *_deviceList;
    CDUnknownBlockType _checkBlock;
    CDUnknownBlockType _macBlock;
    CDUnknownBlockType _processBlock;
    NSString *_appKey;
    NSString *_bleName;
    CBUUID *_notifyServiceUUID;
    CBUUID *_writeServiceUUID;
    CBUUID *_notifyCharacterUUID;
    CBUUID *_writeCharacterUUID;
    WBHCDeviceInfo *_bindDeviceInfo;
    WBHCProductInfo *_productInfo;
    NSMutableArray *_cachedDatas;
}

+ (id)productWithProductInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *cachedDatas; // @synthesize cachedDatas=_cachedDatas;
@property(readonly, nonatomic) WBHCProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(readonly, nonatomic) WBHCDeviceInfo *bindDeviceInfo; // @synthesize bindDeviceInfo=_bindDeviceInfo;
@property(readonly, nonatomic) CBUUID *writeCharacterUUID; // @synthesize writeCharacterUUID=_writeCharacterUUID;
@property(readonly, nonatomic) CBUUID *notifyCharacterUUID; // @synthesize notifyCharacterUUID=_notifyCharacterUUID;
@property(readonly, nonatomic) CBUUID *writeServiceUUID; // @synthesize writeServiceUUID=_writeServiceUUID;
@property(readonly, nonatomic) CBUUID *notifyServiceUUID; // @synthesize notifyServiceUUID=_notifyServiceUUID;
@property(readonly, copy, nonatomic) NSString *bleName; // @synthesize bleName=_bleName;
@property(readonly, copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(readonly, copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType macBlock; // @synthesize macBlock=_macBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
@property(readonly, nonatomic) NSMutableArray *deviceList; // @synthesize deviceList=_deviceList;
@property(nonatomic) unsigned long long failState; // @synthesize failState=_failState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <WBBLEProductDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bleUploadTaskDidFinish:(id)arg1;
- (void)handleTaskResponse:(id)arg1;
- (id)destroyRepeatedBufferDatas:(id)arg1;
- (void)receiveBuffer:(id)arg1 from:(id)arg2;
- (void)receiveProcessedData:(id)arg1 from:(id)arg2 error:(id)arg3;
- (void)receiveOriginalData:(id)arg1 from:(id)arg2 error:(id)arg3;
- (void)connectStateChanged:(id)arg1 error:(id)arg2;
- (id)productStateString:(unsigned long long)arg1;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)stateString:(long long)arg1;
- (void)forceConnectCurrentDevice;
- (void)reset;
- (void)cleanProductData;
- (void)dropAndUpdateTime:(id)arg1;
- (void)drop;
- (void)startWorkWithBlock:(CDUnknownBlockType)arg1;
- (void)startWork;
- (void)stopScan;
- (id)initWithProductInfo:(id)arg1;
- (void)connectNextDevice;
- (void)startConnect;
- (void)stopScanAndConnectIfNeed;
- (void)scanWithBlock:(CDUnknownBlockType)arg1;
- (void)bindDevice:(id)arg1;
- (void)dropDevice:(id)arg1;
- (void)checkDeviceProduct:(id)arg1;
- (void)excuteUpdateBlock:(id)arg1;
- (id)findDeviceFor:(id)arg1;
- (id)UUIDWithString:(id)arg1;
@property(readonly, nonatomic) long long bleState;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CBCentralManager *centralManager;
@property(readonly, nonatomic) WBBLEDevice *connectedDevice;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


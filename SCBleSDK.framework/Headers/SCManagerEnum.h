//
//  SCManagerEnum.h
//  SCBleSDK
//
//  Created by 高瑞 on 2024/3/6.
//

#ifndef SCManagerEnum_h
#define SCManagerEnum_h

typedef NS_ENUM(NSInteger, SCBleManagerState) {
    SCBleManagerStateScaning = 0, //正在搜索设备
    SCBleManagerStateConnecting, //正在连接设备
    SCBleManagerStateChecking, //正在校验设备
    SCBleManagerStateConnected, //设备已连接
    SCBleManagerStateDisconnected, //设备断开连接
};

typedef NS_ENUM(NSInteger, SCBleManagerError) {
    SCBleManagerErrorUnknow = 0, //未知错误
    SCBleManagerErrorScanNoDevice, //未搜索到设备
    SCBleManagerErrorConnectFail, //设备连接失败
    SCBleManagerErrorCheckFail, //设备校验失败
    SCBleManagerErrorPoweredOff, //手机蓝牙未开启
    SCBleManagerErrorUnauthorized, //未获得蓝牙授权
    SCBleManagerErrorUnsupported, //设备不支持蓝牙
};

typedef NS_ENUM(NSInteger, SCBleLightMode) {
    SCBleLightModeWhite = 0, //日光模式
    SCBleLightModeParallel, //偏振模式
    SCBleLightModeCross, //混合偏振模式
    SCBleLightModeUv, //UV模式
};

#endif /* SCManagerEnum_h */

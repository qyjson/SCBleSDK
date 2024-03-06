//
//  SCManager.h
//  SCBleSDK
//
//  Created by minadata on 2024/2/29.
//

#import <Foundation/Foundation.h>
#import <SCBleSDK/SCManagerEnum.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SCManagerDelegate <NSObject>

@required

- (void)sc_bleConnectionStateDidChange:(SCBleManagerState)state; //设备连接状态发生改变

- (void)sc_bleConnectionDidFailWithError:(SCBleManagerError)error; //设备连接失败

@end

@interface SCManager : NSObject

@property(nonatomic, weak, nullable) id<SCManagerDelegate> delegate;

+ (SCManager *)defaultManager;

/// 初始化sdk
/// - Parameters:
///   - apiKey: Panddi API KEY
///   - memberGuid: 用户标识
- (void)initSDK:(nonnull NSString *)apiKey memberGuid:(nonnull NSString *)memberGuid;

/// 获取所有的检测部位
- (NSArray *)testRegions;

/// 开始连接设备
- (void)startConnect;

/// 断开连接设备
- (void)disconnectDevice;

/// 开启设备灯光
- (void)openLight;

/// 关闭设备灯光
- (void)closeLight;

@end

NS_ASSUME_NONNULL_END

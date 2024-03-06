//
//  SCCameraView.h
//  SCBleSDK-test
//
//  Created by 高瑞 on 2024/3/4.
//

#import <UIKit/UIKit.h>
#import <SCBleSDK/SCSkinTestDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SCCameraViewDelegate <NSObject>

/// 用来接收单个部位检测数据
/// - Parameter data: 检测数据
- (void)sc_skinTestComplete:(SCSkinTestDataModel *)data;

/// 调用uploadSkinTestData后的回调方法
/// - Parameters:
///   - analysisId: 用于查询报告
///   - error: 错误信息
- (void)sc_uploadSkinTestComplete:(nullable NSString *)analysisId error:(nullable NSError *)error;

@end

@interface SCCameraView : UIView

@property(nonatomic, weak, nullable) id<SCCameraViewDelegate> delegate;

/// 开始调用摄像头画面
- (void)startRunning;

/// 结束调用摄像头画面
- (void)stopRunning;

/// 开始检测
/// - Parameter detectionPosition: 检测部位
- (void)startTestWithDetectionPosition:(NSString *)detectionPosition;

/// 提交检测数据
/// - Parameters:
///   - data: 检测数据
///   - isLastRegion: 是否是最后一个检测部位
- (void)uploadSkinTestData:(SCSkinTestDataModel *)data isLastRegion:(BOOL)isLastRegion;

@end

NS_ASSUME_NONNULL_END

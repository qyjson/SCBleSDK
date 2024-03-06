//
//  SCSkinTestUploadData.h
//  SCBleSDK
//
//  Created by 高瑞 on 2024/3/6.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SCBleSDK/SCManagerEnum.h>

NS_ASSUME_NONNULL_BEGIN

@interface SCSkinTestImageModel : NSObject

@property (assign, nonatomic) SCBleLightMode mode;
@property (strong, nonatomic) UIImage *image;

@end

@interface SCSkinTestDataModel : NSObject

@property (strong, nonatomic) NSString *testType;
@property (strong, nonatomic) NSNumber *capBaseValue;
@property (strong, nonatomic) NSString *deviceCiphertext;
@property (strong, nonatomic) NSArray *capTHDataList;
@property (strong, nonatomic) NSString *detectionPosition;
@property (strong, nonatomic) NSString *analysisId;
@property (strong, nonatomic) NSMutableArray *imageList;

@end

NS_ASSUME_NONNULL_END

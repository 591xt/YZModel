

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Model)


/// 字典转模型
/// @param dic 字典
+(instancetype)yzModelwithDic:(id)dic;

/// 字典数组转模型数组
/// @param dicArray 字典数组
+(instancetype)yzModelArraywithDicArray:(id)dicArray;

/// 模型转字典
-(NSDictionary*)yzDicwithModel;

/// 模型数组转字典数组
-(NSArray*)yzDicwithModelArray;

-(NSDictionary*)arrayModel;

@end

NS_ASSUME_NONNULL_END


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Model)

+(instancetype)withModel:(NSDictionary*)dic;
+(instancetype)withArrayModel:(NSArray*)array;
-(NSDictionary*)arrayModel;

@end

NS_ASSUME_NONNULL_END

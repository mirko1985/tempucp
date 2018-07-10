#import <Foundation/Foundation.h>

@class BaseRandomString, BaseStdlibArray;

@protocol BaseStdlibIterator;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
-(instancetype) init __attribute__((unavailable));
+(instancetype) new __attribute__((unavailable));
+(void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface BaseMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface BaseMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface BaseRandomString : KotlinBase
-(instancetype)initWithText:(NSString*)text NS_SWIFT_NAME(init(text:)) NS_DESIGNATED_INITIALIZER;

-(NSString*)randomString NS_SWIFT_NAME(randomString());
@property (readonly) NSString* text;
@end;

__attribute__((objc_subclassing_restricted))
@interface Base : KotlinBase
+(void)mainArgs:(BaseStdlibArray*)args NS_SWIFT_NAME(main(args:));
@end;

__attribute__((objc_subclassing_restricted))
@interface BaseStdlibArray : KotlinBase
+(instancetype)arrayWithSize:(int32_t)size init:(id _Nullable(^)(NSNumber*))init NS_SWIFT_NAME(init(size:init:));

+(instancetype)alloc __attribute__((unavailable));
+(instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));

-(id _Nullable)getIndex:(int32_t)index NS_SWIFT_NAME(get(index:));
-(id<BaseStdlibIterator>)iterator NS_SWIFT_NAME(iterator());
-(void)setIndex:(int32_t)index value:(id _Nullable)value NS_SWIFT_NAME(set(index:value:));
@property (readonly) int32_t size;
@end;

@protocol BaseStdlibIterator
@required
-(BOOL)hasNext NS_SWIFT_NAME(hasNext());
-(id _Nullable)next NS_SWIFT_NAME(next());
@end;

NS_ASSUME_NONNULL_END

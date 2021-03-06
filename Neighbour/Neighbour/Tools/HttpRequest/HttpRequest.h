//
//  HttpRequest.h
//  Neighbour
//
//  Created by apple on 15/11/3.
//  Copyright (c) 2015年 com.zhoudao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HttpRequest : NSObject

/**
 *  发送一个get请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调
 *  @param failure 请求失败后的回调
 */
+(void)getWithURL:(NSString *)url params:(NSDictionary *)params success:(void(^)(id json))success failure:(void(^)(NSError *error))failure;
/**
 *  发送一个post请求
 *
 *  @param url     请求路径
 *  @param params  请求参数
 *  @param success 请求成功后的回调
 *  @param failure 请求失败后的回调
 */
+(void)postWithURL:(NSString *)url params:(NSDictionary *)params success:(void(^)(id json))success failure:(void (^)(NSError *error))failure;

@end

//
//  NSString+Category.h
//  hehe
//
//  Created by 黄振 on 2018/12/10.
//

#import <Foundation/Foundation.h>

@interface NSString (Category)

/**
 正则校验电话号码
 */
-(BOOL)isVAlidPhoneNumber;

/**
 正则校验邮箱
 */
-(BOOL)isValidEmail;


/**
 截取字符串
 */
-(NSString*)getSubstringFrom:(NSInteger)begin to:(NSInteger)end;


/**
 由字母或数字组成 min-max位密码字符串（正则)
 */
-(BOOL)isPasswordWith:(NSInteger)min and:(NSInteger)max;


@end

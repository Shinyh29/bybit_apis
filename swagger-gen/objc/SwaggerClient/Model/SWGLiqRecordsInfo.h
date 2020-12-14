#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Bybit API
* ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
*
* OpenAPI spec version: 0.2.10
* Contact: support@bybit.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol SWGLiqRecordsInfo
@end

@interface SWGLiqRecordsInfo : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* qty;

@property(nonatomic) NSString* side;

@property(nonatomic) NSNumber* time;

@property(nonatomic) NSString* symbol;

@property(nonatomic) NSNumber* price;

@end
//
//  ContractFileManager.h
//  qtum wallet
//
//  Created by Vladimir Lebedevich on 16.05.17.
//  Copyright © 2017 PixelPlex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TemplateModel.h"

@interface ContractFileManager : NSObject

-(NSDictionary*)getAbiFromBundleWithTemplate:(NSString*) templateName;

-(NSString*)getContractFromBundleWithTemplate:(NSString*) templateName;

-(NSData*)getBitcodeFromBundleWithTemplate:(NSString*) templateName;

-(NSArray<TemplateModel*>*)getAvailebaleTemplates;

-(NSDictionary*)getAbiFromBundle;

-(NSDate*)getDateOfCreationTemplate:(NSString*) templateName;

+ (instancetype)sharedInstance;

- (id)init __attribute__((unavailable("cannot use init for this class, use sharedInstance instead")));
+ (instancetype)alloc __attribute__((unavailable("alloc not available, call sharedInstance instead")));
+ (instancetype) new __attribute__((unavailable("new not available, call sharedInstance instead")));


@end
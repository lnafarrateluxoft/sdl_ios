//
//  SDLIAPControlSessionDelegate.h
//  SmartDeviceLink-iOS
//
//  Created by Nicole on 5/13/19.
//  Copyright © 2019 smartdevicelink. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SDLIAPControlSession;

NS_ASSUME_NONNULL_BEGIN

@protocol SDLIAPControlSessionDelegate <NSObject>

- (void)retryControlSession:(nullable SDLIAPSession *)controlSession;
- (void)controlSession:(SDLIAPSession *)controlSession didGetProtocolString:(NSString *)protocolString forConnectedAccessory:(EAAccessory *)accessory;

@end

NS_ASSUME_NONNULL_END


//
//  InMobi.h
//  InMobi
//
//  Created by junhai on 2019/5/20.
//  Copyright © 2019 hello. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for InMobi.
FOUNDATION_EXPORT double InMobiVersionNumber;

//! Project version string for InMobi.
FOUNDATION_EXPORT const unsigned char InMobiVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <InMobi/PublicHeader.h>


#import <InMobi/IMSdk.h>
#import <InMobi/IMCommonConstants.h>
#import <InMobi/IMRequestStatus.h>

#import <InMobi/IMBanner.h>
#import <InMobi/IMBannerDelegate.h>

#import <InMobi/IMInterstitial.h>
#import <InMobi/IMInterstitialDelegate.h>

#import <InMobi/IMNative.h>
#import <InMobi/IMNativeDelegate.h>

/*
 
 [IMSdk initWithAccountID:@"81F0BEB975425528576B7D915AE5A64D"];
 
 [IMSdk setLogLevel:kIMSDKLogLevelNone];
 
 [IMSdk initWithAccountID:@"ABEBFEBEE164B369C52463330C835C50" consentDictionary:@{IM_GDPR_CONSENT_AVAILABLE:@"true", @"gdpr":@1}];
 
 [IMSdk updateGDPRConsent:@{IM_GDPR_CONSENT_AVAILABLE:@"true", @"gdpr":@1}];
 
 [IMSdk setGender:kIMSDKGenderFemale];
 
 [IMSdk setAgeGroup:kIMSDKAgeGroupBetween25And29];
 
 [[IMInterstitial alloc] initWithPlacementId:@"C82AC489D2886D49F7E561EBE9C5B79E"];
 
 [IMSdk setMute:YES];
 
 [IMSdk setAge:18];
 
 [IMSdk setAreaCode:@"US"];
 
 */

//
//  MPConstants.h
//  MoPub
//
//  Created by Nafis Jamal on 2/9/11.
//  Copyright 2011 MoPub, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#define MP_DEBUG_MODE               1

#define HOSTNAME                    @"ads.rekmob.com"
#define HOSTNAME_FOR_TESTING        @"testads.rekmob.com"
#define DEFAULT_PUB_ID              @"agltb3B1Yi1pbmNyDAsSBFNpdGUYkaoMDA"
#define MP_SERVER_VERSION           @"8"
#define MP_SDK_VERSION              @"2.1.0"

// Sizing constants.
#define REKMOB_BANNER_SIZE           CGSizeMake(320, 50)
#define REKMOB_MEDIUM_RECT_SIZE      CGSizeMake(300, 250)
#define REKMOB_LEADERBOARD_SIZE      CGSizeMake(728, 90)
#define REKMOB_WIDE_SKYSCRAPER_SIZE  CGSizeMake(160, 600)

// Miscellaneous constants.
#define MINIMUM_REFRESH_INTERVAL            5.0
#define DEFAULT_BANNER_REFRESH_INTERVAL     60
#define BANNER_TIMEOUT_INTERVAL             10
#define INTERSTITIAL_TIMEOUT_INTERVAL       30

// Feature Flags
#define SESSION_TRACKING_ENABLED            1


typedef enum
{
    MPNativeAdOrientationAny,
    MPNativeAdOrientationPortrait,
    MPNativeAdOrientationLandscape
} MPNativeAdOrientation;
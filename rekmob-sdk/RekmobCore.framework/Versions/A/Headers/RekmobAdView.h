//
//  RekmobAdView.h
//  Rekmob
//
//  Created by Irfan Kaya on 29/05/14.
//  Copyright (c) 2014 G Boson Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPAdView.h"

@class RekmobAdView;

@protocol RekmobAdViewDelegate <MPAdViewDelegate>

@optional

/** @name Detecting When a Banner Ad is Loaded */

/**
 * Sent when an ad view successfully loads an ad.
 *
 * Your implementation of this method should insert the ad view into the view hierarchy, if you
 * have not already done so.
 *
 * @param view The ad view sending the message.
 */
- (void)adViewDidLoadAd:(RekmobAdView *)view;

/**
 * Sent when an ad view fails to load an ad.
 *
 * To avoid displaying blank ads, you should hide the ad view in response to this message.
 *
 * @param view The ad view sending the message.
 */
- (void)adViewDidFailToLoadAd:(RekmobAdView *)view;

/** @name Detecting When a User Interacts With the Ad View */

/**
 * Sent when an ad view is about to present modal content.
 *
 * This method is called when the user taps on the ad view. Your implementation of this method
 * should pause any application activity that requires user interaction.
 *
 * @param view The ad view sending the message.
 * @see `didDismissModalViewForAd:`
 */
- (void)willPresentModalViewForAd:(RekmobAdView *)view;

/**
 * Sent when an ad view has dismissed its modal content, returning control to your application.
 *
 * Your implementation of this method should resume any application activity that was paused
 * in response to `willPresentModalViewForAd:`.
 *
 * @param view The ad view sending the message.
 * @see `willPresentModalViewForAd:`
 */
- (void)didDismissModalViewForAd:(RekmobAdView *)view;

/**
 * Sent when a user is about to leave your application as a result of tapping
 * on an ad.
 *
 * Your application will be moved to the background shortly after this method is called.
 *
 * @param view The ad view sending the message.
 */
- (void)willLeaveApplicationFromAd:(RekmobAdView *)view;


@end


@interface RekmobAdView : MPAdView

@end

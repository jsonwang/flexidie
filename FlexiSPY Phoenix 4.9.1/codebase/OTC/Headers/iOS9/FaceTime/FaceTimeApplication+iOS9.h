/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PhoneApplication.h"
/*
@interface FaceTimeApplication : PhoneApplication
{
}*/
@interface FaceTimeApplication (iOS9)
+ (id)sharedCallHistoryController;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id)arg3;
- (long long)headerViewNumberOfCallsToShow;
- (_Bool)hasEnhancedVoicemail;
- (_Bool)shouldHideVoicemailUI;
- (_Bool)headerViewShowsAllRecentCalls;
- (_Bool)audioButtonAllowsPhoneCallsAndFaceTimeAudio;
- (_Bool)contentViewAnimationsFadeInsteadOfMove;
- (_Bool)usesUnifiedInterface;
- (_Bool)showsPhoneVoicemail;
- (_Bool)showsPhoneDialer;
- (_Bool)badgesMissedFaceTimeVideo;
- (_Bool)badgesMissedFaceTimeAudio;
- (_Bool)badgesMissedTelephonyCalls;
- (_Bool)showsFaceTimeVideoRecents;
- (_Bool)showsFaceTimeAudioRecents;
- (_Bool)showsTelephonyRecents;
- (_Bool)showsFaceTimeVideoFavorites;
- (_Bool)showsFaceTimeAudioFavorites;
- (_Bool)showsTelephonyFavorites;
- (_Bool)showsFaceTimeVideo;
- (_Bool)showsFaceTimeAudio;
- (_Bool)showsTelephonyCalls;
- (int)defaultAction;
- (_Bool)showSplashScreenOnSignin;
- (unsigned int)contentViewOffscreenEdge;
- (_Bool)tabBarCanSlide;
- (_Bool)tabBarFillsScreen;
- (_Bool)contentViewCanRotate;
- (_Bool)alwaysShowLocalVideo;
- (_Bool)usesBlendModes;
- (id)applicationTintColor;
- (long long)contactsViewControllerStyle;
- (int)addressBookUIStyle;
- (long long)wizardGlobalAppearanceStyle;
- (long long)backdropStyle;
- (unsigned int)userInterfaceStyle;
- (_Bool)_styleIsActuallyGoingToBlur;
- (_Bool)_isBlurUI;
- (_Bool)_isIPad;
- (void)applicationDidFinishLaunching:(id)arg1;

@end


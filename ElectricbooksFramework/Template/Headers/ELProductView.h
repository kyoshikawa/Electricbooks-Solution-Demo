//
//  ELStoreItemView.h
//  Electricviewer
//
//  Created by kyoshikawa on 11/03/08.
//  Copyright 2011 Electricwoods LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASIHTTPRequest.h"
@class ZGlossyButton;
@class ELProduct;
@class ZLabel;


//
//	purchase button state
//
enum ELStoreItemButtonAction
{
	kButtonActionNone,
	kButtonActionPurchase,
	kButtonActionDownload,
	kButtonActionPause
};
typedef enum ELStoreItemButtonAction ELStoreItemButtonAction;



//
//	ELProductDownloadState
//
@protocol ELProductStateUpdating <ASIProgressDelegate>
- (void)didChangeProductState;
@end



//
//	ELProductView
//
@interface ELProductView : UIView <ASIProgressDelegate>
{
	UIImageView *imageView;
	UILabel *titleLabel;
	UILabel *descriptionLabel;
	UILabel *sizeLabel;
	UILabel *date1Label;
	UILabel *date2Label;
	UILabel *month1Label;
	UILabel *month2Label;
	UILabel *authorLabel;
	UILabel *publisherLabel;
	UILabel *info1Label;
	UILabel *info2Label;
	UILabel *info3Label;	
	UILabel *dataSizeLabel;
	UILabel *statusLabel;
	UIColor *labelTextColor;

	ELStoreItemButtonAction buttonAction;
	UIActivityIndicatorView *activityIndicator;
	UIProgressView *progressView;
	UIImageView *alertView;
	ELProduct *product;
}
@property (retain) IBOutlet UILabel *titleLabel;
@property (retain) IBOutlet UIImageView *imageView;
@property (retain) IBOutlet UILabel *descriptionLabel;
@property (retain) IBOutlet UILabel *sizeLabel;
@property (retain) IBOutlet UILabel *date1Label;
@property (retain) IBOutlet UILabel *date2Label;
@property (retain) IBOutlet UILabel *month1Label;
@property (retain) IBOutlet UILabel *month2Label;
@property (retain) IBOutlet UILabel *authorLabel;
@property (retain) IBOutlet UILabel *publisherLabel;
@property (retain) IBOutlet UILabel *info1Label;
@property (retain) IBOutlet UILabel *info2Label;
@property (retain) IBOutlet UILabel *info3Label;
@property (retain) IBOutlet UIActivityIndicatorView *activityIndicator;
@property (retain) IBOutlet UIProgressView *progressView;
@property (retain) IBOutlet UILabel *dataSizeLabel;
@property (retain) IBOutlet UILabel *statusLabel;
@property (retain) ELProduct *product;
@property (assign) float progress;
@property (retain) UIColor *labelTextColor;


- (IBAction)buttonAction:(id)sender;
- (void)downloadThumbnail;
- (void)setAlertIconHidden:(BOOL)aHidden;

@end

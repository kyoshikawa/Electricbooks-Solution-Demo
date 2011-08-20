//
//  ELDocumentTableCell.h
//  ELPDFViewer
//
//  Created by kyoshikawa on 10/12/07.
//  Copyright 2010 Electricwoods LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZGradientCell.h"
@protocol ELPDFDocumentDescriptor;
@class ELProduct;
@class ELPDFBinderDescriptor;

//
//	ELDocumentTableCell
//
@interface ELLibraryBookCell : UITableViewCell
{
	ELPDFBinderDescriptor* documentDescriptor;
	UILabel *titleLabel;
	UIImageView *thumbnailView;
	UILabel *descriptionLabel;
	UILabel *authorLabel;
	UILabel *publisherLabel;
	UILabel *info1Label;
	UILabel *info2Label;
	UILabel *info3Label;
	UILabel *date1Label;
	UILabel *date2Label;
	UILabel *month1Label;
	UILabel *month2Label;
	UILabel *sizeLabel;
}
@property (retain) id <ELPDFDocumentDescriptor> documentDescriptor;
@property (retain) IBOutlet UILabel *titleLabel;
@property (retain) IBOutlet UIImageView *thumbnailView;
@property (retain) IBOutlet UILabel *descriptionLabel;
@property (retain) IBOutlet UILabel *publisherLabel;
@property (retain) IBOutlet UILabel *authorLabel;
@property (retain) IBOutlet UILabel *info1Label;
@property (retain) IBOutlet UILabel *info2Label;
@property (retain) IBOutlet UILabel *info3Label;
@property (retain) IBOutlet UILabel *date1Label;
@property (retain) IBOutlet UILabel *date2Label;
@property (retain) IBOutlet UILabel *month1Label;
@property (retain) IBOutlet UILabel *month2Label;
@property (retain) IBOutlet UILabel *sizeLabel;



//- (IBAction)renameAction:(id)sender;

@end

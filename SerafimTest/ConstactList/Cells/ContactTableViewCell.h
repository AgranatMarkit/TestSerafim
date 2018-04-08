//
//  ContactTableViewCell.h
//  SerafimTest
//
//  Created by Марк on 07.04.2018.
//  Copyright © 2018 Agranat Mark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contact.h"

@interface ContactTableViewCell : UITableViewCell

@property Contact *contact;
- (void)transitToLoadingStateWithContact: (Contact *)contact;
- (void)transitToNormalStateWithContact: (Contact *)contact;

@end

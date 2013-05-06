//
//  ReaderComment.h
//  WordPress
//
//  Created by Eric J on 3/25/13.
//  Copyright (c) 2013 WordPress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AbstractComment.h"
#import "ReaderPost.h"

@interface ReaderComment : AbstractComment

@property (nonatomic, strong) NSString *authorAvatarURL;
@property (nonatomic, strong) ReaderPost *post;


/*
 Fetches comments for the specified post.
 
 @param post The post that owns the comments.
 @param context The managed object context to query.
 
 @return Returns an array of comments.
 */
+ (NSArray *)fetchCommentsForPost:(ReaderPost *)post withContext:(NSManagedObjectContext *)context;


/*
 Save or update comments for the specified post.
 
 @param comments An array of comment dictionaries to save or update.
 @param post The post that owns the comments.
 @param context The managed object context to query.
 
 @return Returns an array of posts.
 */
+ (void)syncComments:(NSArray *)comments forPost:(ReaderPost *)post withContext:(NSManagedObjectContext *)context;


/**
 Create or update an existing ReaderComment with the specified dictionary.
 
 @param dict A dictionary representing the ReaderComment
 @param post The post that owns the comment.
 @param context The Managed Object Context to fetch from.
 */
+ (void)createOrUpdateWithDictionary:(NSDictionary *)dict forPost:(ReaderPost *)post withContext:(NSManagedObjectContext *)context;


@end

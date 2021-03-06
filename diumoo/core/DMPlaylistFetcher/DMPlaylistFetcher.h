//
//  DMPlaylistFetcher.h
//  diumoo-core
//
//  Created by Shanzi on 12-6-5.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#define kFetchPlaylistTypeNew @"n"
#define kFetchPlaylistTypeEnd @"e"
#define kFetchPlaylistTypePlaying @"p"
#define kFetchPlaylistTypeSkip @"s"
#define kFetchPlaylistTypeRate @"r"
#define kFetchPlaylistTypeUnrate @"u"
#define kFetchPlaylistTypeBye @"b"

#import <Foundation/Foundation.h>
#import "diumoo-Swift.h"
#import "DMPlaylistFetcherDeleate.h"

@interface DMPlaylistFetcher : NSObject
{
    id<DMPlaylistFetcherDeleate> delegate;
}

@property id<DMPlaylistFetcherDeleate> delegate;


-(void) fetchPlaylistFromChannel:(NSString*)channel withType:(NSString*)type sid:(NSString*)sid startAttribute:(NSString*)startAttr;
-(void) fetchMusicianMusicsWithMusicianId:(NSString*) musician_id callback:(void(^)(BOOL success))callback;
-(void) fetchSoundtrackWithSoundtrackId:(NSString*) soundtrack_id callback:(void(^)(BOOL success))callback;

-(void) fetchPlaylistWithDictionary:(NSDictionary*)dict withStartAttribute:(NSString*)startAttr andErrorCount:(NSInteger)count;
-(DMPlayableItem*) getOnePlayableItem;
-(void) clearPlaylist;
-(void) fetchPlaylistForAlbum:(NSString*)cid callback:(void(^)(BOOL success))callback;


@end

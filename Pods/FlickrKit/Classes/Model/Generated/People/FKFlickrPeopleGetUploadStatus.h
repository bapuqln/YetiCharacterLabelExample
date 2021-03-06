//
//  FKFlickrPeopleGetUploadStatus.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPeopleGetUploadStatusError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPeopleGetUploadStatusError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPeopleGetUploadStatusError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPeopleGetUploadStatusError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPeopleGetUploadStatusError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPeopleGetUploadStatusError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPeopleGetUploadStatusError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPeopleGetUploadStatusError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPeopleGetUploadStatusError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPeopleGetUploadStatusError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPeopleGetUploadStatusError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPeopleGetUploadStatusError;

/*

Returns information for the calling user related to photo uploads.

<p>Bandwidth and filesize numbers are provided in bytes and kilobytes. If you're using 32bit numbers, stick to using the kilobyte values - they shouldn't ever exceed 2/4 billion, while the byte values will.</p>

<p>Bandwidth is specified in bytes/kb per month.</p>


<p>All accounts display "lots" for the number of remaining sets, but remains in the response for backwards compatibility.</p>

<p>Pro accounts display "lots" for the number of remaining videos, while free users will display 0, 1, or 2.</p>


Response:

<user id="12037949754@N01" ispro="1">
	<username>Bees</username> 
	<bandwidth
		maxbytes="2147483648" maxkb="2097152"
		usedbytes="383724" usedkb="374"
		remainingbytes="2147099924" remainingkb="2096777"
	 /> 
	<filesize
		maxbytes="10485760" maxkb="10240"
	/> 
	<sets
		created="27"
		remaining="lots"
	/>
	<videos
		uploaded="5"
		remaining="lots"
	/>
</user>

*/
@interface FKFlickrPeopleGetUploadStatus : NSObject <FKFlickrAPIMethod>


@end

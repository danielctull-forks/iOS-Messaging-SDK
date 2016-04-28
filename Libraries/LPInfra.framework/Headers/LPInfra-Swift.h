// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import CoreData;
@import ObjectiveC;
@import SystemConfiguration;
@import Foundation;
@import Dispatch;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class Brand;
@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC7LPInfra7Account")
@interface Account : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull accountId;
@property (nonatomic, strong) Brand * _Nonnull brand;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class Conversation;
@class Message;

SWIFT_CLASS("_TtC7LPInfra23BaseConversationManager")
@interface BaseConversationManager : NSObject
- (NSArray<Message *> * _Nonnull)getIncomingMessages:(Conversation * _Nullable)conversation;
- (NSArray<Message *> * _Nonnull)getUnreadMessages:(Conversation * _Nullable)conversation;
- (NSDictionary<Conversation *, NSNumber *> * _Nonnull)getUnreadConversations;
- (NSInteger)getTotalUnread;
- (void)deleteConversation:(Conversation * _Nonnull)conv;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSSet;
@class NSDate;

SWIFT_CLASS("_TtC7LPInfra5Brand")
@interface Brand : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull iconURL;
@property (nonatomic, copy) NSString * _Nullable imageURL;
@property (nonatomic, copy) NSString * _Nullable logoURL;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull uid;
@property (nonatomic, copy) NSString * _Nonnull details;
@property (nonatomic, strong) NSSet * _Nonnull brandCampaigns;
@property (nonatomic, strong) NSSet * _Nonnull brandConversations;
@property (nonatomic, strong) NSDate * _Nonnull dateJoined;
@property (nonatomic) BOOL hidden;
@property (nonatomic, strong) NSSet * _Nonnull accounts;
@property (nonatomic, copy) NSString * _Nullable authenticationCode;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Brand (SWIFT_EXTENSION(LPInfra))
- (NSArray<Conversation *> * _Nonnull)getConversations;
- (NSDate * _Nonnull)getLastMessageTimeStamp;
- (BOOL)isAuthenticated;
@end


SWIFT_PROTOCOL("_TtP7LPInfra22GeneralManagerProtocol_")
@protocol GeneralManagerProtocol
- (void)clearManager;
@end


SWIFT_CLASS("_TtC7LPInfra11CSDSManager")
@interface CSDSManager : NSObject <GeneralManagerProtocol>
+ (CSDSManager * _Nonnull)instance;
- (void)clearManager;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7LPInfra8Campaign")
@interface Campaign : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull uid;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull image;
@property (nonatomic, strong) Brand * _Nonnull ownerBrand;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7LPInfra20ConfigurationManager")
@interface ConfigurationManager : NSObject
+ (ConfigurationManager * _Nonnull)instance;

/// get all configuration attributes from memory. return null if no configuration was loaded initially.
- (NSDictionary<NSString *, id> * _Nullable)getConfiguration;
@end

@class NSOrderedSet;
@class NSNumber;
@class NSMutableSet;

SWIFT_CLASS("_TtC7LPInfra12Conversation")
@interface Conversation : NSManagedObject
@property (nonatomic, copy) NSString * _Nullable uid;
@property (nonatomic, strong) NSDate * _Nonnull creationDate;
@property (nonatomic, copy) NSString * _Nonnull handlerId;
@property (nonatomic, copy) NSString * _Nullable lastMessage;
@property (nonatomic, strong) NSDate * _Nullable lastMessageDate;
@property (nonatomic, strong) Brand * _Nonnull ownerBrand;
@property (nonatomic, strong) NSSet * _Nonnull participants;
@property (nonatomic, strong) NSOrderedSet * _Nonnull conversationMessages;
@property (nonatomic, copy) NSString * _Nonnull stateRaw;
@property (nonatomic, strong) NSNumber * _Nonnull lastReceivedSequence;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL resolved;
@property (nonatomic, copy) NSString * _Nonnull ttrTypeRaw;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable assignedAgentId;
@property (nonatomic, copy) NSString * _Nullable consumerId;
@property (nonatomic, strong) NSMutableSet * _Nonnull currentlyAcceptedSequences;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class User;

@interface Conversation (SWIFT_EXTENSION(LPInfra))
@property (nonatomic, readonly, copy) NSArray<Message *> * _Nonnull sortedMessages;
@property (nonatomic, readonly, copy) NSArray<Message *> * _Nonnull unreadMessages;
@property (nonatomic, readonly, strong) Message * _Nullable lastMessageObj;
@property (nonatomic, readonly, strong) User * _Nullable lastMessageOriginator;
@property (nonatomic, readonly, copy) NSString * _Nonnull relatedSocketID;
- (BOOL)isActivityInIdle;
- (NSArray<Message *> * _Nonnull)getMessagesPage:(NSInteger)from pageSize:(NSInteger)pageSize;
- (BOOL)isCurrentlyUrgent;

/// If the sequence number is following to what we have, set it as the last one If not, save it in an array in order to set it as the last one in the future After words, it goes through self.currentlyAcceptedSequences and sets each object as the last one if it is following to the current last one
- (void)acceptSequence:(NSInteger)seq;
- (void)resolve;
- (void)resolve:(BOOL)byAgent;
- (NSString * _Nonnull)getResolveDateString:(NSDate * _Nonnull)date;
@property (nonatomic, readonly) BOOL shouldQueryMessages;
@end

@class NSDictionary;

SWIFT_PROTOCOL("_TtP7LPInfra25ConversationParamProtocol_")
@protocol ConversationParamProtocol
- (NSArray<Conversation *> * _Nullable)getConversations;
- (NSArray<Conversation *> * _Nullable)getClosedConversations;
- (Conversation * _Nullable)getActiveConversation;
- (Conversation * _Nullable)getOpenConversation;
- (NSArray<Conversation *> * _Nullable)getLatestClosedConversation:(NSInteger)conversationsCount;
- (Conversation * _Nonnull)createNewConversation;
- (NSString * _Nonnull)getQueryType;
- (BOOL)isConversationRelatedToQuery:(Conversation * _Nonnull)conversation;
- (NSString * _Nonnull)getBrandID;
- (NSString * _Nonnull)getQueryUID;
- (NSDictionary * _Nonnull)getQueryProperties;
@end

@protocol LPDataManagerSDKDelegate;

SWIFT_CLASS("_TtC7LPInfra11DataManager")
@interface DataManager : NSObject <GeneralManagerProtocol>
@property (nonatomic, weak) id <LPDataManagerSDKDelegate> _Nullable SDKDelegate;
+ (DataManager * _Nonnull)instance;
- (void)handleKeychainPersistency;
- (void)saveData:(NSManagedObjectContext * _Nullable)givenContext;
- (void)saveDataWithGetContextFrom:(NSManagedObject * _Nullable)obj;
- (BOOL)deleteManagedObject:(NSManagedObject * _Nonnull)object context:(NSManagedObjectContext * _Nullable)givenContext;
- (BOOL)resetDatabase;
- (void)saveContext;
- (NSManagedObjectContext * _Nonnull)getContext:(NSManagedObjectContext * _Nullable)context;
- (void)clearManager;
@end


@class NSError;

SWIFT_CLASS("_TtC7LPInfra22GlobalTransportManager")
@interface GlobalTransportManager : NSObject
@property (nonatomic, readonly) BOOL isNetworkAvailable;
@property (nonatomic, copy) void (^ _Nullable reachabiltyChangedBlock)(BOOL);
+ (GlobalTransportManager * _Nonnull)instance;
- (void)httpRequest:(NSString * _Nonnull)httpMethod dataPost:(NSString * _Nonnull)dataPost destination:(NSString * _Nonnull)destination headers:(NSDictionary<NSString *, NSString *> * _Nullable)headers useCache:(BOOL)useCache successHandler:(void (^ _Nonnull)(NSDictionary * _Nullable))successHandler failHandler:(void (^ _Nonnull)(NSError * _Nullable))failHandler;
- (void)registerReachability;
- (BOOL)isNetworkReachable;
- (BOOL)isQA:(NSString * _Nonnull)accountId;
@end

@class UIImage;

SWIFT_CLASS("_TtC7LPInfra13ImagesManager")
@interface ImagesManager : NSObject <GeneralManagerProtocol>
+ (ImagesManager * _Nonnull)instance;
- (void)setImageByURL:(UIImage * _Nonnull)image url:(NSString * _Nonnull)url;
- (UIImage * _Nullable)getImageByURL:(NSString * _Nonnull)url;
- (void)loadImageFromURL:(NSString * _Nullable)imageUrl completion:(void (^ _Nonnull)(UIImage * _Null_unspecified))completion;
- (void)clearManager;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP7LPInfra24LPDataManagerSDKDelegate_")
@protocol LPDataManagerSDKDelegate
- (void)LPMessagingSDKDataEncryptionFailed:(NSError * _Nonnull)error;
@end

@class NSNotificationCenter;

SWIFT_CLASS("_TtC7LPInfra14LPReachability")
@interface LPReachability : NSObject
@property (nonatomic, copy) void (^ _Nullable whenReachable)(LPReachability * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable whenUnreachable)(LPReachability * _Nonnull);
@property (nonatomic) BOOL reachableOnWWAN;
@property (nonatomic, strong) NSNotificationCenter * _Nonnull notificationCenter;
@property (nonatomic, readonly, copy) NSString * _Nonnull currentReachabilityString;
- (nullable instancetype)initWithReachabilityRef:(SCNetworkReachabilityRef _Nullable)reachabilityRef OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithHostname:(NSString * _Nonnull)hostname;
+ (LPReachability * _Nullable)reachabilityForInternetConnection;
+ (LPReachability * _Nullable)reachabilityForLocalWiFi;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (BOOL)isReachable;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

@class NSBundle;

SWIFT_CLASS("_TtC7LPInfra12LPSDKManager")
@interface LPSDKManager : NSObject
+ (LPSDKManager * _Nonnull)instance;

/// <ul><li>Fetch the bundle - LPMessagingSDKModels.bundle</li><li>Return an NSBundle</li></ul>
+ (NSBundle * _Nullable)getBundle;

/// <ul><li>Fetch the SDKVersion from the current bundle</li><li>Return a String</li></ul>
+ (NSString * _Nullable)getSDKVersion;

/// <ul><li>Fetch the static configuration data from LPCDN</li><li>Compare the version number from configFile.plist to the fetched value</li><li>Return a boolean in a completion block. The SDK is applicable if the current version is greater or euqal to the fetched value</li></ul>
+ (void)isVersionApplicable:(NSString * _Nonnull)brandId completion:(void (^ _Nonnull)(BOOL))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;
@class NSURL;
@class NSStream;

SWIFT_CLASS("_TtC7LPInfra9WebSocket")
@interface WebSocket : NSObject <NSStreamDelegate>
+ (NSString * _Nonnull)ErrorDomain;
@property (nonatomic, strong) dispatch_queue_t _Null_unspecified queue;
@property (nonatomic, copy) void (^ _Nullable onConnect)(void);
@property (nonatomic, copy) void (^ _Nullable onDisconnect)(NSError * _Nullable);
@property (nonatomic, copy) void (^ _Nullable onText)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onData)(NSData * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onPong)(void);
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic) BOOL voipEnabled;
@property (nonatomic) BOOL selfSignedSSL;
@property (nonatomic, copy) NSString * _Nullable origin;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly, strong) NSURL * _Nonnull currentURL;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url protocols:(NSArray<NSString *> * _Nullable)protocols OBJC_DESIGNATED_INITIALIZER;

/// Write a string to the websocket. This sends it as a text frame.
///
/// If you supply a non-nil completion block, I will perform it when the write completes.
///
/// \param str The string to write.
///
/// \param completion The (optional) completion handler.
- (void)writeString:(NSString * _Nonnull)str completion:(void (^ _Nullable)(void))completion;

/// Write binary data to the websocket. This sends it as a binary frame.
///
/// If you supply a non-nil completion block, I will perform it when the write completes.
///
/// \param data The data to write.
///
/// \param completion The (optional) completion handler.
- (void)writeData:(NSData * _Nonnull)data completion:(void (^ _Nullable)(void))completion;
- (void)writePing:(NSData * _Nonnull)data completion:(void (^ _Nullable)(void))completion;
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end


SWIFT_CLASS("_TtC7LPInfra11LPWebSocket")
@interface LPWebSocket : WebSocket
@property (nonatomic) NSInteger requestIndex;
- (void)flushQueue;
- (void)cancelRequest:(NSInteger)requestIndex;
@end


SWIFT_CLASS("_TtC7LPInfra16LanguagesManager")
@interface LanguagesManager : NSObject
@end

enum LogLevel : NSInteger;

SWIFT_CLASS("_TtC7LPInfra8LogEvent")
@interface LogEvent : NSObject
@property (nonatomic, readonly) enum LogLevel logLevel;
@property (nonatomic, readonly, copy) NSString * _Nonnull className;
@property (nonatomic, readonly, copy) NSString * _Nonnull functionName;
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
@property (nonatomic, readonly, strong) NSDate * _Nonnull timestamp;
@end

typedef SWIFT_ENUM(NSInteger, LogLevel) {
  LogLevelTRACE = 0,
  LogLevelDEBUG = 1,
  LogLevelINFO = 2,
  LogLevelWARNING = 3,
  LogLevelERROR = 4,
  LogLevelOFF = 5,
};


SWIFT_CLASS("_TtC7LPInfra7Message")
@interface Message : NSManagedObject
@property (nonatomic, strong) NSDate * _Nonnull timestamp;
@property (nonatomic, copy) NSString * _Nonnull content;
@property (nonatomic, copy) NSString * _Nullable uid;
@property (nonatomic, copy) NSString * _Nonnull statusRaw;
@property (nonatomic, copy) NSString * _Nonnull contentType;
@property (nonatomic, copy) NSString * _Nonnull messageType;
@property (nonatomic, strong) Conversation * _Nonnull ownerConversation;
@property (nonatomic, strong) User * _Nullable ownerUser;
- (NSString * _Nonnull)getMessageTimeLabel;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSPredicate;

@interface Message (SWIFT_EXTENSION(LPInfra))
+ (NSString * _Nonnull)buildUID:(NSString * _Nonnull)convUID sequence:(NSInteger)sequence;
+ (NSPredicate * _Nonnull)byDate:(NSDate * _Nonnull)date;
@end


SWIFT_CLASS("_TtC7LPInfra21MessagingServiceEvent")
@interface MessagingServiceEvent : NSObject
@property (nonatomic, readonly, strong) Conversation * _Null_unspecified conversation;
@property (nonatomic, readonly, strong) User * _Nullable sender;
@property (nonatomic) BOOL shouldHandleConsumerMessages;
- (nullable instancetype)initWithFailure OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDate (SWIFT_EXTENSION(LPInfra))
@property (nonatomic, readonly, copy) NSString * _Nonnull timeAgoSimple;
@property (nonatomic, readonly, copy) NSString * _Nonnull messageTime;
@property (nonatomic, readonly, copy) NSString * _Nullable timeDelta;
@property (nonatomic, readonly, copy) NSString * _Nonnull timeAgo;
- (NSString * _Nonnull)stringFromFormat:(NSString * _Nonnull)format withValue:(NSInteger)value;
- (NSString * _Nonnull)getLocaleFormatUnderscoresWithValue:(double)value;
- (BOOL)isToday;
- (NSString * _Nonnull)serializeDate;
+ (NSDate * _Nullable)deserializeDate:(NSDictionary * _Nonnull)dict key:(NSString * _Nonnull)key;
- (NSString * _Nonnull)localizedStringOfDate;
- (NSString * _Nonnull)stringRepresentation;
- (NSDate * _Nonnull)localizedDate;
- (NSDate * _Nonnull)roundToDay;
@end


@interface NSManagedObject (SWIFT_EXTENSION(LPInfra))
- (void)saveContext;
@end


@interface NSObject (SWIFT_EXTENSION(LPInfra))
- (NSDictionary<NSString *, id> * _Nonnull)serializeToDictionary;
@end


@interface NSOperationQueue (SWIFT_EXTENSION(LPInfra))
+ (NSOperationQueue * _Nonnull)sharedOperationQueue;
@end


@interface NSOutputStream (SWIFT_EXTENSION(LPInfra))

/// Write String to outputStream
///
/// \param string The string to write.
///
/// \param encoding The NSStringEncoding to use when writing the string. This will default to UTF8.
///
/// \param allowLossyConversion Whether to permit lossy conversion when writing the string.
///
/// \returns  Return total number of bytes written upon success. Return -1 upon failure.
- (NSInteger)write:(NSString * _Nonnull)string encoding:(NSUInteger)encoding allowLossyConversion:(BOOL)allowLossyConversion;
@end


SWIFT_CLASS("_TtC7LPInfra19NotificationManager")
@interface NotificationManager : NSObject <GeneralManagerProtocol>
+ (NotificationManager * _Nonnull)instance;
- (void)didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
- (void)sendLocalNotification:(NSString * _Nonnull)text uid:(NSString * _Nullable)uid;
- (void)postLocalNotification:(Message * _Nonnull)message;
- (void)clearManager;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7LPInfra13PusherManager")
@interface PusherManager : NSObject <GeneralManagerProtocol>
@property (nonatomic, copy) NSSet<NSString *> * _Nonnull registeredBrands;
@property (nonatomic, copy) NSString * _Nullable pushToken;
+ (PusherManager * _Nonnull)instance;
- (void)setPusherTokenWithToken:(NSData * _Nonnull)token alternateBundleID:(NSString * _Nullable)alternateBundleID;
- (NSString * _Nonnull)getAppIdentifier;

/// Register pusher with push notification token received from APNS (Apple). Before registering the Pusher, we make sure have the following params:
///
/// <ul><li>Consumer UserID</li><li>Push Token from Apple</li><li>CSDS Domain for Pusher</li><li>Account (brand account)
/// When all params availble - peform register</li></ul>
- (void)registerPusher:(Brand * _Nonnull)brand;

/// Unregister pusher. Before unregistering the Pusher, we make sure we have the following params:
///
/// <ul><li>Consumer UserID</li><li>CSDS Domain for Pusher</li><li>Account (brand account)
/// When all params availble - peform unregister</li></ul>
- (void)unregisterPusher:(Brand * _Nonnull)brand;
- (void)clearManager;
@end


SWIFT_CLASS("_TtC7LPInfra4Ring")
@interface Ring : NSObject
@property (nonatomic, copy) NSString * _Nullable ringID;
@property (nonatomic, copy) NSString * _Nullable brandId;
@property (nonatomic, copy) NSString * _Nullable conversationID;
@property (nonatomic, copy) NSString * _Nullable consumerId;
@property (nonatomic, copy) NSString * _Nullable skillId;
@property (nonatomic, strong) NSDate * _Nullable ringExpiration;
@end


SWIFT_CLASS("_TtC7LPInfra22SocketTransportManager")
@interface SocketTransportManager : NSObject
@property (nonatomic, copy) NSDictionary<NSString *, LPWebSocket *> * _Nonnull webSockets;
+ (SocketTransportManager * _Nonnull)instance;
- (LPWebSocket * _Nullable)getSocket:(NSString * _Nonnull)brandID;
- (void)disconnect;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(LPInfra))
- (nonnull instancetype)initWithRgba:(NSString * _Nonnull)rgba;
@end


@interface UIFont (SWIFT_EXTENSION(LPInfra))
- (CGSize)sizeOfString:(NSString * _Nonnull)string constrainedToWidth:(double)width;
@end


SWIFT_CLASS("_TtC7LPInfra4User")
@interface User : NSManagedObject
@property (nonatomic, copy) NSString * _Nonnull uid;
@property (nonatomic, copy) NSString * _Nonnull firstName;
@property (nonatomic, copy) NSString * _Nonnull lastName;
@property (nonatomic, copy) NSString * _Nullable nickName;
@property (nonatomic, copy) NSString * _Nullable profileImageURL;
@property (nonatomic, copy) NSString * _Nullable coverImageURL;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
@property (nonatomic, copy) NSString * _Nonnull typeRaw;
@property (nonatomic, copy) NSString * _Nullable bio;
@property (nonatomic, strong) NSSet * _Nonnull userMessages;
@property (nonatomic) BOOL isSaved;
@property (nonatomic, strong) NSDate * _Nullable lastUpdated;
@property (nonatomic, copy) NSString * _Nullable employeeID;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface User (SWIFT_EXTENSION(LPInfra))
@property (nonatomic, readonly, copy) NSString * _Nonnull fullName;
@property (nonatomic, readonly) BOOL isMe;
@end


SWIFT_CLASS("_TtC7LPInfra11UserManager")
@interface UserManager : NSObject <GeneralManagerProtocol>
@property (nonatomic, copy) NSString * _Nullable myUserID;
+ (UserManager * _Nonnull)instance;

/// This method fetch user profile from the server.
///
/// <ul><li>Fetch user data from server</li><li>Save to DB</li><li>Return User to completion block</li></ul>
- (void)fetchUser:(NSString * _Nonnull)brandID userID:(NSString * _Nonnull)userID isMe:(BOOL)isMe completion:(void (^ _Nullable)(User * _Nonnull))completion failure:(void (^ _Nullable)(NSError * _Nonnull))failure;

/// Attach completion block which is being invoken when the Consumer (My) User is retrieved
- (void)attachMyUserCompletion:(void (^ _Nonnull)(User * _Nonnull))completion;

/// This method fetch user from the database.
///
/// <ul><li>Fetch user data from database</li><li>If user does not exist, a nil will be returned</li></ul>
- (User * _Nullable)getUserFromDatabase:(NSString * _Nonnull)userID;

/// If Needed, fetching the user profile from server and update in database If the user was not updated for 24Hrs
- (void)refreshUserProfile:(NSString * _Nonnull)brandID user:(User * _Nonnull)user;

/// Set user profile in database with details of user
- (void)setUserProfileWithDetails:(NSString * _Nonnull)brandID firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName profileImageURL:(NSString * _Nullable)profileImageURL phoneNumber:(NSString * _Nullable)phoneNumber;
- (User * _Nonnull)getDefaultAgentUserFromDB:(NSString * _Nonnull)senderId;
- (void)clearManager;
@end


@interface UserManager (SWIFT_EXTENSION(LPInfra))
@end


SWIFT_CLASS("_TtC7LPInfra5Utils")
@interface Utils : NSObject
+ (NSString * _Nonnull)ALLOW_SDK_LOG_TO_FILE_KEY;
+ (BOOL)allowLogToFile;
+ (void)setAllowLogToFile:(BOOL)newValue;
+ (dispatch_queue_t _Null_unspecified)backgroundQueue;
+ (NSString * _Nullable)JSONStringify:(id _Nonnull)value prettyPrinted:(BOOL)prettyPrinted;
+ (NSDictionary * _Nullable)JSONDictionaryFromString:(NSString * _Nonnull)string;
+ (void)getDataFromUrl:(NSURL * _Nonnull)urL completion:(void (^ _Nonnull)(NSData * _Nullable, NSError * _Nullable))completion;
+ (NSString * _Nonnull)formatDate:(NSDate * _Nonnull)date;
+ (NSString * _Nonnull)trim:(NSString * _Nonnull)str;
+ (BOOL)isValidEmail:(NSString * _Nonnull)testStr;
+ (void)delay:(double)delay closure:(void (^ _Nonnull)(void))closure;
+ (NSInteger)minutesBetweenDates:(NSDate * _Nonnull)startDate endDate:(NSDate * _Nonnull)endDate;
+ (void)backgroundThread:(void (^ _Nonnull)(void))job;
+ (void)mainThread:(void (^ _Nonnull)(void))job;

/// Returns a random Int number from min to max
+ (NSInteger)randWithMin:(NSInteger)min max:(NSInteger)max;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


#pragma clang diagnostic pop

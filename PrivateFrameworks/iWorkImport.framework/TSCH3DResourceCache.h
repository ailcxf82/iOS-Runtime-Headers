/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSCountedSet, NSMutableDictionary, TSCH3DDictionaryOfSet;

@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate> {
    NSMutableDictionary *mHandles;
    unsigned int mMemoryLimitInBytes;
    NSMutableDictionary *mMemoryUsage;
    unsigned int mMemoryUsedInBytes;
    NSCountedSet *mProtectedResources;
    TSCH3DDictionaryOfSet *mResourceKeyedEntries;
    NSCountedSet *mUsageCounts;
}

@property unsigned int memoryLimitInBytes;
@property(readonly) unsigned int memoryUsedInBytes;

- (void)dealloc;
- (id)debug_countedClasses;
- (id)debug_countedMemory;
- (id)debug_details;
- (id)debug_stats;
- (id)debug_string;
- (float)debug_totalMemoryUsageMB;
- (id)debug_usageCounts;
- (id)flushAllResourcesForContext:(id)arg1;
- (void)flushMemoryForResources:(id)arg1;
- (id)flushResources:(id)arg1 context:(id)arg2;
- (void)garbageCollectAllResourcesForContext:(id)arg1;
- (void)garbageCollectResources:(id)arg1 context:(id)arg2;
- (id)handleForKey:(id)arg1;
- (BOOL)hasEnoughFreeMemoryOfBytes:(unsigned int)arg1;
- (id)init;
- (BOOL)isProtectedResource:(id)arg1;
- (id)keyForKey:(id)arg1;
- (id)keyForLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3;
- (unsigned int)memoryLimitInBytes;
- (unsigned int)memoryUsedForResource:(id)arg1;
- (unsigned int)memoryUsedInBytes;
- (id)p_allResourceKeys;
- (void)p_flushHandleForKey:(id)arg1 context:(id)arg2;
- (id)p_flushResourceKeys:(id)arg1 context:(id)arg2;
- (id)p_keysForResource:(id)arg1;
- (id)p_keysForResources:(id)arg1;
- (void)p_removeHandleForKey:(id)arg1;
- (id)p_unretainedResourcesFromResources:(id)arg1;
- (void)protectResource:(id)arg1;
- (void)setBytesUploaded:(unsigned int)arg1 forKey:(id)arg2;
- (void)setHandle:(id)arg1 forKey:(id)arg2;
- (void)setMemoryLimitInBytes:(unsigned int)arg1;
- (void)unprotectResource:(id)arg1;
- (void)updateUsageCountForResourceSet:(id)arg1 fromPreviousResourceSet:(id)arg2;

@end
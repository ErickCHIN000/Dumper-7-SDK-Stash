#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// Class PointCloud.PointCloud
class UPointCloud : public UObject
{
public:
	uint8                                        Pad_1347[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPointCloudView*>                 RootViews;                                         // 0x30(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPointCloud* GetDefaultObj();

	bool StopLogging();
	bool StartLogging(const class FString& InFilename);
	bool SaveToDisk(const class FString& Filename);
	bool ReplacePoints(const class FString& Filename, struct FBox& ReimportBounds);
	bool Reimport(struct FBox& ReimportBounds);
	class UPointCloudView* MakeView();
	bool LoggingEnabled();
	bool LoadFromPoints(TArray<struct FPointCloudPoint>& InPoints);
	bool HasMetaDataAttribute(const class FString& Name);
	bool HasDefaultAttribute(const class FString& Name);
	TSet<class FString> GetMetadataAttributes();
	TArray<class FString> GetLoadedFiles();
	TArray<class FString> GetDefaultAttributes();
	int32 GetCount();
	struct FBox GetBounds();
};

// 0x238 (0x2B8 - 0x80)
// Class PointCloud.PointCloudImpl
class UPointCloudImpl : public UPointCloud
{
public:
	uint8                                        Pad_1399[0x238];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointCloudImpl* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class PointCloud.SliceAndDiceCommandlet
class USliceAndDiceCommandlet : public UCommandlet
{
public:
	uint8                                        Pad_13B0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USliceAndDiceCommandlet* GetDefaultObj();

};

// 0x108 (0x130 - 0x28)
// Class PointCloud.SliceAndDiceManagedActors
class USliceAndDiceManagedActors : public UObject
{
public:
	TSoftObjectPtr<class UPointCloudRule>        Rule;                                              // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         ManagedActors;                                     // 0x50(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	uint64                                       RuleRevisionNumber;                                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSliceAndDiceManagedActorsHashInfo> HashInfo;                                          // 0x68(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<class USliceAndDiceManagedActors*>    Children;                                          // 0x78(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FSliceAndDiceManagedActorsEntry> ActorEntries;                                      // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D7[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USliceAndDiceManagedActors* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class PointCloud.SliceAndDiceMapping
class USliceAndDiceMapping : public UObject
{
public:
	TSoftObjectPtr<class UPointCloud>            PointCloud;                                        // 0x28(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPointCloudSliceAndDiceRuleSet> RuleSet;                                           // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USliceAndDiceManagedActors*            Root;                                              // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1411[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USliceAndDiceMapping* GetDefaultObj();

	void ClearManagedActors(bool bClearDisabled);
};

// 0x28 (0x2C8 - 0x2A0)
// Class PointCloud.SliceAndDiceManager
class ASliceAndDiceManager : public AActor
{
public:
	TArray<class USliceAndDiceMapping*>          Mappings;                                          // 0x2A0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASliceAndDiceManager* GetDefaultObj();

	void SetLogging(bool bInLoggingEnabled, const class FString& InLogPath);
	bool RunRulesOnMappings(TArray<class USliceAndDiceMapping*>& SelectedMappings);
	bool RunRules();
	class FString RunReportOnMappings(TArray<class USliceAndDiceMapping*>& SelectedMappings, enum class EPointCloudReportLevel Level);
	class FString RunReport(enum class EPointCloudReportLevel Level);
	bool RemoveMapping(class USliceAndDiceMapping* InMapping, bool bDeleteManagedActors);
	bool ReloadPointCloudsOnMappings(TArray<class USliceAndDiceMapping*>& SelectedMappings);
	bool ReloadAllPointClouds();
	int32 NumMappings();
	bool MoveMappings(TArray<class USliceAndDiceMapping*>& InMapping, class ASliceAndDiceManager* InTargetManager);
	bool MoveMapping(class USliceAndDiceMapping* InMapping, class ASliceAndDiceManager* InTargetManager);
	TArray<class ASliceAndDiceManager*> GetSliceAndDiceManagersInLevel(class ULevel* InLevel);
	TArray<class ASliceAndDiceManager*> GetSliceAndDiceManagers(class UWorld* InWorld);
	class USliceAndDiceMapping* FindOrAddMapping(class UPointCloud* InPointCloud, class UPointCloudSliceAndDiceRuleSet* InRuleSet);
	class USliceAndDiceMapping* FindMapping(class UPointCloud* InPointCloud, class UPointCloudSliceAndDiceRuleSet* InRuleSet);
	bool DeleteManagedActorsFromMappings(TArray<class USliceAndDiceMapping*>& InMappings, bool bCleanDisabled);
	bool DeleteManagedActorsFromMapping(class USliceAndDiceMapping* InMapping, bool bCleanDisabled);
	bool DeleteAllManagedActors(bool bCleanDisabled);
	class ASliceAndDiceManager* CreateSliceAndDiceManager(class UWorld* InWorld);
	class USliceAndDiceMapping* AddNewMapping();
};

// 0x70 (0x98 - 0x28)
// Class PointCloud.PointCloudRule
class UPointCloudRule : public UObject
{
public:
	class FString                                Label;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysReRun;                                      // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1767[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPointCloudRule*>               Slots;                                             // 0x40(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UPointCloudRuleSlot*>           SlotInfo;                                          // 0x50(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_176F[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       RevisionNumber;                                    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPointCloudRule* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class PointCloud.PointCloudSliceAndDiceRuleSet
class UPointCloudSliceAndDiceRuleSet : public UObject
{
public:
	TArray<class UPointCloudRule*>               Rules;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1949[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointCloudSliceAndDiceRuleSet* GetDefaultObj();

	bool SwapRules(class UPointCloudRule* InRuleParent, int32 InRuleSlotIndex, class UPointCloudRule* InTargetParent, int32 InTargetSlotIndex);
	class UPointCloudRule* RemoveRule(class UPointCloudRule* InParent, int32 InSlotIndex);
	bool MoveRule(class UPointCloudRule* InRuleParent, int32 InRuleSlotIndex, class UPointCloudRule* InTargetParent, int32 InTargetSlotIndex);
	TArray<class UPointCloudRule*> GetRules();
	class UPointCloudRule* CreateRule(const class FString& RuleName, class UPointCloudRule* ParentRule, int32 SlotIndex);
	bool CopyRule(class UPointCloudRule* InRule, class UPointCloudRule* InTargetParent, int32 InTargetSlotIndex);
	bool AddRule(class UPointCloudRule* InRule, class UPointCloudRule* InParent, int32 InSlotIndex);
};

// 0x28 (0x50 - 0x28)
// Class PointCloud.PointCloudRuleSlot
class UPointCloudRuleSlot : public UObject
{
public:
	class FString                                Label;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExternallyVisible;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1986[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1988[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointCloudRuleSlot* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class PointCloud.PointCloudView
class UPointCloudView : public UObject
{
public:
	struct FGuid                                 ViewGuid;                                          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPointCloudImpl*                       PointCloud;                                        // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPointCloudView*                       ParentView;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E95[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPointCloudView*>                 ChildViews;                                        // 0x60(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E99[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointCloudView* GetDefaultObj();

	class UPointCloudView* MakeChildView();
	TMap<class FString, int32> GetUniqueMetadataValuesAndCounts(const class FString& Key);
	TArray<class FString> GetUniqueMetadataValues(const class FString& Key);
	int32 GetTransformsAndIds(TArray<struct FTransform>* OutTransforms, TArray<int32>* OutIds);
	TArray<struct FTransform> GetTransforms();
	struct FBox GetResultsBoundingBox();
	class UPointCloud* GetPointCloud();
	TArray<int32> GetMetadataValuesArrayAsInt(const class FString& Key);
	TArray<float> GetMetadataValuesArrayAsFloat(const class FString& Key);
	TMap<int32, class FString> GetMetadataValues(const class FString& Key);
	TMap<class FString, class FString> GetMetadata(int32 POINTID);
	int32 GetIndexes(TArray<int32>* OutIds);
	class FString GetHash();
	int32 GetCount();
	void FilterOnTile(struct FBox& QueryGridBounds, int32 InNumTilesX, int32 InNumTilesY, int32 InNumTilesZ, int32 InTileX, int32 InTileY, int32 InTileZ, bool bInvertSelection, enum class EFilterMode Mode);
	void FilterOnRange(int32 StartIndex, int32 EndIndex, enum class EFilterMode Mode);
	void FilterOnPointExpression(const class FString& Expression, enum class EFilterMode Mode);
	void FilterOnOrientedBoundingBox(struct FTransform& InOBB, bool bInvertSelection, enum class EFilterMode Mode);
	void FilterOnMetadataPattern(const class FString& MetaData, const class FString& Pattern, enum class EFilterMode Mode);
	void FilterOnMetadata(const class FString& MetaData, const class FString& Value, enum class EFilterMode Mode);
	void FilterOnIndex(int32 Index, enum class EFilterMode Mode);
	void FilterOnBoundingSphere(struct FVector& Center, float Radius, enum class EFilterMode Mode);
	void FilterOnBoundingBox(struct FBox& BoundingBox, bool bInvertSelection, enum class EFilterMode Mode);
	int32 CountResultsInBox(struct FBox& Box);
};

// 0x8 (0x2A8 - 0x2A0)
// Class PointCloud.Spline
class ASpline : public AActor
{
public:
	class USplineComponent*                      Spline;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASpline* GetDefaultObj();

};

// 0x0 (0x2A8 - 0x2A8)
// Class PointCloud.WaterIslandShores
class AWaterIslandShores : public ASpline
{
public:

	static class UClass* StaticClass();
	static class AWaterIslandShores* GetDefaultObj();

};

}



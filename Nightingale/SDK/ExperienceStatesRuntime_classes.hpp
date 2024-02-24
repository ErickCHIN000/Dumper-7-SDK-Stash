#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary
class UDerivedStateIDGeneratorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDerivedStateIDGeneratorFunctionLibrary* GetDefaultObj();

	struct FExperienceStateID GetDerivedIDForStateFromAssetData(enum class EDerivedStates State, struct FAssetData& AssetData);
	struct FExperienceStateID GetDerivedIDForState(enum class EDerivedStates State, struct FGuid& UniqueID);
	struct FGuid FindUniqueID(struct FAssetData& AssetData);
};

// 0x30 (0xA0 - 0x70)
// Class ExperienceStatesRuntime.ExperienceStateCondition
class UExperienceStateCondition : public UConditionBehaviour
{
public:
	class UExperienceStateIDBuilder*             ExperienceState;                                   // 0x70(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXMathComparison                Comparator;                                        // 0x78(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetValue;                                       // 0x7C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExperienceStateCondition* GetDefaultObj();

	void OnCounterChanged(struct FExperienceStateID& ID, int32 OldValue, int32 NewValue);
};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateDebugInterface
class IExperienceStateDebugInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IExperienceStateDebugInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateDefinitionProvider
class IExperienceStateDefinitionProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IExperienceStateDefinitionProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateDefinitionSource
class UExperienceStateDefinitionSource : public UObject
{
public:

	static class UClass* StaticClass();
	static class UExperienceStateDefinitionSource* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class ExperienceStatesRuntime.ExperienceStateDefinitionSubSystemConfig
class UExperienceStateDefinitionSubSystemConfig : public UDataAsset
{
public:
	TArray<class UExperienceStateDefinitionSource*> StateSources;                                      // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UExperienceStateDefinitionSource*> TestStateSources;                                  // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UExperienceStateDefinitionSubSystemConfig* GetDefaultObj();

};

// 0x98 (0xC8 - 0x30)
// Class ExperienceStatesRuntime.ExperienceStateDefinitionSubSystem
class UExperienceStateDefinitionSubSystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_3B3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UExperienceStateDefinitionSubSystemConfig> ConfigurationAsset;                                // 0x38(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExperienceStateDefinitionSubSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateEventInterface
class IExperienceStateEventInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IExperienceStateEventInterface* GetDefaultObj();

	void UnbindEventFrom_ExperienceStatesReady(FDelegateProperty_& Event);
	void UnbindEventFrom_ExperienceStateChanged(struct FExperienceStateID& ExperienceStateID, FDelegateProperty_& Event);
	void BindEventTo_ExperienceStatesReady(FDelegateProperty_& Event);
	void BindEventTo_ExperienceStateChanged(struct FExperienceStateID& ExperienceStateID, FDelegateProperty_& Event);
};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateFunctionLibrary
class UExperienceStateFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UExperienceStateFunctionLibrary* GetDefaultObj();

	class FString ToDebugString(struct FExperienceStateID& ID);
	bool TestExperienceStateValue(class UObject* Reader, struct FExperienceStateID& ID, enum class ENWXMathComparison Comparator, int32 TargetValue, enum class EGetResult* Result);
	int32 SetExperienceStateValue(class UObject* Writer, struct FExperienceStateID& ID, int32 Value, enum class EGetResult* Result);
	int32 ReadExperienceStateValue(class UObject* Reader, struct FExperienceStateID& ID, enum class EGetResult* Result);
	int32 ModifyExperienceStateValue(class UObject* Writer, struct FExperienceStateID& ID, int32 Change, enum class EGetResult* Result);
	bool EqualEqual_FExperienceStateID(struct FExperienceStateID& A, struct FExperienceStateID& B);
};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateIDBuilder
class UExperienceStateIDBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UExperienceStateIDBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateReaderInterface
class IExperienceStateReaderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IExperienceStateReaderInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateRequirement
class UExperienceStateRequirement : public URequirement
{
public:
	class UExperienceStateIDBuilder*             ExperienceState;                                   // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXMathComparison                Comparator;                                        // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetValue;                                       // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UExperienceStateRequirement* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class ExperienceStatesRuntime.ExperienceStateReward
class UExperienceStateReward : public URewardBehaviour
{
public:
	class UExperienceStateIDBuilder*             ExperienceState;                                   // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Change;                                            // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_501[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExperienceStateReward* GetDefaultObj();

};

// 0x198 (0x290 - 0xF8)
// Class ExperienceStatesRuntime.ExperienceStateTrackerComponent
class UExperienceStateTrackerComponent : public UPersistentDataComponent
{
public:
	uint8                                        Pad_531[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FExperienceStateID, int32>       ExperienceStates;                                  // 0x130(0x50)(SaveGame, NativeAccessSpecifierPrivate)
	struct FCompressedExperienceStates           CompressedExperienceStates;                        // 0x180(0x10)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_534[0x100];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExperienceStateTrackerComponent* GetDefaultObj();

	void Server_WriteExperienceState(struct FExperienceStateID& ExperienceStateID, int32 Value);
	void OnRep_CompressedExperienceStateBuffer(struct FCompressedExperienceStates& PreviousValue);
};

// 0x0 (0x28 - 0x28)
// Class ExperienceStatesRuntime.ExperienceStateWriterInterface
class IExperienceStateWriterInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IExperienceStateWriterInterface* GetDefaultObj();

};

}



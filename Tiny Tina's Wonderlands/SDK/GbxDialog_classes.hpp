#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x90 - 0x38)
// Class GbxDialog.AnimNotify_DialogEvent
class UAnimNotify_DialogEvent : public UAnimNotify
{
public:
	class UDialogEvent*                          DialogEvent;                                       // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UDialogParameter*, struct FDialogParameterValue> ParameterValues;                                   // 0x40(0x50)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_DialogEvent* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxDialog.CharacterEchoDataBase
class UCharacterEchoDataBase : public UGbxDataAsset
{
public:
	TArray<class FString>                        AvailableVoGMoodKeyframes;                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCharacterEchoDataBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxDialog.DialogActionBlueprintImplementation
class UDialogActionBlueprintImplementation : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UDialogActionBlueprintImplementation* GetDefaultObj();

	void Execute(struct FDialogContext& Context);
};

// 0x10 (0x40 - 0x30)
// Class GbxDialog.GbxDialogDataAsset
class UGbxDialogDataAsset : public UGbxDataAsset
{
public:
	struct FGuid                                 Guid;                                              // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxDialogDataAsset* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class GbxDialog.DialogActionFunction
class UDialogActionFunction : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogParameter*>              Parameters;                                        // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UDialogActionBlueprintImplementation> BlueprintImplementation;                           // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogActionFunction* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.DialogAudioComponentProvider
class UDialogAudioComponentProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDialogAudioComponentProvider* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxDialog.DialogAudioComponentProvider_OcclusionResistant
class UDialogAudioComponentProvider_OcclusionResistant : public UDialogAudioComponentProvider
{
public:
	float                                        OcclusionWeight;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ComponentTag;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogAudioComponentProvider_OcclusionResistant* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxDialog.DialogBehaviorPreset
class UDialogBehaviorPreset : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UDialogBehaviorPreset* GetDefaultObj();

};

// 0x29D0 (0x29F8 - 0x28)
// Class GbxDialog.DialogBlackboard
class UDialogBlackboard : public UObject
{
public:
	uint8                                        Pad_37[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UDialogNameTag*, struct FDistributedSpeakerInfo> DistributedSpeakers;                               // 0x30(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<int32, struct FDialogSequenceDelegates> PlayingSequenceDelegates;                          // 0x80(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UDialogLookupSystem*                   LookupSystem;                                      // 0xD0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogControlSystem*                  ControlSystem;                                     // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxDialogComponent*>           RegisteredSpeakers;                                // 0xE0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDialogScriptData*>             ActiveScripts;                                     // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class UDialogNameTag*>                  ActivePureEchoNameTags;                            // 0x100(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UDialogScriptData*, int32>        PinnedScriptRefCounts;                             // 0x150(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class UObject*, struct FDialogBlackboardCounterValueMap> CounterValues;                                     // 0x1A0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C[0xA0];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PureEchoSpeakerHost;                               // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D[0x2690];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   ConversationForDialogLookup;                       // 0x2928(0xC)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class APlayerController>      SuggestedPlayerForNextConversation;                // 0x2938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AActor>                 SuggestedKeyActorForNextConversation;              // 0x2940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               SuggestedKeyLocationForNextConversation;           // 0x2948(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_41[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FRecentConversationInfo>  RecentConversationInfo;                            // 0x2958(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<int32, struct FRecentDialogPerformanceInfo> RecentPerformances;                                // 0x29A8(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDialogBlackboard* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.QuietTimePredicate
class UQuietTimePredicate : public UObject
{
public:

	static class UClass* StaticClass();
	static class UQuietTimePredicate* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class GbxDialog.QuietTimePredicate_BlockStuff
class UQuietTimePredicate_BlockStuff : public UQuietTimePredicate
{
public:
	TArray<class UObject*>                       BlockDialogScopeObjects;                           // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          BlockKinds;                                        // 0x38(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogStyle*>                  BlockStyles;                                       // 0x48(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDialogNameTag*                        OnlyForCharacter;                                  // 0x58(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuietTimePredicate_BlockStuff* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class GbxDialog.DialogControlSystem
class UDialogControlSystem : public UObject
{
public:
	uint8                                        Pad_4D[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuietTimeTracker>             ActiveQuietTimes;                                  // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogLookupSystem*                   LookupSystem;                                      // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogBlackboard*                     Blackboard;                                        // 0x68(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDialogSettings*                    Settings;                                          // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFakePauseMode;                                    // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCinematicMode;                                  // 0x81(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PauseModeLastFrameTime;                            // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogControlSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxDialog.DialogEnumType
class UDialogEnumType : public UGbxDialogDataAsset
{
public:

	static class UClass* StaticClass();
	static class UDialogEnumType* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class GbxDialog.DialogEnumValue
class UDialogEnumValue : public UGbxDialogDataAsset
{
public:
	uint8                                        Pad_5F[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogEnumType*                       EnumType;                                          // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxUIName*                            UIName;                                            // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictedQualifier;                              // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogEnumValue* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.DialogEnumValueInterface
class IDialogEnumValueInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDialogEnumValueInterface* GetDefaultObj();

	class UDialogEnumValue* GetEnumValue(class UDialogEnumType* EnumType);
};

// 0x20 (0x60 - 0x40)
// Class GbxDialog.DialogEvent
class UDialogEvent : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogParameter*>              Parameters;                                        // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          PerformanceNotifyNames;                            // 0x50(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogEvent* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxDialog.DialogEventList
class UDialogEventList : public UGbxDialogDataAsset
{
public:

	static class UClass* StaticClass();
	static class UDialogEventList* GetDefaultObj();

};

// 0xB0 (0xF0 - 0x40)
// Class GbxDialog.DialogLineData
class UDialogLineData : public UGbxDialogDataAsset
{
public:
	enum class ELineScorePriorityMode            ScorePriorityMode;                                 // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogSelectionCondition>     SelectionConditions;                               // 0x48(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UDialogEnumValue*                      SpeakingCharacter;                                 // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEnumValue*                      CharacterQualifier;                                // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxUIName*                            EchoLogUIName;                                     // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogPerformanceData*>        Performances;                                      // 0x70(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class FString                                VoGMoodKey;                                        // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogTimeSlotReference              FollowupTimeSlot;                                  // 0x90(0x40)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UDialogEvent*                          FollowupEvent;                                     // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogParameterMapping>       FollowupParameterMappings;                         // 0xD8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bSequential;                                       // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogLineData* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class GbxDialog.DialogLookupSystem
class UDialogLookupSystem : public UObject
{
public:
	class UDialogControlSystem*                  ControlSystem;                                     // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDialogBlackboard*                     Blackboard;                                        // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UDialogEvent*, struct FDialogDecisionTree> EventTriggeringDecisionTrees;                      // 0x38(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FDialogDecisionTree                   ConditionTriggeringDecisionTree;                   // 0x88(0x30)(Transient, NativeAccessSpecifierPrivate)
	TMap<class UDialogScriptData*, int32>        ActiveScriptRegistrationIDs;                       // 0xB8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDialogLookupSystem* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class GbxDialog.DialogNameTagMoodData
class UDialogNameTagMoodData : public UGbxDataAsset
{
public:
	TMap<class FName, struct FDialogMoodInfo>    MoodData;                                          // 0x30(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogNameTagMoodData* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class GbxDialog.DialogNameTag
class UDialogNameTag : public UGbxDataAsset
{
public:
	uint8                                        Pad_83[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogEnumValue*                      NameTagEnumValue;                                  // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogEnumValue*>              SupportedQualifiers;                               // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDialogNameTag*                        ParentNameTag;                                     // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoiceOfGodSpeaker                VoGSpeaker;                                        // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterEchoDataBase*                EchoData;                                          // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConditionalEchoData>          ConditionalAlternateEchoData;                      // 0x68(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bUsableForPureEchoes;                              // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistributedSpeaker;                               // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VoicePitchOffset;                                  // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            CustomizationRTPC;                                 // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CustomizationRTPCValue;                            // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogNameTagMoodData*                MoodDataAsset;                                     // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FDialogMoodInfo>    MoodData;                                          // 0x98(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogNameTag* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class GbxDialog.DialogParameter
class UDialogParameter : public UGbxDialogDataAsset
{
public:
	class UDialogParameter*                      DefaultInputParameter;                             // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogParameterType                  Type;                                              // 0x48(0x10)(Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	bool                                         bForceDecisionsToAlwaysRetest;                     // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogParameter* GetDefaultObj();

};

// 0xA0 (0xE0 - 0x40)
// Class GbxDialog.DialogPerformanceData
class UDialogPerformanceData : public UGbxDialogDataAsset
{
public:
	class FText                                  Text;                                              // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FGbxTriggerProperty                   TriggerPlayWwiseEventPreview;                      // 0x58(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEvent;                                        // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseExternalMediaTemplate;                        // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedDuration;                                 // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WwiseEventShortID;                                 // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                Action;                                            // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActionWeight;                                      // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MoodName;                                          // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MoodWeight;                                        // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableEarlyFinish;                                // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EarlyFinishTimeFraction;                           // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDialogPerformanceNotify>      Notifies;                                          // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDialogStyle*                          Style;                                             // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutputDelay;                                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        QuietTime;                                         // 0xC0(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxDialogQuietTimeScope          QuietTimeScope;                                    // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        DialogKindCooldownTime;                            // 0xCC(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPerformanceEchoDataBase*              EchoData;                                          // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogPerformanceData* GetDefaultObj();

	void PlayWwiseEventPreview();
};

// 0xA8 (0xE8 - 0x40)
// Class GbxDialog.DialogScriptData
class UDialogScriptData : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogTimeSlotData*>           TimeSlots;                                         // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDialogNameTag*>                PureEchoNameTags;                                  // 0x50(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TMap<class UDialogEvent*, struct FDialogDecisionTree> EventTriggeredDecisionTrees;                       // 0x60(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDialogDecisionTree                   OtherConditionTriggeredDecisionTree;               // 0xB0(0x30)(Edit, NativeAccessSpecifierPublic)
	class UObject*                               FaceFXAnimSet;                                     // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogScriptData* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class GbxDialog.DialogSelectorFunction
class UDialogSelectorFunction : public UGbxDialogDataAsset
{
public:
	TArray<class UDialogParameter*>              Parameters;                                        // 0x40(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bTriggeringCondition;                              // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECachedResultLifetime             CachedResultLifetime;                              // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogSelectorImplementation*         Implementation;                                    // 0x58(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogSelectorFunction* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GbxDialog.DialogSelectorImplementation
class UDialogSelectorImplementation : public UObject
{
public:
	uint8                                        Pad_A7[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogSelectorImplementation* GetDefaultObj();

	void PerformTest(struct FDialogContext& Context, enum class EDialogDecisionTestResult* Result);
};

// 0x20 (0x50 - 0x30)
// Class GbxDialog.DialogSelectorImplementation_CheckDistance
class UDialogSelectorImplementation_CheckDistance : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                      FromActorParam;                                    // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      ToActorParam;                                      // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomDistance;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomDistance;                                    // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrueIfCloser;                                     // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogSelectorImplementation_CheckDistance* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxDialog.DialogSelectorImplementation_CheckNameTag
class UDialogSelectorImplementation_CheckNameTag : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                      WhoParam;                                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      NameTagParam;                                      // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogSelectorImplementation_CheckNameTag* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GbxDialog.DialogSelectorImplementation_Equality
class UDialogSelectorImplementation_Equality : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                      ParamA;                                            // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      ParamB;                                            // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogSelectorImplementation_Equality* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxDialog.DialogSelectorImplementation_IsPreferredPlayer
class UDialogSelectorImplementation_IsPreferredPlayer : public UDialogSelectorImplementation
{
public:
	class UDialogParameter*                      WhoParam;                                          // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogSelectorImplementation_IsPreferredPlayer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.DialogSpeakerInterface
class IDialogSpeakerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDialogSpeakerInterface* GetDefaultObj();

	bool CanPerformThisDialog(class UDialogPerformanceData* Performance);
};

// 0x38 (0x68 - 0x30)
// Class GbxDialog.DialogStyle
class UDialogStyle : public UGbxDataAsset
{
public:
	enum class EGbxDialogSocialStrategy          SocialStrategy;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterruptSamePriority;                            // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxDialogInterruptStrategy       InterruptStrategy;                                 // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         SubtitlePriority;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PatientWaitTime;                                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWaitTime;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpeakableWhenDead;                                // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterruptableByHighPriorityVox;                   // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayableWhenPaused;                               // 0x46(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayableDuringCinematic;                          // 0x47(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Kind;                                              // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallout;                                          // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogAudioComponentProvider*         AudioComponentProvider;                            // 0x58(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalOnly;                                        // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogStyle* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.DialogSystemEchoManagerInterface
class IDialogSystemEchoManagerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDialogSystemEchoManagerInterface* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class GbxDialog.DialogTimeSlotData
class UDialogTimeSlotData : public UGbxDialogDataAsset
{
public:
	struct FGbxTriggerProperty                   TriggerPreviewAudio;                               // 0x40(0x1)(Edit, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDialogTimeSlotReference>      CompositeAudioAdditionalTimeSlots;                 // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ETimeSlotEchoPreference           EchoPreference;                                    // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UDialogParameter*>              Parameters;                                        // 0x60(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class UDialogLineData*>               Lines;                                             // 0x70(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FDialogDecisionTree                   DecisionTree;                                      // 0x80(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogTimeSlotData* GetDefaultObj();

	void PreviewAudio();
};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.GameDialogSystemCustomizationInterface
class IGameDialogSystemCustomizationInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameDialogSystemCustomizationInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.GbxDialogBlueprintLibrary
class UGbxDialogBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxDialogBlueprintLibrary* GetDefaultObj();

	void WaitForDialog(const struct FDialogConversation& Conversation, const struct FLatentActionInfo& LatentInfo);
	bool TestDialogSelector(class UObject* WorldContextObject, class UDialogSelectorFunction* Selector, struct FDialogContext& InputParameters);
	void StopActiveDialog(class UObject* Target, bool bIncludeDeathDialog);
	void SetNextDialogPlayerHints(class UObject* WorldContextObject, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location);
	void SetDialogGameCustomizationMetadata(class UObject* WorldContextObject, int32 SequenceID, class UObject* Object, int32 Cookie);
	void SetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue, bool Value, float Duration);
	void SetDialogContextParameter(struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject* ObjectValue, float FloatValue, bool bBoolValue);
	void SetConversationPlayerHints(const struct FDialogConversation& Conversation, class AActor* Actor, class UDialogNameTag* NameTag, const struct FVector& Location);
	void ResolveDialogTimeSlotReference(const struct FDialogTimeSlotReference& Reference, class UDialogTimeSlotData** TimeSlot, class UDialogScriptData** Script);
	void PlaceRegionalDialogHold(class UObject* WorldContextObject, class FName HoldName, const struct FVector& Location, float Radius, class UQuietTimePredicate* Rules, float Duration);
	void PlaceGlobalDialogHold(class UObject* WorldContextObject, class FName HoldName, class UQuietTimePredicate* Rules, float Duration);
	void PlaceDialogHoldOnSpeaker(class UObject* WorldContextObject, class FName HoldName, class UObject* Speaker, class UQuietTimePredicate* Rules, float Duration);
	struct FDialogConversation NewDialogConversation(class UObject* WorldContextObject, class AActor* KeyActor, class UDialogNameTag* KeySpeakerName, const struct FVector& KeyLocation);
	struct FDialogContext NewDialogContext();
	void InterruptDialogInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius);
	void InterruptConversation(const struct FDialogConversation& Conversation);
	bool GetDialogFlag(class UObject* WorldContextObject, class UDialogEnumValue* DialogEnumValue);
	TArray<class FString> GetDialogContextParameterSummary(struct FDialogContext& Context);
	void GetDialogContextParameter(struct FDialogContext& Context, class UDialogParameter* Parameter, class UObject** ObjectValue, float* FloatValue, bool* bBoolValue);
	enum class EGbxDialogConversationStatus GetConversationStatus(const struct FDialogConversation& Conversation);
	bool FinishTriggerDialog(class UObject* WorldContextObject, class UDialogEvent* Event, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32* SequenceID);
	bool FinishSpeakSequenceEx(class UObject* WorldContextObject, const struct FDialogTimeSlotSequence& Sequence, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, TArray<int32>* Out_SequenceIDs, float OverrideMaxWait);
	bool FinishSpeakSequence(class UObject* WorldContextObject, const struct FDialogTimeSlotSequence& Sequence, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int32* Out_LastSequenceID, float OverrideMaxWait);
	bool FinishSpeak(class UObject* WorldContextObject, const struct FDialogTimeSlotReference& TimeSlotRef, class UGbxDialogComponent* OptionalSpeaker, struct FDialogContext& Context, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, float StartDelay, int32* SequenceID, float OverrideMaxWait);
	bool FindOrCreateNamedSpeaker(class UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, class UGbxDialogComponent** Speaker);
	bool EnqueueDialogPerformance(class UObject* WorldContextObject, class UGbxDialogComponent* Speaker, class UDialogPerformanceData* Performance, float StartDelay, const struct FDialogConversation& ContinueConversation, struct FDialogConversation* Conversation, int32* DialogPlaybackSequence);
	void DeactivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script);
	enum class EDialogDecisionTestResult ConvertBoolToDialogTestResult(bool bValue);
	void CancelDialogBlockingHold(class UObject* WorldContextObject, class FName HoldName, class UObject* OptionalScopeSpeaker);
	void BindToDialogSequenceFinished2(class UObject* WorldContextObject, int32 PlayingSequenceID, UDelegateProperty_ Delegate);
	void BindToDialogSequenceFinished(class UObject* WorldContextObject, int32 PlayingSequenceID, UDelegateProperty_ Delegate);
	void BindToDialogNotify(class UObject* WorldContextObject, int32 PlayingSequenceID, class FName NotifyName, UDelegateProperty_ Delegate);
	void ActivateDialogScript(class UObject* WorldContextObject, TSoftObjectPtr<class UDialogScriptData> SoftScript, class UDialogScriptData* Script);
};

// 0x160 (0x2D8 - 0x178)
// Class GbxDialog.GbxDialogComponent
class UGbxDialogComponent : public UActorComponent
{
public:
	TArray<class UDialogNameTag*>                RandomNameTags;                                    // 0x178(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogScriptData*>             DialogScripts;                                     // 0x188(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStartedPerformance;                              // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDialogNameTag*                        NameTag;                                           // 0x1A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurrentDialogPerformanceInfo         CurrentPerformance;                                // 0x1B0(0x68)(Transient, NativeAccessSpecifierPublic)
	struct FCurrentDialogPerformanceInfo         PendingPerformance;                                // 0x218(0x68)(Transient, NativeAccessSpecifierPublic)
	TArray<struct FDialogScriptPinnedRef>        PinnedScripts;                                     // 0x280(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bPureEchoSpeaker;                                  // 0x290(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioComponent*                  DistributedAudioComponent;                         // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransientEchoSpeaker;                             // 0x2A0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransientEchoSpeakerIdleTime;                      // 0x2A4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpeakDirectlyToPlayer;                            // 0x2A8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     DirectSpeakerTarget;                               // 0x2B0(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPositional;                                       // 0x2B8(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDistributedSpeaker;                               // 0x2B9(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_183[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInitialDialogInProgress              InitialDialogInProgress;                           // 0x2C0(0x18)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxDialogComponent* GetDefaultObj();

	void StopPerformance(int32 DialogThreadID, bool bIncludeDeathDialog);
	void StartPerformance(int32 DialogThreadID, int32 DialogSequenceID, class UDialogPerformanceData* Performance);
	void OnRep_InitialDialogInProgress();
	bool IsSpeakerClearToPlayDialog(class UDialogStyle* ProposedStyle, bool bProposingEcho, const struct FDialogConversation& ProposedConversation);
	bool IsSpeakerActive(bool bIncludePendingVO);
};

// 0xD0 (0x100 - 0x30)
// Class GbxDialog.GbxDialogSettings
class UGbxDialogSettings : public UGbxDataAsset
{
public:
	TSubclassOf<class AActor>                    PureEchoSpeakerActorClass;                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                GameGlobalParametersProviderClass;                 // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDialogBlackboard>         BlackboardClass;                                   // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           ConfigurePureEchoTalkerEvent;                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            EchoControlWwiseParameter;                         // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            PureEchoSpeakerWwiseParameter;                     // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseRtpc*                            VoicePitchParameter;                               // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogEnumValue*>              EnforcedRestrictionQualifiers;                     // 0x68(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        ConversationExpirationDuration;                    // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecentPerformancesExpirationDuration;              // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmoteWeightBlendDuration;                          // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmallCooldownRadius;                               // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NearRadius;                                        // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        QuietTimeMergeRadius;                              // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegionRadius;                                      // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnableEchoBelowVolume;                             // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisableEchoAboveVolume;                            // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EchoTransitionReqiredVolumeChange;                 // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EchoVoiceReorientationVolumePenaltyFactor;         // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterConversationDelay;                            // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ConfigurationErrorSound;                           // 0xA8(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      EventParameter;                                    // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      SelfParameter;                                     // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      GlobalContextParameter;                            // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      ScriptContextParameter;                            // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      ConversationContextParameter;                      // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogParameter*                      LineContextParameter;                              // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEnumType*                       CountersEnum;                                      // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEnumType*                       FlagsEnum;                                         // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxDialogSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDialog.GlobalDialogParametersProviderInterface
class IGlobalDialogParametersProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGlobalDialogParametersProviderInterface* GetDefaultObj();

	void InitDialogContext(struct FDialogContext& Parameters);
};

// 0x18 (0x70 - 0x58)
// Class GbxDialog.MovieSceneDialogTrack
class UMovieSceneDialogTrack : public UMovieSceneNameableTrack
{
public:
	bool                                         bAllowRename;                                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x60(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneDialogTrack* GetDefaultObj();

};

// 0x70 (0x150 - 0xE0)
// Class GbxDialog.MovieSceneDialogSection
class UMovieSceneDialogSection : public UMovieSceneSection
{
public:
	struct FDialogTimeSlotReference              Dialog;                                            // 0xE0(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bPlayThroughDialogSystem;                          // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSubtitleOnly;                                     // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ManualSubtitleText;                                // 0x128(0x18)(Edit, NativeAccessSpecifierPublic)
	float                                        ManualSubtitleDuration;                            // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogNameTag*                        SubtitleNameTag;                                   // 0x148(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneDialogSection* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxDialog.PerformanceEchoDataBase
class UPerformanceEchoDataBase : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UPerformanceEchoDataBase* GetDefaultObj();

};

// 0x0 (0x458 - 0x458)
// Class GbxDialog.PureEchoSpeakerHost
class APureEchoSpeakerHost : public AActor
{
public:

	static class UClass* StaticClass();
	static class APureEchoSpeakerHost* GetDefaultObj();

};

}



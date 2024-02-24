#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVoiceOfGodSpeaker : uint8
{
	INVALID                        = 0,
	Lilith_Normal                  = 1,
	Tannis_Normal                  = 2,
	EVoiceOfGodSpeaker_MAX         = 3,
};

enum class ETimeSlotEchoPreference : uint8
{
	AutoTransition                 = 0,
	LiveOnly                       = 1,
	EchoOnly                       = 2,
	ETimeSlotEchoPreference_MAX    = 3,
};

enum class ECachedResultLifetime : uint8
{
	OneTest                        = 0,
	OneSearch                      = 1,
	ManualReset                    = 2,
	ECachedResultLifetime_MAX      = 3,
};

enum class EDialogParameterMappingSourceType : uint8
{
	Parameter                      = 0,
	Constant                       = 1,
	Counter                        = 2,
	Flag                           = 3,
	EDialogParameterMappingSourceType_MAX = 4,
};

enum class EDialogImplementationStatus : uint8
{
	Unimplemented                  = 0,
	Implemented                    = 1,
	EDialogImplementationStatus_MAX = 2,
};

enum class EDialogParameterPrimaryType : uint8
{
	Event                          = 0,
	Object                         = 1,
	Enum                           = 2,
	Number                         = 3,
	Boolean                        = 4,
	EDialogParameterPrimaryType_MAX = 5,
};

enum class EGbxDialogQuietTimeScope : uint8
{
	Individual                     = 0,
	SmallArea                      = 1,
	Area                           = 2,
	EGbxDialogQuietTimeScope_MAX   = 3,
};

enum class ELineScorePriorityMode : uint8
{
	RetainLowerScores              = 0,
	DiscardLowerScores             = 1,
	ELineScorePriorityMode_MAX     = 2,
};

enum class EDialogDecisionTestResult : uint8
{
	ConditionIsTrue                = 0,
	ConditionIsFalse               = 1,
	TestIsInvalid                  = 2,
	EDialogDecisionTestResult_MAX  = 3,
};

enum class EGbxDialogConversationStatus : uint8
{
	NotFound                       = 0,
	Pending                        = 1,
	Canceled                       = 2,
	Started                        = 3,
	HoldingConversation            = 4,
	Interrupted                    = 5,
	Succeeded                      = 6,
	EGbxDialogConversationStatus_MAX = 7,
};

enum class EGbxDialogInterruptStrategy : uint8
{
	StopOthers                     = 0,
	SpeakOverOthers                = 1,
	EGbxDialogInterruptStrategy_MAX = 2,
};

enum class EGbxDialogSocialStrategy : uint8
{
	Normal                         = 0,
	Selfish                        = 1,
	NonSocial                      = 2,
	EGbxDialogSocialStrategy_MAX   = 3,
};

enum class EGbxDialogCompileStatus : uint8
{
	UpToDate                       = 0,
	Dirty                          = 1,
	Error                          = 2,
	EGbxDialogCompileStatus_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxDialog.DialogParameterValue
struct FDialogParameterValue
{
public:
	uint8                                        Pad_1F7[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogScriptPinnedRef
struct FDialogScriptPinnedRef
{
public:
	TWeakObjectPtr<class UDialogBlackboard>      Blackboard;                                        // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogScriptData*                     Script;                                            // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxDialog.DialogTimeSlotReference
struct FDialogTimeSlotReference
{
public:
	TSoftObjectPtr<class UDialogScriptData>      Script;                                            // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x28(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogTimeSlotData*                   CachedTimeSlot;                                    // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxDialog.RecentDialogPerformanceInfo
struct FRecentDialogPerformanceInfo
{
public:
	double                                       ExpirationTime;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SequenceID;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGbxDialogComponent>    Speaker;                                           // 0xC(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UDialogPerformanceData> Performance;                                       // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxDialog.RecentConversationInfo
struct FRecentConversationInfo
{
public:
	double                                       ExpirationTime;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>      PreferredPlayer;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 LastKeyActor;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastKeyLocation;                                   // 0x18(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxDialog.DistributedSpeakerInfo
struct FDistributedSpeakerInfo
{
public:
	class UGbxDialogComponent*                   DistributedSpeaker;                                // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UGbxDialogComponent>> RepresentedSpeakers;                               // 0x8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogSequenceNotifyDelegate
struct FDialogSequenceNotifyDelegate
{
public:
	UDelegateProperty_                           OnNotify;                                          // 0x0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxDialog.DialogSequenceDelegates
struct FDialogSequenceDelegates
{
public:
	UDelegateProperty_                           OnFinished;                                        // 0x0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnFinished2;                                       // 0x10(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_209[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FDialogSequenceNotifyDelegate> Notifies;                                          // 0x30(0x50)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxDialog.DialogBlackboardCounterValueMap
struct FDialogBlackboardCounterValueMap
{
public:
	TMap<class UDialogEnumValue*, float>         Map;                                               // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogBlackboardFlagValue
struct FDialogBlackboardFlagValue
{
public:
	uint8                                        Pad_20C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxDialog.DialogBlackboardFlagValueMap
struct FDialogBlackboardFlagValueMap
{
public:
	TMap<class UDialogEnumValue*, struct FDialogBlackboardFlagValue> Map;                                               // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxDialog.QuietTimeTracker
struct FQuietTimeTracker
{
public:
	TWeakObjectPtr<class UObject>                KeyObject;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                ScopeObject;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuietTimePredicate*                   ScopePredicate;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x218 (0x218 - 0x0)
// ScriptStruct GbxDialog.DialogContext
struct FDialogContext
{
public:
	uint8                                        Pad_217[0x218];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C0 (0x2C0 - 0x0)
// ScriptStruct GbxDialog.DialogThread
struct FDialogThread
{
public:
	uint8                                        Pad_21B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        Context;                                           // 0x10(0x218)(NativeAccessSpecifierPublic)
	class UGbxDialogComponent*                   Speaker;                                           // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogPerformanceData*                Performance;                                       // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               QuietTimeKey;                                      // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               GameCustomizationObject;                           // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_225[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxDialog.DialogEventSubscription
struct FDialogEventSubscription
{
public:
	struct FSoftObjectPath                       ReferencerTimeSlot;                                // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.ConditionalEchoData
struct FConditionalEchoData
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCharacterEchoDataBase*                EchoData;                                          // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxDialog.DialogMoodInfo
struct FDialogMoodInfo
{
public:
	TSubclassOf<class UGbxAction>                Action;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogPerformanceNotify
struct FDialogPerformanceNotify
{
public:
	float                                        TimeFraction;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxDialog.DialogTimeSlotSequenceItem
struct FDialogTimeSlotSequenceItem
{
public:
	struct FDialogTimeSlotReference              TimeSlot;                                          // 0x0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogTimeSlotSequence
struct FDialogTimeSlotSequence
{
public:
	TArray<struct FDialogTimeSlotSequenceItem>   Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxDialog.InitialDialogInProgress
struct FInitialDialogInProgress
{
public:
	int32                                        DialogThreadID;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DialogSequenceID;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogPerformanceData*                Performance;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayTime;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxDialog.DialogParameterMapping
struct FDialogParameterMapping
{
public:
	class UDialogParameter*                      TargetParameter;                                   // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDialogParameterMappingSourceType SourceType;                                        // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceObject;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceObjectSubContext;                            // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceNumber;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxDialog.DialogSelectorFunctionCallInstance
struct FDialogSelectorFunctionCallInstance
{
public:
	class UDialogSelectorFunction*               Function;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogParameterMapping>       ParameterMappings;                                 // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxDialog.DialogLookupDecision
struct FDialogLookupDecision
{
public:
	struct FDialogSelectorFunctionCallInstance   Call;                                              // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class ECachedResultLifetime             CachedLifetime;                                    // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       DecisionNumber;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxDialog.DialogDecisionNode
struct FDialogDecisionNode
{
public:
	int32                                        Parent;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Decision;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TrueResultChild;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FalseResultChild;                                  // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnrelatedResultChild;                              // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResultBucket;                                      // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxChildQuality;                                   // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogLookupResult
struct FDialogLookupResult
{
public:
	class UDialogLineData*                       Line;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quality;                                           // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogLookupResultBucket
struct FDialogLookupResultBucket
{
public:
	TArray<struct FDialogLookupResult>           Results;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxDialog.DialogDecisionTree
struct FDialogDecisionTree
{
public:
	TArray<struct FDialogLookupDecision>         Decisions;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDialogDecisionNode>           Nodes;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDialogLookupResultBucket>     ResultBuckets;                                     // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxDialog.DialogConditionRequirement
struct FDialogConditionRequirement
{
public:
	struct FDialogSelectorFunctionCallInstance   SelectorCall;                                      // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bRequiredResult;                                   // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_262[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogSelectionCondition
struct FDialogSelectionCondition
{
public:
	TArray<struct FDialogConditionRequirement>   Requirements;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxDialog.DialogScopeParameterInfo
struct FDialogScopeParameterInfo
{
public:
	class UObject*                               Target;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogParameterMapping>       ParameterMappings;                                 // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxDialog.DialogParameterType
struct FDialogParameterType
{
public:
	enum class EDialogParameterPrimaryType       PrimaryType;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_276[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogEnumType*                       SecondaryType;                                     // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxDialog.CurrentDialogPerformanceInfo
struct FCurrentDialogPerformanceInfo
{
public:
	int32                                        DialogThreadID;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DialogSequenceID;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogPerformanceData*                Performance;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWwisePlaybackInstance                PlayingAudioInstance;                              // 0x10(0x18)(NativeAccessSpecifierPublic)
	bool                                         bForcingOwnerRelevantForEcho;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxDialog.DialogConversation
struct FDialogConversation
{
public:
	int32                                        ConversationID;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWorld>                 ConversationWorld;                                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxDialog.MovieSceneDialogSectionTemplateData
struct FMovieSceneDialogSectionTemplateData
{
public:
	struct FDialogTimeSlotReference              Dialog;                                            // 0x0(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bPlayThroughDialogSystem;                          // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSubtitleOnly;                                     // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ManualSubtitleText;                                // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	float                                        ManualSubtitleDuration;                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_289[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogNameTag*                        SubtitleNameTag;                                   // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RowIdx;                                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x74(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x78(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xA0 - 0x20)
// ScriptStruct GbxDialog.MovieSceneDialogSectionTemplate
struct FMovieSceneDialogSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneDialogSectionTemplateData  TemplateData;                                      // 0x20(0x80)(NativeAccessSpecifierPublic)
};

}



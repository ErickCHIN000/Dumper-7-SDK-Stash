#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELineDuration : uint8
{
	LD_Default                     = 0,
	LD_WhenAudioEnds               = 1,
	LD_WhenSequenceEnds            = 2,
	LD_AfterReadingTime            = 3,
	LD_AfterDuration               = 4,
	LD_Never                       = 5,
	LD_MAX                         = 6,
};

enum class EUpdateType : uint8
{
	UT_None                        = 0,
	UT_CompleteTask                = 1,
	UT_BeginQuest                  = 2,
	UT_ForgetQuest                 = 3,
	UT_RestartQuest                = 4,
	UT_QuestNewState               = 5,
	UT_TaskProgressMade            = 6,
	UT_MAX                         = 7,
};

enum class EPartyConditionPolicy : int32
{
	AnyPlayerPasses                = 0,
	PartyPasses                    = 1,
	AllPlayersPass                 = 2,
	PartyLeaderPasses              = 3,
	EPartyConditionPolicy_MAX      = 4,
};

enum class EAnchorOriginRule : uint8
{
	AOR_Disabled                   = 0,
	AOR_ConversationCenter         = 1,
	AOR_Speaker                    = 2,
	AOR_Listener                   = 3,
	AOR_Custom                     = 4,
	AOR_MAX                        = 5,
};

enum class EAnchorRotationRule : uint8
{
	ARR_AnchorActorForwardVector   = 0,
	ARR_Conversation               = 1,
	ARR_MAX                        = 2,
};

enum class EShotTrackingRule : uint8
{
	STR_Disabled                   = 0,
	STR_Speaker                    = 1,
	STR_Listener                   = 2,
	STR_Custom                     = 3,
	STR_MAX                        = 4,
};

enum class EPartyEventPolicy : int32
{
	Party                          = 0,
	AllPartyMembers                = 1,
	PartyLeader                    = 2,
	EPartyEventPolicy_MAX          = 3,
};

enum class EEventRuntime : uint8
{
	Start                          = 0,
	End                            = 1,
	Both                           = 2,
	EEventRuntime_MAX              = 3,
};

enum class EPartyDialogueControlPolicy : uint8
{
	PartyLeaderControlled          = 0,
	AllPlayers                     = 1,
	EPartyDialogueControlPolicy_MAX = 2,
};

enum class EQuestCompletion : uint8
{
	QC_NotStarted                  = 0,
	QC_Started                     = 1,
	QC_Succeded                    = 2,
	QC_Failed                      = 3,
	QC_MAX                         = 4,
};

enum class EStateNodeType : uint8
{
	Regular                        = 0,
	Success                        = 1,
	Failure                        = 2,
	EStateNodeType_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// ScriptStruct Narrative.SpeakerInfo
struct FSpeakerInfo
{
public:
	class FName                                  SpeakerID;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNarrativeDialogueSequence*            DefaultSpeakerShot;                                // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    SpeakerAvatarClass;                                // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A63[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpeakerAvatarTransform;                            // 0x20(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NodeColor;                                         // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Narrative.DialogueLine
struct FDialogueLine
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ELineDuration                     Duration;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationSecondsOverride;                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            DialogueSound;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DialogueMontage;                                   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FacialAnimation;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNarrativeDialogueSequence*            Shot;                                              // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xA0 - 0x90)
// ScriptStruct Narrative.PlayerSpeakerInfo
struct FPlayerSpeakerInfo : public FSpeakerInfo
{
public:
	class UNarrativeDialogueSequence*            SelectingReplyShot;                                // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Narrative.SpeakerSelector
struct FSpeakerSelector
{
public:
	class FName                                  SpeakerID;                                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Narrative.DialogueInfo
struct FDialogueInfo
{
public:
	class UDialogue*                             Dialogue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NPC;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Narrative.NarrativeUpdate
struct FNarrativeUpdate
{
public:
	uint8                                        Pad_1AB4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUpdateType                       UpdateType;                                        // 0x8(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UQuest>                    QuestClass;                                        // 0x10(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Payload;                                           // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                IntPayload;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Narrative.ShotTrackingSettings
struct FShotTrackingSettings
{
public:
	enum class EShotTrackingRule                 AvatarToTrack;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TrackedAvatarCustomID;                             // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TrackBoneNudge;                                    // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateTrackingEveryFrame;                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdateTrackingInterpSpeed;                         // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Narrative.SavedQuestBranch
struct FSavedQuestBranch
{
public:
	class FName                                  BranchID;                                          // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TasksProgress;                                     // 0x8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Narrative.NarrativeSavedQuest
struct FNarrativeSavedQuest
{
public:
	TSubclassOf<class UQuest>                    QuestClass;                                        // 0x0(0x8)(ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentStateID;                                    // 0x8(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSavedQuestBranch>             QuestBranches;                                     // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReachedStateNames;                                 // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Narrative.QuestTask
struct FQuestTask
{
public:
	uint8                                        Pad_1AEA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNarrativeDataTask*                    Task;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Argument;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptional;                                         // 0x25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRetroactive;                                      // 0x26(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TaskDescription;                                   // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        CurrentProgress;                                   // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B00[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}



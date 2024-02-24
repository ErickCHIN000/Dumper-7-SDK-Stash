#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x218 - 0x0)
// Function GbxDialog.DialogActionBlueprintImplementation.Execute
struct UDialogActionBlueprintImplementation_Execute_Params
{
public:
	struct FDialogContext                        Context;                                           // 0x0(0x218)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxDialog.DialogEnumValueInterface.GetEnumValue
struct IDialogEnumValueInterface_GetEnumValue_Params
{
public:
	class UDialogEnumType*                       EnumType;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEnumValue*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x220 (0x220 - 0x0)
// Function GbxDialog.DialogSelectorImplementation.PerformTest
struct UDialogSelectorImplementation_PerformTest_Params
{
public:
	struct FDialogContext                        Context;                                           // 0x0(0x218)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EDialogDecisionTestResult         Result;                                            // 0x218(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxDialog.DialogSpeakerInterface.CanPerformThisDialog
struct IDialogSpeakerInterface_CanPerformThisDialog_Params
{
public:
	class UDialogPerformanceData*                Performance;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.WaitForDialog
struct UGbxDialogBlueprintLibrary_WaitForDialog_Params
{
public:
	struct FDialogConversation                   Conversation;                                      // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.TestDialogSelector
struct UGbxDialogBlueprintLibrary_TestDialogSelector_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogSelectorFunction*               Selector;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogContext                        InputParameters;                                   // 0x10(0x218)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x228(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.StopActiveDialog
struct UGbxDialogBlueprintLibrary_StopActiveDialog_Params
{
public:
	class UObject*                               Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDeathDialog;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.SetNextDialogPlayerHints
struct UGbxDialogBlueprintLibrary_SetNextDialogPlayerHints_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogNameTag*                        NameTag;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogGameCustomizationMetadata
struct UGbxDialogBlueprintLibrary_SetDialogGameCustomizationMetadata_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SequenceID;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Object;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Cookie;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogFlag
struct UGbxDialogBlueprintLibrary_SetDialogFlag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEnumValue*                      DialogEnumValue;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.SetDialogContextParameter
struct UGbxDialogBlueprintLibrary_SetDialogContextParameter_Params
{
public:
	struct FDialogContext                        Context;                                           // 0x0(0x218)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDialogParameter*                      Parameter;                                         // 0x218(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectValue;                                       // 0x220(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x228(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoolValue;                                        // 0x22C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.SetConversationPlayerHints
struct UGbxDialogBlueprintLibrary_SetConversationPlayerHints_Params
{
public:
	struct FDialogConversation                   Conversation;                                      // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogNameTag*                        NameTag;                                           // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x20(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.ResolveDialogTimeSlotReference
struct UGbxDialogBlueprintLibrary_ResolveDialogTimeSlotReference_Params
{
public:
	struct FDialogTimeSlotReference              Reference;                                         // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	class UDialogTimeSlotData*                   TimeSlot;                                          // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogScriptData*                     Script;                                            // 0x48(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceRegionalDialogHold
struct UGbxDialogBlueprintLibrary_PlaceRegionalDialogHold_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HoldName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuietTimePredicate*                   Rules;                                             // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceGlobalDialogHold
struct UGbxDialogBlueprintLibrary_PlaceGlobalDialogHold_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HoldName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuietTimePredicate*                   Rules;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.PlaceDialogHoldOnSpeaker
struct UGbxDialogBlueprintLibrary_PlaceDialogHoldOnSpeaker_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HoldName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Speaker;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuietTimePredicate*                   Rules;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogConversation
struct UGbxDialogBlueprintLibrary_NewDialogConversation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                KeyActor;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogNameTag*                        KeySpeakerName;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               KeyLocation;                                       // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x218 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.NewDialogContext
struct UGbxDialogBlueprintLibrary_NewDialogContext_Params
{
public:
	struct FDialogContext                        ReturnValue;                                       // 0x0(0x218)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptDialogInRadius
struct UGbxDialogBlueprintLibrary_InterruptDialogInRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.InterruptConversation
struct UGbxDialogBlueprintLibrary_InterruptConversation_Params
{
public:
	struct FDialogConversation                   Conversation;                                      // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogFlag
struct UGbxDialogBlueprintLibrary_GetDialogFlag_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEnumValue*                      DialogEnumValue;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x228 (0x228 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameterSummary
struct UGbxDialogBlueprintLibrary_GetDialogContextParameterSummary_Params
{
public:
	struct FDialogContext                        Context;                                           // 0x0(0x218)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x218(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.GetDialogContextParameter
struct UGbxDialogBlueprintLibrary_GetDialogContextParameter_Params
{
public:
	struct FDialogContext                        Context;                                           // 0x0(0x218)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UDialogParameter*                      Parameter;                                         // 0x218(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ObjectValue;                                       // 0x220(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x228(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoolValue;                                        // 0x22C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.GetConversationStatus
struct UGbxDialogBlueprintLibrary_GetConversationStatus_Params
{
public:
	struct FDialogConversation                   Conversation;                                      // 0x0(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxDialogConversationStatus      ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x250 (0x250 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.FinishTriggerDialog
struct UGbxDialogBlueprintLibrary_FinishTriggerDialog_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogEvent*                          Event;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogContext                        Context;                                           // 0x10(0x218)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDialogConversation                   ContinueConversation;                              // 0x228(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   Conversation;                                      // 0x234(0xC)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x240(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SequenceID;                                        // 0x244(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x248(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x260 (0x260 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeakSequenceEx
struct UGbxDialogBlueprintLibrary_FinishSpeakSequenceEx_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogTimeSlotSequence               Sequence;                                          // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FDialogContext                        Context;                                           // 0x18(0x218)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDialogConversation                   ContinueConversation;                              // 0x230(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   Conversation;                                      // 0x23C(0xC)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Out_SequenceIDs;                                   // 0x248(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        OverrideMaxWait;                                   // 0x258(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x25C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x258 (0x258 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeakSequence
struct UGbxDialogBlueprintLibrary_FinishSpeakSequence_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogTimeSlotSequence               Sequence;                                          // 0x8(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FDialogContext                        Context;                                           // 0x18(0x218)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDialogConversation                   ContinueConversation;                              // 0x230(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   Conversation;                                      // 0x23C(0xC)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Out_LastSequenceID;                                // 0x248(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideMaxWait;                                   // 0x24C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x250(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x290 (0x290 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.FinishSpeak
struct UGbxDialogBlueprintLibrary_FinishSpeak_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogTimeSlotReference              TimeSlotRef;                                       // 0x8(0x40)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class UGbxDialogComponent*                   OptionalSpeaker;                                   // 0x48(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogContext                        Context;                                           // 0x50(0x218)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FDialogConversation                   ContinueConversation;                              // 0x268(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   Conversation;                                      // 0x274(0xC)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x280(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SequenceID;                                        // 0x284(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideMaxWait;                                   // 0x288(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.FindOrCreateNamedSpeaker
struct UGbxDialogBlueprintLibrary_FindOrCreateNamedSpeaker_Params
{
public:
	class UDialogNameTag*                        NameTag;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludePureEchoSpeakers;                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateIfNotFound;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDialogComponent*                   Speaker;                                           // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.EnqueueDialogPerformance
struct UGbxDialogBlueprintLibrary_EnqueueDialogPerformance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDialogComponent*                   Speaker;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogPerformanceData*                Performance;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   ContinueConversation;                              // 0x1C(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   Conversation;                                      // 0x28(0xC)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DialogPlaybackSequence;                            // 0x34(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.DeactivateDialogScript
struct UGbxDialogBlueprintLibrary_DeactivateDialogScript_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDialogScriptData>      SoftScript;                                        // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogScriptData*                     Script;                                            // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.ConvertBoolToDialogTestResult
struct UGbxDialogBlueprintLibrary_ConvertBoolToDialogTestResult_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDialogDecisionTestResult         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.CancelDialogBlockingHold
struct UGbxDialogBlueprintLibrary_CancelDialogBlockingHold_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HoldName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalScopeSpeaker;                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished2
struct UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished2_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingSequenceID;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogSequenceFinished
struct UGbxDialogBlueprintLibrary_BindToDialogSequenceFinished_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingSequenceID;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.BindToDialogNotify
struct UGbxDialogBlueprintLibrary_BindToDialogNotify_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingSequenceID;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NotifyName;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Delegate;                                          // 0x18(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxDialog.GbxDialogBlueprintLibrary.ActivateDialogScript
struct UGbxDialogBlueprintLibrary_ActivateDialogScript_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDialogScriptData>      SoftScript;                                        // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogScriptData*                     Script;                                            // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxDialog.GbxDialogComponent.StopPerformance
struct UGbxDialogComponent_StopPerformance_Params
{
public:
	int32                                        DialogThreadID;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDeathDialog;                               // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxDialog.GbxDialogComponent.StartPerformance
struct UGbxDialogComponent_StartPerformance_Params
{
public:
	int32                                        DialogThreadID;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DialogSequenceID;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogPerformanceData*                Performance;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxDialog.GbxDialogComponent.IsSpeakerClearToPlayDialog
struct UGbxDialogComponent_IsSpeakerClearToPlayDialog_Params
{
public:
	class UDialogStyle*                          ProposedStyle;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProposingEcho;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   ProposedConversation;                              // 0xC(0xC)(Parm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function GbxDialog.GbxDialogComponent.IsSpeakerActive
struct UGbxDialogComponent_IsSpeakerActive_Params
{
public:
	bool                                         bIncludePendingVO;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x218 - 0x0)
// Function GbxDialog.GlobalDialogParametersProviderInterface.InitDialogContext
struct IGlobalDialogParametersProviderInterface_InitDialogContext_Params
{
public:
	struct FDialogContext                        Parameters;                                        // 0x0(0x218)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}



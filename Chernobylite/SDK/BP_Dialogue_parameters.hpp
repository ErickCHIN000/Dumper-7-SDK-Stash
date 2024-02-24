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

// 0x50 (0x50 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ReenableMovement
struct ABP_Dialogue_C_ReenableMovement_Params
{
public:
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGMovementState>          CallFunc_GetCurrentMovementState_ReturnValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            K2Node_DynamicCast_AsCharacter;                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         K2Node_DynamicCast_AsCh_Hero_00;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ResetCounters
struct ABP_Dialogue_C_ResetCounters_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_733[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.SplitEventAndArguments
struct ABP_Dialogue_C_SplitEventAndArguments_Params
{
public:
	class FString                                SourceString;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Event;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Arguments;                                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                EventName;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        LocalArray;                                        // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x50(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue_1;             // 0x80(0x10)(ReferenceParm)
	class FString                                CallFunc_JoinStringArray_ReturnValue_1;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.CullAllDialogue
struct ABP_Dialogue_C_CullAllDialogue_Params
{
public:
	class AActor*                                CallFunc_GetParentActor_ReturnValue;               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DialogueStackManager_C*            K2Node_DynamicCast_AsBP_Dialogue_Stack_Manager;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x128 (0x128 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.PropagateGlobalColorCodingToDialogueActors
struct ABP_Dialogue_C_PropagateGlobalColorCodingToDialogueActors_Params
{
public:
	class FString                                Space_character;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CurrentlyAnalysedDialogueActor;                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                          ExistingColorCodingStrings;                        // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        DialogueActorNames;                                // 0x30(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_83E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x58(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_ColorCoding                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x84(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_855[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value;                           // 0x98(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_85D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       K2Node_MakeStruct_struct_DialogueActorReferences;  // 0xC0(0x20)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_864[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_869[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_86B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x108(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x118(0x10)(ReferenceParm)
};

// 0x16C (0x16C - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ReadDialogueOption
struct ABP_Dialogue_C_ReadDialogueOption_Params
{
public:
	class FString                                Args2;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  Next;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Prompt;                                            // 0x38(0x18)(Parm, OutParm)
	class FText                                  Thought;                                           // 0x50(0x18)(Parm, OutParm)
	class FText                                  Disabled_text;                                     // 0x68(0x18)(Parm, OutParm)
	bool                                         Don_t_Count_to_AvailableOptions;                   // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Hide_if_disabled;                                  // 0x81(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_907[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetNode;                                        // 0x84(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled_;                                          // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_90E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl;         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_915[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Split_LeftS;                              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_91C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Split_LeftS_1;                            // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS_1;                           // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue_1;                      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_923[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x100(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x118(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x130(0x18)(None)
	class FString                                CallFunc_Split_LeftS_2;                            // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS_2;                           // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue_2;                      // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ReadAnimation
struct ABP_Dialogue_C_ReadAnimation_Params
{
public:
	struct FFDialogueData                        Data;                                              // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         TargetIsPlayer;                                    // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_993[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayedInSeconds;                                  // 0x54(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FullBodyAnimation;                                 // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_997[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AnimationName;                                     // 0x60(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                TargetActorName;                                   // 0x70(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.CreateWidget
struct ABP_Dialogue_C_CreateWidget_Params
{
public:
	TArray<struct FStruct_DialogueSingleOptionData> Prompts;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_DialoguePlayersChoicePrompts_C*   CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ReadCounter
struct ABP_Dialogue_C_ReadCounter_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FFDialogueData                        DialogueData;                                      // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CountTimesSeen_;                                   // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ScopeLocal_;                                       // 0x61(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A1D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Treshold;                                          // 0x64(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextMoreOrEqual;                                   // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextLess;                                          // 0x70(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CounterID;                                         // 0x78(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A2F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.Get0thElement
struct ABP_Dialogue_C_Get0thElement_Params
{
public:
	TArray<class FName>                          In;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Out;                                               // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.IncrementDialogueCounter
struct ABP_Dialogue_C_IncrementDialogueCounter_Params
{
public:
	class FString                                CounterID;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ScopeLocal;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     K2Node_DynamicCast_AsCGGame_Instance;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AD7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ResolveCounterNext
struct ABP_Dialogue_C_ResolveCounterNext_Params
{
public:
	bool                                         ScopeLocal;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Treshold;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NextMoreOrEqual;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  _NextLess;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CounterID;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  OutNext;                                           // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChosenLess;                                        // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B48[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     K2Node_DynamicCast_AsCGGame_Instance;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B4F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B (0x3B - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.CheckForBool
struct ABP_Dialogue_C_CheckForBool_Params
{
public:
	class FString                                BoolName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	TArray<class FName>                          Next;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  NextRow;                                           // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     K2Node_DynamicCast_AsCGGame_Instance;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_Value;                           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x175 (0x175 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ResolveNodeID
struct ABP_Dialogue_C_ResolveNodeID_Params
{
public:
	class FName                                  InID;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         JustPeeking;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DontIncrementSeeCounters;                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  IDAfterFlowControl;                                // 0xC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         K2Node_DynamicCast_AsCh_Hero_00;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData;    // 0x50(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata; // 0xA0(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_ReadCounter_CountTimesSeen_;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReadCounter_ScopeLocal_;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ReadCounter_Treshold;                     // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ReadCounter_NextMoreOrEqual;              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ReadCounter_NextLess;                     // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_ReadCounter_CounterID;                    // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ResolveCounterNext_OutNext;               // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ResolveCounterNext_ChosenLess;            // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CEF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl;         // 0x11C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl_1;       // 0x124(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl_2;       // 0x12C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl_3;       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get0thElement_Out;                        // 0x154(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl_4;       // 0x15C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_CheckForBool_NextRow;                     // 0x164(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl_5;       // 0x16C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17 (0x17 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.Set Next Data Row
struct ABP_Dialogue_C_Set_Next_Data_Row_Params
{
public:
	class FName                                  NextRow;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DontIncrementSeeCounters;                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DialogueDidntEnd;                                  // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D8F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl;         // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x149 (0x149 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.Get Data From Data Table
struct ABP_Dialogue_C_Get_Data_From_Data_Table_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFDialogueData                        DialogueData;                                      // 0x8(0x50)(Parm, OutParm, HasGetValueTypeHash)
	struct FFDialogueMetadata                    DialogueMetadata;                                  // 0x58(0x48)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DEA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_GetDataTableRowFromName_OutRow;           // 0xA8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueMetadata                    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x100(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.InpActEvt_Character_Interaction_K2Node_InputActionEvent_1
struct ABP_Dialogue_C_InpActEvt_Character_Interaction_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.InpActEvt_Dialogue_SelectOption_K2Node_InputActionEvent_0
struct ABP_Dialogue_C_InpActEvt_Dialogue_SelectOption_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.AudioCreated_5D37B5024CF6F74A394855AA417A4A2A
struct ABP_Dialogue_C_AudioCreated_5D37B5024CF6F74A394855AA417A4A2A_Params
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.Completed_5D37B5024CF6F74A394855AA417A4A2A
struct ABP_Dialogue_C_Completed_5D37B5024CF6F74A394855AA417A4A2A_Params
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.AudioCreated_349FA0914CCD3FBD9BB3448D2FE9D21A
struct ABP_Dialogue_C_AudioCreated_349FA0914CCD3FBD9BB3448D2FE9D21A_Params
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.Completed_349FA0914CCD3FBD9BB3448D2FE9D21A
struct ABP_Dialogue_C_Completed_349FA0914CCD3FBD9BB3448D2FE9D21A_Params
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.Start dialogue
struct ABP_Dialogue_C_Start_dialogue_Params
{
public:
	bool                                         BlockPlayer;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F20[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGCharacter*                          InInstigator;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.OptionFullySelected
struct ABP_Dialogue_C_OptionFullySelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.PlayDialogueAtRow
struct ABP_Dialogue_C_PlayDialogueAtRow_Params
{
public:
	class FName                                  TargetRow;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockPlayer;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.InpAxisEvt_Dialogue_NextPreviousOption_K2Node_InputAxisEvent_1
struct ABP_Dialogue_C_InpAxisEvt_Dialogue_NextPreviousOption_K2Node_InputAxisEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ReplaceDialogueOptionThoughts
struct ABP_Dialogue_C_ReplaceDialogueOptionThoughts_Params
{
public:
	int32                                        OptionIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_103B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewThoughts;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  NewNotAvailableText;                               // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithCameraBlend
struct ABP_Dialogue_C_StartDialogueWithCameraBlend_Params
{
public:
	class AActor*                                DialogueViewTarget;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithCameraBlendAtRow
struct ABP_Dialogue_C_StartDialogueWithCameraBlendAtRow_Params
{
public:
	class FName                                  TargetRow;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DialogueViewTarget;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithBlendToLocation
struct ABP_Dialogue_C_StartDialogueWithBlendToLocation_Params
{
public:
	struct FVector                               TargetLocation;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TargetRotation;                                    // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        InterpolationTimeSeconds;                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.StartDialogueWithBlendToLocationAtRow
struct ABP_Dialogue_C_StartDialogueWithBlendToLocationAtRow_Params
{
public:
	class FName                                  Row;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TargetRotation;                                    // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        InterpolationTimeSeconds;                          // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.StartDialogue_FireAndKill
struct ABP_Dialogue_C_StartDialogue_FireAndKill_Params
{
public:
	class FName                                  InStartingRow;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.OnSkipDialogueLine_ButtonPressed
struct ABP_Dialogue_C_OnSkipDialogueLine_ButtonPressed_Params
{
public:
	float                                        InAxisValue;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.InterceptPlayerSpotted
struct ABP_Dialogue_C_InterceptPlayerSpotted_Params
{
public:
	class ACGSquadManager*                       InstigatingSquad;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1598 (0x1598 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ExecuteUbergraph_BP_Dialogue
struct ABP_Dialogue_C_ExecuteUbergraph_BP_Dialogue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIState                          Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D0D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UAudioComponent*                       Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       K2Node_CustomEvent_AudioComponent;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       K2Node_CustomEvent_AudioComponent_1;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData;    // 0x40(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata; // 0x90(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xDC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value;                           // 0xF0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D41[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter;                // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D52[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_1;  // 0x128(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_1; // 0x178(0x48)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Temp_object_Variable_1;                            // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       K2Node_CustomEvent_AudioComponent_2;               // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_2;  // 0x1D8(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_2; // 0x228(0x48)(HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_1;                         // 0x270(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_1;              // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       K2Node_MakeStruct_struct_DialogueActorReferences;  // 0x2A8(0x20)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_3;  // 0x2C8(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_3; // 0x318(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_2;                         // 0x368(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_2;              // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x39C(0x10)(ZeroConstructor, NoDestructor)
	enum class EAIState                          Temp_byte_Variable_1;                              // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x3AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DE6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_3;                         // 0x3B8(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_3;              // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       K2Node_CustomEvent_AudioComponent_3;               // 0x3F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_4;  // 0x400(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_4; // 0x450(0x48)(HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_4;                         // 0x498(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_4;              // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_BlockPlayer_1;                  // 0x4C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGCharacter*                          K2Node_CustomEvent_InInstigator;                   // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICh_Patroller_Interface_C> K2Node_DynamicCast_AsCh_Patroller_Interface;       // 0x4E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_5;              // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E74[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       K2Node_MakeStruct_struct_DialogueActorReferences_1; // 0x510(0x20)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x530(0x10)(ZeroConstructor, NoDestructor)
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_5;  // 0x540(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_5; // 0x590(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x5D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x5DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  CallFunc_Get0thElement_Out;                        // 0x5DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd;       // 0x5E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get0thElement_Out_1;                      // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_1;     // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SplitEventAndArguments_Event;             // 0x5F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SplitEventAndArguments_Arguments;         // 0x608(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_2;     // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_3;     // 0x619(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_4;     // 0x61A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x61C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_5;     // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x624(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x634(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x638(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x640(0x18)(None)
	class FName                                  CallFunc_Get0thElement_Out_2;                      // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x660(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x670(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x680(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x690(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue_1;             // 0x6A0(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x6B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Get0thElement_Out_3;                      // 0x6BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_CheckForBool_NextRow;                     // 0x6C4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_6;     // 0x6CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_7;     // 0x6CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x6CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get0thElement_Out_4;                      // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_8;     // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get0thElement_Out_5;                      // 0x6DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_9;     // 0x6E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Get0thElement_Out_6;                      // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReadAnimation_TargetIsPlayer;             // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_ReadAnimation_DelayedInSeconds;           // 0x6F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReadAnimation_FullBodyAnimation;          // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ReadAnimation_AnimationName;              // 0x700(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ReadAnimation_TargetActorName;            // 0x710(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_10;    // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x724(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x729(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x72A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F83[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_6;  // 0x730(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_6; // 0x780(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x7CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReadDialogueOption_Enabled;               // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_ReadDialogueOption_Prompt;                // 0x7D8(0x18)(None)
	class FText                                  CallFunc_ReadDialogueOption_Thought;               // 0x7F0(0x18)(None)
	class FText                                  CallFunc_ReadDialogueOption_Disabled_text;         // 0x808(0x18)(None)
	bool                                         CallFunc_ReadDialogueOption_Don_t_Count_to_AvailableOptions; // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReadDialogueOption_Hide_if_disabled;      // 0x821(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FB0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ReadDialogueOption_TargetNode;            // 0x824(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x82C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueSingleOptionData      K2Node_MakeStruct_struct_DialogueSingleOptionData; // 0x830(0x68)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_200B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Index;                          // 0x8A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x8A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_11;    // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2017[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x8B4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x8C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2024[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_7;  // 0x8C8(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_7; // 0x918(0x48)(HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_5;                         // 0x960(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_5;                   // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2064[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       K2Node_MakeStruct_struct_DialogueActorReferences_2; // 0x988(0x20)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_6;              // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_12;    // 0x9B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2076[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_TargetRow_1;                    // 0x9B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_BlockPlayer;                    // 0x9BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrent_Enabled;                       // 0x9BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2089[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrent_Index;                         // 0x9C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x9C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2092[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x9CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x9D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_OptionIndex;                    // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_NewThoughts;                    // 0x9D8(0x18)(None)
	class FText                                  K2Node_CustomEvent_NewNotAvailableText;            // 0x9F0(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_6;                         // 0xA10(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_6;                   // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_7;              // 0xA38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0xA40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DialogueViewTarget_1;           // 0xA48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_4;        // 0xA50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_TargetRow;                      // 0xA64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_DialogueViewTarget;             // 0xA70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_TargetLocation_1;               // 0xA78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_TargetRotation_1;               // 0xA84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_CustomEvent_InterpolationTimeSeconds_1;     // 0xA90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Row;                            // 0xA94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_TargetLocation;                 // 0xA9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_TargetRotation;                 // 0xAA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_CustomEvent_InterpolationTimeSeconds;       // 0xAB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xAB8(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_5;        // 0xAD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_211B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0xAD8(0x10)(ReferenceParm)
	class UAnimSequence*                         Temp_object_Variable_2;                            // 0xAE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0xAF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFDialogueData                        CallFunc_GetDataTableRowFromName_OutRow;           // 0xAF8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_212A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xB4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReadAnimation_TargetIsPlayer_1;           // 0xB51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_ReadAnimation_DelayedInSeconds_1;         // 0xB54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReadAnimation_FullBodyAnimation_1;        // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2140[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ReadAnimation_AnimationName_1;            // 0xB60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ReadAnimation_TargetActorName_1;          // 0xB70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Contains_ReturnValue;                 // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_214B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_8;  // 0xB88(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_8; // 0xBD8(0x48)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Contains_ReturnValue_1;               // 0xC20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0xC21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xC22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0xC23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xC24(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xC34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_7;                         // 0xC38(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_7;                   // 0xC58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_8;              // 0xC60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0xC68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_9;  // 0xC70(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_9; // 0xCC0(0x48)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0xD08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_InStartingRow;                        // 0xD18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAxisValue;                          // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0xD24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0xD28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0xD29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xD30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGSquadManager*                       K2Node_CustomEvent_InstigatingSquad;               // 0xD38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0xD40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0xD48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xD50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2200[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0xD58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_13;    // 0xD60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xD61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2207[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xD64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xD68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_220E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGAICharacter*>                CallFunc_GetCurrentAggroList_ReturnValue;          // 0xD70(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0xD80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0xD84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0xD88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0xD8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_221C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ACGAICharacter*>                CallFunc_GetCurrentAggroList_ReturnValue_1;        // 0xD90(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0xDA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0xDA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xDA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2238[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xDA8(0x8)(NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0xDB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGMovementState>          CallFunc_GetCurrentMovementState_ReturnValue;      // 0xDB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0xDC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xDC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CallFunctionOnLevelActor_ReturnValue;     // 0xDC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xDC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2266[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0xDC8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xDE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0xDE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2270[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_8;                         // 0xDE8(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_8;                   // 0xE08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2278[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_9;                         // 0xE10(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_9;                   // 0xE30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_9;              // 0xE38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0xE40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CallFunctionOnActor_ReturnValue;          // 0xE41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_229D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_FindActorByName_ReturnValue;              // 0xE48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Contains_ReturnValue_2;               // 0xE50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CallFunctionOnActor_ReturnValue_1;        // 0xE51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22A4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_10; // 0xE58(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_10; // 0xEA8(0x48)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xEF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ResolveNodeID_IDAfterFlowControl;         // 0xEF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xEFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0xF08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xF10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xF14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_22D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0xF28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xF30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0xF38(0x18)(HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_10;                        // 0xF50(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_10;                  // 0xF70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_11; // 0xF78(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_11; // 0xFC8(0x48)(HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_10;             // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x1018(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_230A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x1020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x1028(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2316[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         K2Node_DynamicCast_AsCh_Hero_00;                   // 0x1030(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x1038(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2322[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Count_ReturnValue;                        // 0x103C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1040(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_6;        // 0x1044(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1045(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1046(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x1047(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_11;                        // 0x1048(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_11;                  // 0x1068(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x1069(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2355[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_11;             // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x1078(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x107C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_8;               // 0x1080(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1084(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x1088(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue; // 0x108C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_1; // 0x1090(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x1094(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x1098(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x109C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x10A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_240D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CallFunc_Array_Get_Item_4;                         // 0x10A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CallFunc_Array_Get_Item_5;                         // 0x10B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIState                          CallFunc_GetCurrentAIState_ReturnValue;            // 0x10B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_241F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x10BC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_242E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_12;                        // 0x10D0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_12;                  // 0x10F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Temp_object_Variable_3;                            // 0x10F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_12;             // 0x1100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x1108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2455[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_9;               // 0x110C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_10;              // 0x1110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x1114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x1118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_2; // 0x111C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_3; // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_2;       // 0x1124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_3;       // 0x1128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIState                          CallFunc_GetCurrentAIState_ReturnValue_1;          // 0x112C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2493[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_2;                           // 0x1130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_249D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CallFunc_Array_Get_Item_6;                         // 0x1138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_13;             // 0x1140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x1148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_5;                              // 0x1149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24B5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_3;                           // 0x114C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CallFunc_Array_Get_Item_7;                         // 0x1150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x1158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_13;                        // 0x1160(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_13;                  // 0x1180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitlesManager*                     CallFunc_GetSubtitlesManager_ReturnValue;          // 0x1188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_14;             // 0x1190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x1198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Next_Data_Row_DialogueDidntEnd_14;    // 0x1199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2512[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x11A0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       K2Node_MakeStruct_struct_DialogueActorReferences_3; // 0x11A8(0x20)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x11C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_14;                        // 0x11D0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_14;                  // 0x11F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2535[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       K2Node_Select_Default_4;                           // 0x11F8(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x1218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     K2Node_DynamicCast_AsCGGame_Instance;              // 0x1220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x1228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2555[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaySoundWithSubtitlesAsyncNode*      CallFunc_PlaySound2DWithSubtitlesFromAudio_ReturnValue; // 0x1230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x1238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_256E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleEntry*                        CallFunc_AddSubtitle_ReturnValue;                  // 0x1240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x1248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x1250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_258F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x1258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x1260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x1261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       K2Node_Select_Default_5;                           // 0x1268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlaySoundWithSubtitlesAsyncNode*      CallFunc_PlaySoundAttachedToComponentWithSubtitlesFromAudio_ReturnValue; // 0x1270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x1278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_7;                              // 0x1279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x127A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25C6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_12; // 0x1280(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_12; // 0x12D0(0x48)(HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_15;                        // 0x1318(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_15;                  // 0x1338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_15;             // 0x1340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0x1348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_8;                              // 0x1349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2602[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Temp_object_Variable_4;                            // 0x1350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Temp_object_Variable_5;                            // 0x1358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_2;               // 0x1360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_2;                     // 0x1361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_261D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Temp_object_Variable_6;                            // 0x1368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Temp_object_Variable_7;                            // 0x1370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x1378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSt_DialogueCounterSeenData>   CallFunc_Set_ToArray_Result;                       // 0x1380(0x10)(ReferenceParm)
	struct FSt_DialogueCounterSeenData           CallFunc_Array_Get_Item_8;                         // 0x1390(0x11)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_2634[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_11;              // 0x13A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x13AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_263A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0x13B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_16;                        // 0x13B8(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_16;                  // 0x13D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_264F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Temp_object_Variable_8;                            // 0x13E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x13E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAIState                          Temp_byte_Variable_2;                              // 0x13E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2662[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         K2Node_Select_Default_6;                           // 0x13F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         K2Node_Select_Default_7;                           // 0x1400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_17;                        // 0x1408(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_17;                  // 0x1428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2687[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_16;             // 0x1430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0x1438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x1439(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2698[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_12;              // 0x143C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x1440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_13;              // 0x1444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_4; // 0x1448(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_6;            // 0x144C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_4;       // 0x1450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRandomIntInRangeWithExclusion_ReturnValue_5; // 0x1454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_8;                           // 0x1458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_5;       // 0x145C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CallFunc_Array_Get_Item_9;                         // 0x1460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_9;                           // 0x1468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIState                          CallFunc_GetCurrentAIState_ReturnValue_2;          // 0x146C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         CallFunc_Array_Get_Item_10;                        // 0x1470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         K2Node_Select_Default_10;                          // 0x1478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0x1480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFDialogueData                        CallFunc_Get_Data_From_Data_Table_DialogueData_13; // 0x1488(0x50)(HasGetValueTypeHash)
	struct FFDialogueMetadata                    CallFunc_Get_Data_From_Data_Table_DialogueMetadata_13; // 0x14D8(0x48)(HasGetValueTypeHash)
	class UAnimSequence*                         Temp_object_Variable_9;                            // 0x1520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_3;               // 0x1528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_3;                     // 0x1529(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2707[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_DialogueActorReferences       CallFunc_Map_Find_Value_18;                        // 0x1530(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_18;                  // 0x1550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2719[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        K2Node_DynamicCast_AsCGAICharacter_17;             // 0x1558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_20;                    // 0x1560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_273A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Temp_object_Variable_10;                           // 0x1568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Temp_object_Variable_11;                           // 0x1570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Temp_object_Variable_12;                           // 0x1578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Temp_object_Variable_13;                           // 0x1580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         K2Node_Select_Default_11;                          // 0x1588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         K2Node_Select_Default_12;                          // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Dialogue.BP_Dialogue_C.ShownDialogueOptionsToPlayer__DelegateSignature
struct ABP_Dialogue_C_ShownDialogueOptionsToPlayer__DelegateSignature_Params
{
public:
	class FName                                  MultipleOptionsNodeID;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



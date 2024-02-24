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

// 0x51 (0x51 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.CreateAffectedTextEntry
struct UWid_DialogueTimelinePayload_C_CreateAffectedTextEntry_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EBasicResultType                  ReactionType;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          Container;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBold;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_DialogueTimelinePayload_AffectedEntry_C* Widget;                                            // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_DialogueTimelinePayload_AffectedEntry_C* CreatedWidget;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_DialogueTimelinePayload_AffectedEntry_C* CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateLabels
struct UWid_DialogueTimelinePayload_C_UpdateLabels_Params
{
public:
	class FText                                  CallFunc_FormatText_Output;                        // 0x0(0x18)(None)
	class FText                                  CallFunc_FormatText_Output_1;                      // 0x18(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddDashToString
struct UWid_DialogueTimelinePayload_C_AddDashToString_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Result;                                            // 0x18(0x18)(Parm, OutParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddCompanionLeft
struct UWid_DialogueTimelinePayload_C_AddCompanionLeft_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  NewText;                                           // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  CallFunc_ReplaceStringWithCompanionName_ReturnValue; // 0x20(0x18)(None)
	class FText                                  CallFunc_AddDashToString_Result;                   // 0x38(0x18)(None)
	class UWid_DialogueTimelinePayload_Entry_C*  CallFunc_CreateTextEntry_Widget;                   // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.ReplaceStringWithCompanionName
struct UWid_DialogueTimelinePayload_C_ReplaceStringWithCompanionName_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                ToReplace;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CompanionID;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CompanionName;                                     // 0x48(0x18)(Edit, BlueprintVisible)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue;        // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
	struct FActorInfo                            CallFunc_K2_GetActorInfo_Info;                     // 0xB0(0x48)(None)
	bool                                         CallFunc_K2_GetActorInfo_ReturnValue;              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.IsCompanionEmployed
struct UWid_DialogueTimelinePayload_C_IsCompanionEmployed_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x10(0x10)(NoDestructor, UObjectWrapper)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x28(0x10)(NoDestructor, UObjectWrapper)
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue_1;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue_1;      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1714[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue_2;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompanionEmployed_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddCompanionReaction
struct UWid_DialogueTimelinePayload_C_AddCompanionReaction_Params
{
public:
	struct FDialogueTimelinePayloadCompanionReaction CompnionInfo;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_17BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NewText;                                           // 0x10(0x18)(Edit, BlueprintVisible)
	enum class EDialogueTimelinePayloadCompanionReactionType Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBasicResultType                  Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompanionEmployed_Result;               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EBasicResultType                  Temp_byte_Variable_2;                              // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBasicResultType                  K2Node_Select_Default;                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDialogueTimelinePayloadCompanionReactionType Temp_byte_Variable_3;                              // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17DD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x30(0x18)(None)
	class FText                                  CallFunc_ReplaceStringWithCompanionName_ReturnValue; // 0x48(0x18)(None)
	class FText                                  CallFunc_AddDashToString_Result;                   // 0x60(0x18)(None)
	class UWid_DialogueTimelinePayload_Entry_C*  CallFunc_CreateTextEntry_Widget;                   // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateContainerVisibility
struct UWid_DialogueTimelinePayload_C_UpdateContainerVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue_1;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.GetQuestName
struct UWid_DialogueTimelinePayload_C_GetQuestName_Params
{
public:
	class FName                                  QuestID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1938[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestInfoInput                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x28(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_193E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue;        // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x188(0x58)(None)
};

// 0x51 (0x51 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.CreateTextEntry
struct UWid_DialogueTimelinePayload_C_CreateTextEntry_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EBasicResultType                  ReactionType;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1998[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          Container;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBold;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_199E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_DialogueTimelinePayload_Entry_C*  Widget;                                            // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_DialogueTimelinePayload_Entry_C*  CreatedWidget;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_DialogueTimelinePayload_Entry_C*  CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.AddAffectedText
struct UWid_DialogueTimelinePayload_C_AddAffectedText_Params
{
public:
	struct FDialogueTimelinePayloadAffectedQuestInfo AffectedInfo;                                      // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  NewText;                                           // 0x20(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetQuestName_Text;                        // 0x40(0x18)(None)
	bool                                         CallFunc_GetQuestName_Result;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x60(0x18)(None)
	class FText                                  CallFunc_FormatText_Output;                        // 0x78(0x18)(None)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_DialogueTimelinePayload_AffectedEntry_C* CallFunc_CreateAffectedTextEntry_Widget;           // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0xA0(0x18)(None)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue_1;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(None)
};

// 0x19 (0x19 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateCompanionLeft
struct UWid_DialogueTimelinePayload_C_UpdateCompanionLeft_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateCompanionReactions
struct UWid_DialogueTimelinePayload_C_UpdateCompanionReactions_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogueTimelinePayloadCompanionReaction CallFunc_Array_Get_Item;                           // 0xC(0xC)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateNAR
struct UWid_DialogueTimelinePayload_C_UpdateNAR_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x18(0x18)(None)
	class FText                                  CallFunc_AddDashToString_Result;                   // 0x30(0x18)(None)
	class FText                                  CallFunc_AddDashToString_Result_1;                 // 0x48(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateAffectedInfo
struct UWid_DialogueTimelinePayload_C_UpdateAffectedInfo_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogueTimelinePayloadAffectedQuestInfo CallFunc_Array_Get_Item;                           // 0x10(0x20)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.UpdateQuestName
struct UWid_DialogueTimelinePayload_C_UpdateQuestName_Params
{
public:
	class FText                                  CallFunc_GetQuestName_Text;                        // 0x0(0x18)(None)
	bool                                         CallFunc_GetQuestName_Result;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatText_Output;                        // 0x20(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.InitPayload
struct UWid_DialogueTimelinePayload_C_InitPayload_Params
{
public:
	struct FDialogueTimelinePayloadData          Payload;                                           // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.PreConstruct
struct UWid_DialogueTimelinePayload_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.PhotomodeChanged
struct UWid_DialogueTimelinePayload_C_PhotomodeChanged_Params
{
public:
	bool                                         bIsActivated;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA2 (0xA2 - 0x0)
// Function wid_DialogueTimelinePayload.wid_DialogueTimelinePayload_C.ExecuteUbergraph_wid_DialogueTimelinePayload
struct UWid_DialogueTimelinePayload_C_ExecuteUbergraph_wid_DialogueTimelinePayload_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueTimelinePayloadData          K2Node_Event_Payload;                              // 0x20(0x48)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGGameModeBase*                       CallFunc_GetCGGameModeBase_ReturnValue;            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsActivated;                   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



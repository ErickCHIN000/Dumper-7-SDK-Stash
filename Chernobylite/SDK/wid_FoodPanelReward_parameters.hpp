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

// 0x48 (0x48 - 0x0)
// Function wid_FoodPanelReward.wid_FoodPanelReward_C.Initialize
struct UWid_FoodPanelReward_C_Initialize_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     MissionReportRequiredInformation;                  // 0x8(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function wid_FoodPanelReward.wid_FoodPanelReward_C.PreConstruct
struct UWid_FoodPanelReward_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_FoodPanelReward.wid_FoodPanelReward_C.InitializeLost
struct UWid_FoodPanelReward_C_InitializeLost_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB18 (0xB18 - 0x0)
// Function wid_FoodPanelReward.wid_FoodPanelReward_C.ExecuteUbergraph_wid_FoodPanelReward
struct UWid_FoodPanelReward_C_ExecuteUbergraph_wid_FoodPanelReward_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_251C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_253A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionsPanel_Entry_element_C*  CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_254C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue;               // 0x48(0x150)(None)
	struct FCompanionDefinition                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x198(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_257E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x258(0x58)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x2B0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  K2Node_Select_Default;                             // 0x2DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLocalizedTextInfo                    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x2F0(0x20)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_4;    // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x320(0x18)(None)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue_1;             // 0x338(0x150)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x488(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_5;    // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue_1;        // 0x4A0(0x58)(None)
	struct FReportItems                          CallFunc_GetQuestResultItems_ReturnValue;          // 0x4F8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x510(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReportItemsInfo                      CallFunc_Array_Get_Item;                           // 0x520(0xC)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x52C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x538(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x558(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x580(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue_1;                     // 0x6E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_6;    // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReportsTextsDataTableRow             CallFunc_GetQuestResultText_ReturnValue;           // 0x6F0(0x38)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x728(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x738(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x748(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReportInfo                           K2Node_MakeStruct_ReportInfo;                      // 0x758(0x60)(None)
	class FString                                CallFunc_ParseReport_ReturnValue;                  // 0x7B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReportsTextsDataTableRow             CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x7C8(0x38)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Condition;                      // 0x801(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2629[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionReportRequiredInformation     K2Node_CustomEvent_MissionReportRequiredInformation; // 0x808(0x40)(ConstParm)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x84C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x84D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2635[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_Dictionary                        CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x850(0x20)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2652[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable_4;                              // 0x878(0x50)(None)
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x8C8(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_2654[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_265A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ReportMission_Reward_Entry_Item_C* CallFunc_Create_ReturnValue_2;                     // 0x9C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x9D0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x9E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x9FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2678[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NameID;                         // 0xA04(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_267F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionDefinition                  CallFunc_GetDataTableRowFromName_OutRow_5;         // 0xA10(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_5;    // 0xAC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_268C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0xAD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xAE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xAE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xAF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_269C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xAF8(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



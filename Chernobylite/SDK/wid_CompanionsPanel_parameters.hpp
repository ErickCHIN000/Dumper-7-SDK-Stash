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

// 0x298 (0x298 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.ShowAllInfo
struct UWid_CompanionsPanel_C_ShowAllInfo_Params
{
public:
	bool                                         SetVisible;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xA0(0x18)(None)
	int32                                        Temp_int_Variable;                                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable;                                // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable_1;                              // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable_2;                              // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable_3;                              // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable_4;                              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable_5;                              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuffType                         Temp_byte_Variable_6;                              // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A85[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCompanionData_Found;                   // 0x10B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionDefinition                  CallFunc_GetCompanionData_StartingData;            // 0x110(0xB8)(None)
	bool                                         CallFunc_GetCompanionData_Found_in_current_data;   // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A9D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_GetCompanionData_CurrentData;             // 0x1D0(0x60)(None)
	float                                        CallFunc_CompanionSystemGetLoyaltyExp_ReturnValue; // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x238(0x18)(None)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x258(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EBuffType                         K2Node_Select_Default_1;                           // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBuffType>                 K2Node_MakeArray_Array;                            // 0x288(0x10)(ReferenceParm)
};

// 0x39 (0x39 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.SelectItemReport
struct UWid_CompanionsPanel_C_SelectItemReport_Params
{
public:
	class UWid_CompanionsPanel_Entry_Report_C*   Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Idx;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_Report_C*   K2Node_DynamicCast_AsWid_Companions_Panel_Entry_Report; // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B5C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_Report_C*   K2Node_DynamicCast_AsWid_Companions_Panel_Entry_Report_1; // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.SelectItem
struct UWid_CompanionsPanel_C_SelectItem_Params
{
public:
	class UWid_CompanionsPanel_Entry_C*          Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Idx;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.GetCanBeCurrentSend
struct UWid_CompanionsPanel_C_GetCanBeCurrentSend_Params
{
public:
	bool                                         CanBeSend;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BFC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PreventingBuff;                                    // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBeSend_Result;                         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C14[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_CanBeSend_PreventingBuff;                 // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.GetCurrentCompanion
struct UWid_CompanionsPanel_C_GetCurrentCompanion_Params
{
public:
	int32                                        Offset;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Name;                                              // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSelection;                                  // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x20(0x10)(ReferenceParm)
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x30(0x60)(None)
};

// 0x39 (0x39 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.Select
struct UWid_CompanionsPanel_C_Select_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Idx;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D01[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.InitSelection
struct UWid_CompanionsPanel_C_InitSelection_Params
{
public:
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D79[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.ShowPanel
struct UWid_CompanionsPanel_C_ShowPanel_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DF3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E09[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionsPanel_Entry_C*          K2Node_DynamicCast_AsWid_Companions_Panel_Entry;   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E0D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionsPanel_Entry_C*          K2Node_DynamicCast_AsWid_Companions_Panel_Entry_1; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue_1;           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x209 (0x209 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.UpdateCompanions
struct UWid_CompanionsPanel_C_UpdateCompanions_Params
{
public:
	struct FCompanionEntry                       LocalElement;                                      // 0x0(0x60)(Edit, BlueprintVisible)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             CallFunc_Create_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F06[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCompanionDefinition                  CallFunc_GetDataTableRowFromName_OutRow;           // 0x98(0xB8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F16[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F2A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x190(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x1A8(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.PreConstruct
struct UWid_CompanionsPanel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.ExecuteUbergraph_wid_CompanionsPanel
struct UWid_CompanionsPanel_C_ExecuteUbergraph_wid_CompanionsPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1046[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_104E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue_1;           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_1;             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1083[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;   // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionsPanel.wid_CompanionsPanel_C.NewSelection__DelegateSignature
struct UWid_CompanionsPanel_C_NewSelection__DelegateSignature_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



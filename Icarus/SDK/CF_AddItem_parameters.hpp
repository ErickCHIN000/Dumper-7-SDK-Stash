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

// 0x55 (0x55 - 0x0)
// Function CF_AddItem.CF_AddItem_C.OnConstruction
struct UCF_AddItem_C_OnConstruction_Params
{
public:
	class UAddResourceComboRow_C*                CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemTemplateEnum                     CallFunc_IntToStruct_ReturnValue;                  // 0x10(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemTemplateRowHandle                CallFunc_StructToRowHandle_ReturnValue;            // 0x24(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2968[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function CF_AddItem.CF_AddItem_C.Handle Execute
struct UCF_AddItem_C_Handle_Execute_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CF_AddItem.CF_AddItem_C.Handle On Item Set
struct UCF_AddItem_C_Handle_On_Item_Set_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75B (0x75B - 0x0)
// Function CF_AddItem.CF_AddItem_C.ExecuteUbergraph_CF_AddItem
struct UCF_AddItem_C_ExecuteUbergraph_CF_AddItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_Widget;                               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAddResourceComboRow_C*                K2Node_DynamicCast_AsAdd_Resource_Combo_Row;       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               K2Node_DynamicCast_AsIcarus_Player_Controller;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemTemplateRowHandle                CallFunc_MakeItemTemplate_ReturnValue;             // 0x34(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x50(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A8B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x248(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_Widget_1;                             // 0x338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Amount;                               // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAddResourceComboRow_C*                K2Node_DynamicCast_AsAdd_Resource_Combo_Row_1;     // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemTemplateRowHandle                CallFunc_MakeItemTemplate_ReturnValue_1;           // 0x354(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate_1;     // 0x370(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths_1;            // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_CreateItem_ReturnValue;                   // 0x568(0x1F0)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths;               // 0x759(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x75A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



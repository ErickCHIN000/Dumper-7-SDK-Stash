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

// 0x38 (0x38 - 0x0)
// Function de_gooFuckNew.de_gooFuckNew_C.call_event
struct ADe_gooFuckNew_C_Call_event_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     Event_data;                                        // 0x8(0x2D)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1E00[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x231 (0x231 - 0x0)
// Function de_gooFuckNew.de_gooFuckNew_C.ExecuteUbergraph_de_gooFuckNew
struct ADe_gooFuckNew_C_ExecuteUbergraph_de_gooFuckNew_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_dlg_actor_C*                       K2Node_Event_dlg_actor;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_event_info                     K2Node_Event_event_data;                           // 0x20(0x2D)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1EC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASEQ_MasterHSceneMinusPlayerGooSlave_C* CallFunc_GetActorOfClass_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x58(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EDC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemData                           CallFunc_Get_Inventory_Item_by_Data_Item;          // 0x148(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Inventory_Item_by_Data_Found;         // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



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

// 0xC0 (0xC0 - 0x0)
// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.Update
struct UWid_Storage_V2_Buttons_C_Update_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Modify;                                            // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.PreConstruct
struct UWid_Storage_V2_Buttons_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.ExecuteUbergraph_wid_Storage_V2_Buttons
struct UWid_Storage_V2_Buttons_C_ExecuteUbergraph_wid_Storage_V2_Buttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_211F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



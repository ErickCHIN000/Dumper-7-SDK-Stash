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
// Function wid_FoodSystem_Buttons.wid_FoodSystem_Buttons_C.Update
struct UWid_FoodSystem_Buttons_C_Update_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Modify;                                            // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function wid_FoodSystem_Buttons.wid_FoodSystem_Buttons_C.ExecuteUbergraph_wid_FoodSystem_Buttons
struct UWid_FoodSystem_Buttons_C_ExecuteUbergraph_wid_FoodSystem_Buttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatText_Output;                        // 0x8(0x18)(None)
	class FText                                  CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0x20(0x18)(None)
};

}
}



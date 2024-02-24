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

// 0x84 (0x84 - 0x0)
// Function WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C.GetMaxItemCount
struct UWBP_PopupCheatGrantItem_C_GetMaxItemCount_Params
{
public:
	struct FItemDataReference                    ItemId;                                            // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        MaxItemCount;                                      // 0x80(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C.UpdateConfirmText
struct UWBP_PopupCheatGrantItem_C_UpdateConfirmText_Params
{
public:
	struct FItemDataReference                    ItemId;                                            // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C.ExecuteUbergraph_WBP_PopupCheatGrantItem
struct UWBP_PopupCheatGrantItem_C_ExecuteUbergraph_WBP_PopupCheatGrantItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F29[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    K2Node_Event_ItemID;                               // 0x10(0x80)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)(None)
};

}
}



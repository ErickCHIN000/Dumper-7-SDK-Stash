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

// 0x8 (0x8 - 0x0)
// Function WBP_PatchNotes.WBP_PatchNotes_C.GetDefaultFocusWidget
struct UWBP_PatchNotes_C_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_PatchNotes.WBP_PatchNotes_C.Get Patch Notes
struct UWBP_PatchNotes_C_Get_Patch_Notes_Params
{
public:
	struct FGetNewsResponse                      Response;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOnlineServiceStatus                  Status;                                            // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FNewsItem                             CallFunc_Array_Get_Item;                           // 0x28(0x28)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x58(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function WBP_PatchNotes.WBP_PatchNotes_C.MOTD_Original
struct UWBP_PatchNotes_C_MOTD_Original_Params
{
public:
	struct FGetMessageOfTheDayResponse           Response;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOnlineServiceStatus                  Status;                                            // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_PatchNotes.WBP_PatchNotes_C.ExecuteUbergraph_WBP_PatchNotes
struct UWBP_PatchNotes_C_ExecuteUbergraph_WBP_PatchNotes_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGetNewsRequest                       K2Node_MakeStruct_GetNewsRequest;                  // 0x14(0x4)(NoDestructor)
};

}
}



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

// 0x21 (0x21 - 0x0)
// Function UMG_LoadingProgress.UMG_LoadingProgress_C.LoadingStateChanged
struct UUMG_LoadingProgress_C_LoadingStateChanged_Params
{
public:
	bool                                         HideLoadingIcon;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StateText;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_LoadingProgress.UMG_LoadingProgress_C.PreConstruct
struct UUMG_LoadingProgress_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UMG_LoadingProgress.UMG_LoadingProgress_C.ExecuteUbergraph_UMG_LoadingProgress
struct UUMG_LoadingProgress_C_ExecuteUbergraph_UMG_LoadingProgress_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



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

// 0x20 (0x20 - 0x0)
// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ExecuteUbergraph_wid_ChatterDebugEntry
struct UWid_ChatterDebugEntry_C_ExecuteUbergraph_wid_ChatterDebugEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ChatterHovered__DelegateSignature
struct UWid_ChatterDebugEntry_C_ChatterHovered__DelegateSignature_Params
{
public:
	class FName                                  ChatterId;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ChatterSelected__DelegateSignature
struct UWid_ChatterDebugEntry_C_ChatterSelected__DelegateSignature_Params
{
public:
	class FName                                  ChatterId;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ChatterName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



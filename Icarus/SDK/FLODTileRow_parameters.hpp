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
// Function FLODTileRow.FLODTileRow_C.SetFLODTile
struct UFLODTileRow_C_SetFLODTile_Params
{
public:
	class AFLODTile*                             FLODTile;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function FLODTileRow.FLODTileRow_C.ExecuteUbergraph_FLODTileRow
struct UFLODTileRow_C_ExecuteUbergraph_FLODTileRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AFLODTile*                             K2Node_CustomEvent_FLODTile;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x10(0x18)(None)
};

}
}



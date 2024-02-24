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

// 0x9 (0x9 - 0x0)
// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.BPI_FoundTrinket
struct ABP_BlueOrbFragmentPuzzle_C_BPI_FoundTrinket_Params
{
public:
	class UStaticMeshComponent*                  Trinket;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLoadingFromPersistence;                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.ExecuteUbergraph_BP_BlueOrbFragmentPuzzle
struct ABP_BlueOrbFragmentPuzzle_C_ExecuteUbergraph_BP_BlueOrbFragmentPuzzle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  K2Node_Event_trinket;                              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bLoadingFromPersistence;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



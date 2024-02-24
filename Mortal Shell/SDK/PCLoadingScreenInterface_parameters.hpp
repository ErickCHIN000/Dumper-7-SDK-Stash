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

// 0x11 (0x11 - 0x0)
// Function PCLoadingScreenInterface.PCLoadingScreenInterface_C.PCLoadingScreen_GetItemsDiscovered
struct IPCLoadingScreenInterface_C_PCLoadingScreen_GetItemsDiscovered_Params
{
public:
	TArray<class FName>                          ItemsDiscovered;                                   // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         Empty;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x150 (0x150 - 0x0)
// Function PCLoadingScreenInterface.PCLoadingScreenInterface_C.PCLoadingScreen_GetLoadingScreenInfo
struct IPCLoadingScreenInterface_C_PCLoadingScreen_GetLoadingScreenInfo_Params
{
public:
	struct FInventoryItem                        InventoryItem;                                     // 0x0(0x132)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_100F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocalFamiliarity;                                  // 0x138(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1018[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemEffectDescription;                             // 0x140(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

}
}



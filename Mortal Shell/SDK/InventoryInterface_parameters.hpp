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

// 0x1 (0x1 - 0x0)
// Function InventoryInterface.InventoryInterface_C.ContainerLooted
struct IInventoryInterface_C_ContainerLooted_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function InventoryInterface.InventoryInterface_C.GetCanStoreItems
struct IInventoryInterface_C_GetCanStoreItems_Params
{
public:
	bool                                         CanStoreItems;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function InventoryInterface.InventoryInterface_C.GetPlayersViewing
struct IInventoryInterface_C_GetPlayersViewing_Params
{
public:
	TArray<class APlayerState*>                  PlayersViewing;                                    // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InventoryInterface.InventoryInterface_C.GetContainerInventory
struct IInventoryInterface_C_GetContainerInventory_Params
{
public:
	class UInventoryComponent_C*                 InventoryComponent;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function InventoryInterface.InventoryInterface_C.GetContainerProperties
struct IInventoryInterface_C_GetContainerProperties_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Parm, OutParm)
	uint8                                        SlotsPerRow;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStorageContainer;                                // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E5E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InventorySize;                                     // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



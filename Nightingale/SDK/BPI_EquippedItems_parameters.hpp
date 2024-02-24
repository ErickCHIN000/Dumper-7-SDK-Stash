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

// 0x10 (0x10 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.GetItemConst
struct IBPI_EquippedItems_C_GetItemConst_Params
{
public:
	struct FGameplayTag                          ContextTag;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Weapon;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.ConsumeItemProxy
struct IBPI_EquippedItems_C_ConsumeItemProxy_Params
{
public:
	class AActor*                                ItemProxyActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.PickUpItemProxy
struct IBPI_EquippedItems_C_PickUpItemProxy_Params
{
public:
	class AActor*                                ItemProxyActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.WithdrawItemFromContainerByTag
struct IBPI_EquippedItems_C_WithdrawItemFromContainerByTag_Params
{
public:
	TScriptInterface<class IItemContainer>       ItemContainer;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GameplayTag;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.UnequipEquippedItem
struct IBPI_EquippedItems_C_UnequipEquippedItem_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F1 (0x2F1 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.CreateAndEquipItemFromEntry
struct IBPI_EquippedItems_C_CreateAndEquipItemFromEntry_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bSuccess;                                          // 0x2F0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.CreateAndEquipItemFromItemID
struct IBPI_EquippedItems_C_CreateAndEquipItemFromItemID_Params
{
public:
	struct FItemDataReference                    ItemId;                                            // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.TransferItemToWorldItemContainerActor
struct IBPI_EquippedItems_C_TransferItemToWorldItemContainerActor_Params
{
public:
	class AActor*                                ToActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.TransferItemFromWorldItemContainerActor
struct IBPI_EquippedItems_C_TransferItemFromWorldItemContainerActor_Params
{
public:
	class AActor*                                FromActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_EquippedItems.BPI_EquippedItems_C.GetItem
struct IBPI_EquippedItems_C_GetItem_Params
{
public:
	struct FGameplayTag                          ContextTag;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Weapon;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}



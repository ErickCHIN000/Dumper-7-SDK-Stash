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

// 0x300 (0x300 - 0x0)
// Function LoadoutRuntime.LoadoutEquipInterface.EquipItemInSpecificLoadoutSlot
struct ILoadoutEquipInterface_EquipItemInSpecificLoadoutSlot_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Slot;                                              // 0x2F0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AItem*                                 ReturnValue;                                       // 0x2F8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LoadoutRuntime.LoadoutEquipInterface.EquipItemInLoadoutSlot
struct ILoadoutEquipInterface_EquipItemInLoadoutSlot_Params
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LoadoutRuntime.LoadoutEquipInterface.ClearEquippedItemFromLoadoutSlot
struct ILoadoutEquipInterface_ClearEquippedItemFromLoadoutSlot_Params
{
public:
	struct FGameplayTag                          Slot;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LoadoutRuntime.LoadoutObservableInterface.UnbindDelegate_OnEquippedItemChanged
struct ILoadoutObservableInterface_UnbindDelegate_OnEquippedItemChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LoadoutRuntime.LoadoutObservableInterface.BindDelegate_OnEquippedItemChanged
struct ILoadoutObservableInterface_BindDelegate_OnEquippedItemChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LoadoutRuntime.LoadoutReadInterface.GetOffhandEquippedItem
struct ILoadoutReadInterface_GetOffhandEquippedItem_Params
{
public:
	class AEquippableItem*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LoadoutRuntime.LoadoutReadInterface.GetItemInLoadoutSlot
struct ILoadoutReadInterface_GetItemInLoadoutSlot_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEquippableItem*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LoadoutRuntime.LoadoutReadInterface.GetEquippedItem
struct ILoadoutReadInterface_GetEquippedItem_Params
{
public:
	class AEquippableItem*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



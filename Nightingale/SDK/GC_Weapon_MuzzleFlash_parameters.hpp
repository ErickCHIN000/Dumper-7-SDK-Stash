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

// 0x149 (0x149 - 0x0)
// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.SpawnMuzzleFlash
struct UGC_Weapon_MuzzleFlash_C_SpawnMuzzleFlash_Params
{
public:
	class UObject*                               MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AttachToComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_RangedAbilityResponses             RangedAbilityResponse;                             // 0x10(0x138)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         FirstPerson;                                       // 0x148(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.IsFirstPerson
struct UGC_Weapon_MuzzleFlash_C_IsFirstPerson_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPerson;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_WeaponUser_C>    K2Node_DynamicCast_AsBPI_Weapon_User;              // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedRangedWeapon_EquippedItem;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EquippableItemBase_C*              K2Node_DynamicCast_AsBP_Equippable_Item_Base;      // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAttachParentChar_bSuccess;             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D[0x5];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AnimCharacter_C*                   CallFunc_GetAttachParentChar_Parent;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFirstPersonCharacter_ReturnValue;       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.GetMuzzleFlashParameters
struct UGC_Weapon_MuzzleFlash_C_GetMuzzleFlashParameters_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPerson;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldExecute;                                     // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       AttachToComponent;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_RangedAbilityResponses             RangedAbilityResponse;                             // 0x18(0x138)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x239 (0x239 - 0x0)
// Function GC_Weapon_MuzzleFlash.GC_Weapon_MuzzleFlash_C.OnExecute
struct UGC_Weapon_MuzzleFlash_C_OnExecute_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_RangedWeapon_Base_C*               Weapon;                                            // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFirstPerson_IsFirstPerson;              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMuzzleFlashParameters_ShouldExecute;   // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_GetMuzzleFlashParameters_AttachToComponent; // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_RangedAbilityResponses             CallFunc_GetMuzzleFlashParameters_RangedAbilityResponse; // 0x100(0x138)(HasGetValueTypeHash)
	bool                                         CallFunc_OnExecute_ReturnValue;                    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



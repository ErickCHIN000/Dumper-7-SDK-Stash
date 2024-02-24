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

// 0x4 (0x4 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_DeflectStackTarBonus
struct ICharacterUtilInterface_C_Zero_Base_DeflectStackTarBonus_Params
{
public:
	int32                                        TarBonus;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Character_Super2CostOneResolve?
struct ICharacterUtilInterface_C_Character_Super2CostOneResolve__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Character_Super1CostOneResolve?
struct ICharacterUtilInterface_C_Character_Super1CostOneResolve__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterUtils_AddRemove_Tar
struct ICharacterUtilInterface_C_CharacterUtils_AddRemove_Tar_Params
{
public:
	int32                                        TarAmount;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStormSpent;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_GetCurrentWeapon
struct ICharacterUtilInterface_C_Zero_Base_GetCurrentWeapon_Params
{
public:
	enum class EComboTypes                       CurrentWeapon;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0Base_HideSacredGlands
struct ICharacterUtilInterface_C_ZeroBase_HideSacredGlands_Params
{
public:
	bool                                         Hidden_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0Base_HideTarnishedSeal
struct ICharacterUtilInterface_C_ZeroBase_HideTarnishedSeal_Params
{
public:
	bool                                         Hidden_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterIsFrozen?
struct ICharacterUtilInterface_C_CharacterIsFrozen__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_GetFireGland
struct ICharacterUtilInterface_C_Barbarous_GetFireGland_Params
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_GetCathedralGland
struct ICharacterUtilInterface_C_Barbarous_GetCathedralGland_Params
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_GetCryptGland
struct ICharacterUtilInterface_C_Barbarous_GetCryptGland_Params
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_SetTarnishedSealVisibility
struct ICharacterUtilInterface_C_Zero_Base_SetTarnishedSealVisibility_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_GetMesh
struct ICharacterUtilInterface_C_Zero_Base_GetMesh_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_WeaponVisibility
struct ICharacterUtilInterface_C_Zero_Base_WeaponVisibility_Params
{
public:
	bool                                         Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_SetDisabled
struct ICharacterUtilInterface_C_Zero_Base_SetDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_GetCurrentArmor
struct ICharacterUtilInterface_C_Zero_Base_GetCurrentArmor_Params
{
public:
	enum class EArmorTypes                       CurrentArmorType;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_SetInvulnerable
struct ICharacterUtilInterface_C_Barbarous_SetInvulnerable_Params
{
public:
	bool                                         Invulnerable;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_ChangeShells
struct ICharacterUtilInterface_C_Barbarous_ChangeShells_Params
{
public:
	bool                                         Fast_Change;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Reinit_Pose;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DidChange;                                         // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterUtils_StartOpeningCredits
struct ICharacterUtilInterface_C_CharacterUtils_StartOpeningCredits_Params
{
public:
	class FText                                  DisplayText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}



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
// Function IBPChar_Player.IBPChar_Player_C.GetPlayerCharacterEventHub
struct IIBPChar_Player_C_GetPlayerCharacterEventHub_Params
{
public:
	class UBPEventHub_PlayerCharacter_C*         Res;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_PlayAbilitySoundOnPlayer
struct IIBPChar_Player_C_Audio_PlayAbilitySoundOnPlayer_Params
{
public:
	bool                                         IsLocalOnly;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEvent;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponVisibility3rd
struct IIBPChar_Player_C_SetActionSkillWeaponVisibility3rd_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponVisibility1st
struct IIBPChar_Player_C_SetActionSkillWeaponVisibility1st_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Knight_Smite_Exp
struct IIBPChar_Player_C_Audio_Player_Knight_Smite_Exp_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Ranger_AimedShot_Intensify
struct IIBPChar_Player_C_Audio_Player_Ranger_AimedShot_Intensify_Params
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SetAntiqueGreatbowAttribute
struct IIBPChar_Player_C_SetAntiqueGreatbowAttribute_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Melee_Killed
struct IIBPChar_Player_C_Audio_Player_Melee_Killed_Params
{
public:
	class UWwiseEvent*                           WwiseEvent;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Melee_Ringout
struct IIBPChar_Player_C_Audio_Player_Melee_Ringout_Params
{
public:
	class UWwiseEvent*                           RingoutAudio;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCritical;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           CriticalAudio;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Shared_Skill_Damage
struct IIBPChar_Player_C_Audio_Player_Shared_Skill_Damage_Params
{
public:
	struct FVector                               ActorLocation;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEvent;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.Audio_Player_Barbarian_Whirlwind_Stop
struct IIBPChar_Player_C_Audio_Player_Barbarian_Whirlwind_Stop_Params
{
public:
	bool                                         Interrupt;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SetPlayerWandVisibility
struct IIBPChar_Player_C_SetPlayerWandVisibility_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RightHandWand;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetPlayerClasses
struct IIBPChar_Player_C_GetPlayerClasses_Params
{
public:
	enum class EOakPlayerClass                   Primary;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOakPlayerClass                   Secondary;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetSecondaryPlayerClass
struct IIBPChar_Player_C_GetSecondaryPlayerClass_Params
{
public:
	enum class EOakPlayerClass                   Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetPrimaryPlayerClass
struct IIBPChar_Player_C_GetPrimaryPlayerClass_Params
{
public:
	enum class EOakPlayerClass                   Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SpawnPlayerParticleSystemAtLocationMulticast
struct IIBPChar_Player_C_SpawnPlayerParticleSystemAtLocationMulticast_Params
{
public:
	class UParticleSystem*                       EmitterTemplate;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EmitterTransform;                                  // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*              Res;                                               // 0x40(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetActionSkillWeapons
struct IIBPChar_Player_C_GetActionSkillWeapons_Params
{
public:
	class UGbxSkeletalMeshComponent*             Action_Skill_Weapon_1st;                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Action_Skill_Weapon_3rd;                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponVisibility
struct IIBPChar_Player_C_SetActionSkillWeaponVisibility_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.SetActionSkillWeaponMesh
struct IIBPChar_Player_C_SetActionSkillWeaponMesh_Params
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetGameInstance
struct IIBPChar_Player_C_GetGameInstance_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetTotalCompanionsAndSummonedUnits
struct IIBPChar_Player_C_GetTotalCompanionsAndSummonedUnits_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetTotalSummonedUnits
struct IIBPChar_Player_C_GetTotalSummonedUnits_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetTotalCompanions
struct IIBPChar_Player_C_GetTotalCompanions_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.GetClassFeat
struct IIBPChar_Player_C_GetClassFeat_Params
{
public:
	enum class EOakPlayerClass                   Class;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_252D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbility*                           Res;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function IBPChar_Player.IBPChar_Player_C.HasPlayerClass
struct IIBPChar_Player_C_HasPlayerClass_Params
{
public:
	enum class EOakPlayerClass                   Class;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



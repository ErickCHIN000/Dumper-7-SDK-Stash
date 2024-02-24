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
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Shaman_02_Spawned__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_Shaman_02_Spawned__DelegateSignature_Params
{
public:
	class AActor*                                Totem;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Rogue_OnExitedStealth__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_Rogue_OnExitedStealth__DelegateSignature_Params
{
public:
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Rogue_OnEnteredStealth__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_Rogue_OnEnteredStealth__DelegateSignature_Params
{
public:
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_GearEvent_BodyArmor_HeadOfTheSnake_DurationExtend__DelegateSignature_Params
{
public:
	float                                        DurationExtensionPercent;                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_GunMage_PolymorphCastSpell__DelegateSignature_Params
{
public:
	bool                                         FirstCast;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CastFromGunMage;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphEnded__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_GunMage_PolymorphEnded__DelegateSignature_Params
{
public:
	class AActor*                                PolymorphedTarget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KilledTarget;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_167A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PolymorphDrone;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_GunMage_PolymorphedTarget__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_GunMage_PolymorphedTarget__DelegateSignature_Params
{
public:
	class AActor*                                PolymorphedActor;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasImmune;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1698[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PolymorphDrone;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.OnSummonedUnitDeath__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_OnSummonedUnitDeath__DelegateSignature_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_Ranger_MushroomCompanion_RevivedPlayer__DelegateSignature_Params
{
public:
	class AActor*                                Revived_By;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.ClassEvent_Necromancer_LichCausedDeath__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_ClassEvent_Necromancer_LichCausedDeath__DelegateSignature_Params
{
public:
	class UDamageComponent*                      Damaged;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   Details;                                           // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x9 (0x9 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_OnActionSkillCoolingDown__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_SkillEvent_OnActionSkillCoolingDown__DelegateSignature_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_OnActionSkillReadied__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_SkillEvent_OnActionSkillReadied__DelegateSignature_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPEventHub_PlayerCharacter.BPEventHub_PlayerCharacter_C.SkillEvent_OnActionSkillActivated__DelegateSignature
struct UBPEventHub_PlayerCharacter_C_SkillEvent_OnActionSkillActivated__DelegateSignature_Params
{
public:
	class UOakActionAbility*                     ActionAbility;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionSkills                 ActionSkill;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



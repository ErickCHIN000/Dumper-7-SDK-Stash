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
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawStartDragonBreathAttack
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClawStartDragonBreathAttack_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.HammerOfTheDragonGodsSetRecallFXState
struct IIFeat_KnightOfTheClaw_C_HammerOfTheDragonGodsSetRecallFXState_Params
{
public:
	bool                                         State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClassPassive7_StartRegen
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClassPassive7_StartRegen_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.DragonAuraRefresh
struct IIFeat_KnightOfTheClaw_C_DragonAuraRefresh_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.DragonAuraRegisterThornyAura
struct IIFeat_KnightOfTheClaw_C_DragonAuraRegisterThornyAura_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.TryToRemoveDragonAuraEffect
struct IIFeat_KnightOfTheClaw_C_TryToRemoveDragonAuraEffect_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.UnregisterDragonAuraStatusEffect
struct IIFeat_KnightOfTheClaw_C_UnregisterDragonAuraStatusEffect_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.RegisterDragonAuraStatusEffect
struct IIFeat_KnightOfTheClaw_C_RegisterDragonAuraStatusEffect_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxAttributeData*                     Attribute;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grade;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration_Optional_;                                // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeModifierHandle           AttributeHandle;                                   // 0x18(0x10)(Parm, OutParm)
	bool                                         Res;                                               // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.UnregisterDragonAuraCDM
struct IIFeat_KnightOfTheClaw_C_UnregisterDragonAuraCDM_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CDM;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDamageCauser;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.RegisterDragonAuraCDM
struct IIFeat_KnightOfTheClaw_C_RegisterDragonAuraCDM_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CDM;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxAttributeData*                     PassiveAttribute;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grade;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDamageCauser;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C79[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           AttributeHandle;                                   // 0x20(0x10)(Parm, OutParm)
	bool                                         Res;                                               // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.RemoveDragonAura
struct IIFeat_KnightOfTheClaw_C_RemoveDragonAura_Params
{
public:
	class AIO_KotC_DragonAura_C*                 DragonAura;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawSpawnDragonBreathEmitter
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClawSpawnDragonBreathEmitter_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_GetSpentStacks
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_GetSpentStacks_Params
{
public:
	int32                                        Stacks;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_ResetStacks
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_ResetStacks_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_Getstacks
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_Getstacks_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.KnightOfTheClawPassive9_AddStack
struct IIFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_AddStack_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.StopDragonRoarEffect
struct IIFeat_KnightOfTheClaw_C_StopDragonRoarEffect_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.StartDragonRoarEffect
struct IIFeat_KnightOfTheClaw_C_StartDragonRoarEffect_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.DespawnDragonPet
struct IIFeat_KnightOfTheClaw_C_DespawnDragonPet_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.GetDragonPet
struct IIFeat_KnightOfTheClaw_C_GetDragonPet_Params
{
public:
	class AActor*                                Ref;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IFeat_KnightOfTheClaw.IFeat_KnightOfTheClaw_C.SpawnDragonPet
struct IIFeat_KnightOfTheClaw_C_SpawnDragonPet_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



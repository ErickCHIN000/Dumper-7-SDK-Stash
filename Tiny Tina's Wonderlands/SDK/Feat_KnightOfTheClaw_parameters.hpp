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

// 0x22 (0x22 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClawStartDragonBreathAttack
struct UFeat_KnightOfTheClaw_C_KnightOfTheClawStartDragonBreathAttack_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UGbxAction*                            CallFunc_K2Play_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayingClass_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.HammerOfTheDragonGodsSetRecallFXState
struct UFeat_KnightOfTheClaw_C_HammerOfTheDragonGodsSetRecallFXState_Params
{
public:
	bool                                         State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClassPassive7_StartRegen
struct UFeat_KnightOfTheClaw_C_KnightOfTheClassPassive7_StartRegen_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOakAbilityTimerSpec                  K2Node_MakeStruct_OakAbilityTimerSpec;             // 0x8(0x18)(NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.DragonAuraRefresh
struct UFeat_KnightOfTheClaw_C_DragonAuraRefresh_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.TryToRemoveDragonAuraEffect
struct UFeat_KnightOfTheClaw_C_TryToRemoveDragonAuraEffect_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IInterface_KotC_DragonAura_C> K2Node_DynamicCast_AsInterface_Kot_C_Dragon_Aura;  // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ExternalRemoveDragonAuraTarget_Res;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.RegisterDragonAuraCDM
struct UFeat_KnightOfTheClaw_C_RegisterDragonAuraCDM_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CDM;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxAttributeData*                     PassiveAttribute;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grade;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDamageCauser;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           AttributeHandle;                                   // 0x20(0x10)(Parm, OutParm)
	bool                                         Res;                                               // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           CallFunc_AddModifierToGbxAttribute_ReturnValue;    // 0x40(0x10)(None)
	class UOakDamageCauserComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakDamageComponent*                   CallFunc_GetComponentByClass_ReturnValue1;         // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageBaseComponent*                  K2Node_Select_Default;                             // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x70(0x28)(NoDestructor, ContainsInstancedReference)
};

// 0x58 (0x58 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.UnregisterDragonAuraCDM
struct UFeat_KnightOfTheClaw_C_UnregisterDragonAuraCDM_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CDM;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDamageCauser;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EDA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakDamageCauserComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakDamageComponent*                   CallFunc_GetComponentByClass_ReturnValue1;         // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageBaseComponent*                  K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x30(0x28)(NoDestructor, ContainsInstancedReference)
};

// 0xB0 (0xB0 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.RegisterDragonAuraStatusEffect
struct UFeat_KnightOfTheClaw_C_RegisterDragonAuraStatusEffect_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxAttributeData*                     Attribute;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Grade;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration_Optional_;                                // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeModifierHandle           AttributeHandle;                                   // 0x18(0x10)(Parm, OutParm)
	bool                                         Res;                                               // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           LocalHandle;                                       // 0x30(0x10)(Edit, BlueprintVisible)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult; // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           CallFunc_AddModifierToGbxAttribute_ReturnValue;    // 0x48(0x10)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x60(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0x98(0x18)(NoDestructor, ContainsInstancedReference)
};

// 0x21 (0x21 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.UnregisterDragonAuraStatusEffect
struct UFeat_KnightOfTheClaw_C_UnregisterDragonAuraStatusEffect_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasDragonAuraPerks_Res;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F4D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x10(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClawSpawnDragonBreathEmitter
struct UFeat_KnightOfTheClaw_C_KnightOfTheClawSpawnDragonBreathEmitter_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Res;                                               // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClawPassive9_GetSpentStacks
struct UFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_GetSpentStacks_Params
{
public:
	int32                                        Stacks;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClawPassive9_AddStack
struct UFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_AddStack_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClawPassive9_Getstacks
struct UFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_Getstacks_Params
{
public:
	int32                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.KnightOfTheClawPassive9_ResetStacks
struct UFeat_KnightOfTheClaw_C_KnightOfTheClawPassive9_ResetStacks_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC1 (0xC1 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.StartDragonRoarEffect
struct UFeat_KnightOfTheClaw_C_StartDragonRoarEffect_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_FindAllPlayerCharacters_Res;              // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x20(0x38)(NoDestructor)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  K2Node_DynamicCast_AsOak_Character_Player;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x78(0x28)(NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_BreakGbxAttributeFloat_Value;             // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGbxAttributeFloat_BaseValue;         // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0xA8(0x18)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8D (0x8D - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.StopDragonRoarEffect
struct UFeat_KnightOfTheClaw_C_StopDragonRoarEffect_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2036[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_FindAllPlayerCharacters_Res;              // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x20(0x10)(NoDestructor)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_203E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  K2Node_DynamicCast_AsOak_Character_Player;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2043[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier; // 0x50(0x28)(NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_BreakGbxAttributeFloat_Value;             // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGbxAttributeFloat_BaseValue;         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_204B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakGbxAttributeFloat_Value1;            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGbxAttributeFloat_BaseValue1;        // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.DespawnDragonPet
struct UFeat_KnightOfTheClaw_C_DespawnDragonPet_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2068[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetDragonPet_Ref;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIDrone_PlayerCompanionParent_C> K2Node_DynamicCast_AsIDrone_Player_Companion_Parent; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CompanionDespawn_Res;                     // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.SpawnDragonPet
struct UFeat_KnightOfTheClaw_C_SpawnDragonPet_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2087[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPetOwnerComponent*                    CallFunc_GetPetOwnerComponent_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetDragonPet_Ref;                         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.GetDragonPet
struct UFeat_KnightOfTheClaw_C_GetDragonPet_Params
{
public:
	class AActor*                                Ref;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.Passive7_StartRegen
struct UFeat_KnightOfTheClaw_C_Passive7_StartRegen_Params
{
public:
	struct FOakAbilityTimerSpec                  AbilityTimer;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         Res;                                               // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec;                // 0x30(0x38)(NoDestructor)
	struct FStatusEffectSpec                     K2Node_MakeStruct_StatusEffectSpec1;               // 0x68(0x38)(NoDestructor)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue;              // 0xA0(0x18)(NoDestructor, ContainsInstancedReference)
	struct FStatusEffectInstanceReference        CallFunc_AddStatusEffect_ReturnValue1;             // 0xB8(0x18)(NoDestructor, ContainsInstancedReference)
};

// 0x51 (0x51 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.Passive7_StopRegen
struct UFeat_KnightOfTheClaw_C_Passive7_StopRegen_Params
{
public:
	struct FOakAbilityTimerSpec                  AbilityTimer;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class EOakAbilityTimerResult            EndResult;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2125[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2130[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec1;         // 0x40(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue1;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.HasDragonAuraPerks
struct UFeat_KnightOfTheClaw_C_HasDragonAuraPerks_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_215A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueOfAttribute_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE0 (0xE0 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.GetDragonSpawnLocation
struct UFeat_KnightOfTheClaw_C_GetDragonSpawnLocation_Params
{
public:
	struct FTransform                            Res;                                               // 0x0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2194[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x40(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_RunEnvQueryForBestLocation_ResultLocation; // 0x70(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunEnvQueryForBestLocation_ReturnValue;   // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2197[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x80(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x8C(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_219E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xB0(0x30)(IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.GetDragonSpawnTime
struct UFeat_KnightOfTheClaw_C_GetDragonSpawnTime_Params
{
public:
	float                                        Res;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue;  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValueFromHandle_ReturnValue1; // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.OakPassiveOnCausedDeath
struct UFeat_KnightOfTheClaw_C_OakPassiveOnCausedDeath_Params
{
public:
	class UDamageComponent*                      Damaged;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   Details;                                           // 0x8(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x88 (0x88 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.OakPassiveOnCausedAnyDamage
struct UFeat_KnightOfTheClaw_C_OakPassiveOnCausedAnyDamage_Params
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         DamageSource;                                      // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  Details;                                           // 0x28(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.RemoveDragonAura
struct UFeat_KnightOfTheClaw_C_RemoveDragonAura_Params
{
public:
	class AIO_KotC_DragonAura_C*                 DragonAura;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.OnDragonPetSpawned
struct UFeat_KnightOfTheClaw_C_OnDragonPetSpawned_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPetInfo                              PetData;                                           // 0x8(0x158)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x9 (0x9 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.OnDragonPetReleased
struct UFeat_KnightOfTheClaw_C_OnDragonPetReleased_Params
{
public:
	class AActor*                                Pet;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPetReleaseReason                 Reason;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.DragonAuraRegisterThornyAura
struct UFeat_KnightOfTheClaw_C_DragonAuraRegisterThornyAura_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2285[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.DragonAura_ThornyAuraOnTakeDamage
struct UFeat_KnightOfTheClaw_C_DragonAura_ThornyAuraOnTakeDamage_Params
{
public:
	class UDamageComponent*                      DamageReceiver;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         DamageSource;                                      // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageCauserComponent*                DamageCauser;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReceivedDamageDetails                Details;                                           // 0x30(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.OnAbilityTimerStarted
struct UFeat_KnightOfTheClaw_C_OnAbilityTimerStarted_Params
{
public:
	struct FOakAbilityTimerSpec                  Spec;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.OnAbilityTimerEnded
struct UFeat_KnightOfTheClaw_C_OnAbilityTimerEnded_Params
{
public:
	struct FOakAbilityTimerSpec                  Spec;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FOakAbilityTimerResult                Result;                                            // 0x18(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x728 (0x728 - 0x0)
// Function Feat_KnightOfTheClaw.Feat_KnightOfTheClaw_C.ExecuteUbergraph_Feat_KnightOfTheClaw
struct UFeat_KnightOfTheClaw_C_ExecuteUbergraph_Feat_KnightOfTheClaw_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPetOwnerComponent*                    CallFunc_GetPetOwnerComponent_ReturnValue;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPetReleaseReason                 Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable4;                               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23F1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IIBPChar_Player_C>    K2Node_DynamicCast_AsIBPChar_Player;               // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasPlayerClass_Res;                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageComponent*                      K2Node_Event_Damaged;                              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDeathDetails                   K2Node_Event_Details1;                             // 0x38(0x68)(None)
	class AActor*                                K2Node_Event_DamageInstigator;                     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        K2Node_Event_DamageType;                           // 0xB0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         K2Node_Event_DamageSource;                         // 0xB8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  K2Node_Event_Details;                              // 0xC8(0x60)(ContainsInstancedReference)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2407[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue1;              // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue1;              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIO_KotC_DragonAura_C*                 K2Node_Event_DragonAura;                           // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x150(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2411[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIO_KotC_DragonAura_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_SpawnedActor;                   // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPetInfo                              K2Node_CustomEvent_PetData;                        // 0x1A0(0x158)(ConstParm, ContainsInstancedReference)
	class AActor*                                K2Node_CustomEvent_Pet;                            // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPetReleaseReason                 K2Node_CustomEvent_Reason;                         // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_241B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADrone_KnightOfTheClaw_DragonPet_C*    K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet; // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2423[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADrone_KnightOfTheClaw_DragonPet_C*    K2Node_DynamicCast_AsDrone_Knight_Of_the_Claw_Dragon_Pet1; // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2425[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x328(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x338(0x10)(ZeroConstructor, NoDestructor)
	struct FGbxAbilityResourceSpec_ScriptDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate; // 0x348(0x28)(NoDestructor)
	struct FGbxAbilityResourceSpec_ScriptDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1; // 0x370(0x28)(NoDestructor)
	class UPetOwnerComponent*                    CallFunc_GetPetOwnerComponent_ReturnValue1;        // 0x398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Enable;                               // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Target;                               // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageComponent*                      K2Node_CustomEvent_DamageReceiver;                 // 0x3B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2436[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        K2Node_CustomEvent_DamageType;                     // 0x3C0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageSource*                         K2Node_CustomEvent_DamageSource;                   // 0x3C8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_CustomEvent_InstigatedBy;                   // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageCauserComponent*                K2Node_CustomEvent_DamageCauser;                   // 0x3D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReceivedDamageDetails                K2Node_CustomEvent_Details;                        // 0x3E0(0x58)(ContainsInstancedReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2443[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOakAbilityTimerSpec                  K2Node_Event_Spec1;                                // 0x440(0x18)(ConstParm, NoDestructor)
	struct FOakAbilityTimerSpec                  K2Node_Event_Spec;                                 // 0x458(0x18)(ConstParm, NoDestructor)
	struct FOakAbilityTimerResult                K2Node_Event_Result;                               // 0x470(0xC)(ConstParm, NoDestructor)
	bool                                         CallFunc_Passive7_StartRegen_Res;                  // 0x47C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Passive7_StopRegen_Res;                   // 0x47D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x47E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x47F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2453[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        CallFunc_NewDialogContext_ReturnValue;             // 0x488(0x218)(None)
	class AIO_KotC_DragonAura_C*                 K2Node_Select1_Default;                            // 0x6A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   CallFunc_FinishTriggerDialog_Conversation;         // 0x6A8(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishTriggerDialog_SequenceID;           // 0x6B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishTriggerDialog_ReturnValue;          // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2462[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SpawnDragonPet_Res;                       // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DespawnDragonPet_Res;                     // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2467[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPetOwnerComponent*                    CallFunc_GetPetOwnerComponent_ReturnValue2;        // 0x6D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceSpec_ScriptDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2; // 0x6D8(0x28)(NoDestructor)
	struct FGbxAbilityResourceSpec_ScriptDelegate K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3; // 0x700(0x28)(NoDestructor)
};

}
}



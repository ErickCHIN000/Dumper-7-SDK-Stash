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

// 0x323 (0x323 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Hail_Modify
struct UMMC_Damage_Structure_C_Hail_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_EncounterOriginatorTag_EncounterOriginatorTag; // 0x2C8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_GetEffectContext_ReturnValue;             // 0x2D0(0x18)(None)
	class AActor*                                CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsObjectHailDamageSource_ReturnValue;     // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_CreatureOriginatorTag_CreatureOriginatorTag; // 0x2F4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue;      // 0x300(0x20)(None)
	bool                                         CallFunc_ContainerContainsState_ReturnValue;       // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContainerContainsState_ReturnValue_1;     // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x322(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x302 (0x302 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Repair_Modify
struct UMMC_Damage_Structure_C_Repair_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x2C8(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue;      // 0x2E0(0x20)(None)
	bool                                         CallFunc_ContainerContainsState_ReturnValue;       // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x321 (0x321 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Creature_Modify
struct UMMC_Damage_Structure_C_Creature_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_HailDamageTag_HailDamageTag;              // 0x2C8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue;      // 0x2D0(0x20)(None)
	struct FGameplayTag                          CallFunc_CreatureOriginatorTag_CreatureOriginatorTag; // 0x2F0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContainerContainsState_ReturnValue;       // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue_1;    // 0x300(0x20)(None)
	bool                                         CallFunc_ContainerContainsState_ReturnValue_1;     // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x321 (0x321 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Encounter_Modify
struct UMMC_Damage_Structure_C_Encounter_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_HailDamageTag_HailDamageTag;              // 0x2C8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue;      // 0x2D0(0x20)(None)
	struct FGameplayTag                          CallFunc_EncounterOriginatorTag_EncounterOriginatorTag; // 0x2F0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContainerContainsState_ReturnValue;       // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue_1;    // 0x300(0x20)(None)
	bool                                         CallFunc_ContainerContainsState_ReturnValue_1;     // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x348 (0x348 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.NWXCalculateBaseMagnitude
struct UMMC_Damage_Structure_C_NWXCalculateBaseMagnitude_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FTagValueContainer                    MMCIntermediateOutputs;                            // 0x2B8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        ReturnValue;                                       // 0x2C8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Damage;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NWXCalculateBaseMagnitude_ReturnValue;    // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          CallFunc_GetEffectContext_ReturnValue;             // 0x2E0(0x18)(None)
	class AActor*                                CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsObjectHailDamageSource_ReturnValue;     // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Piece_Modify_OutDamage;                   // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Repair_Modify_OutDamage;                  // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Sledgehammer_Modify_OutDamage;            // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Piece_Modify_OutDamage_1;                 // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Schematic_Modify_OutDamage;               // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Hail_Modify_OutDamage;                    // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast_1;  // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Schematic_Modify_InDamage_ImplicitCast;   // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30A (0x30A - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Sledgehammer_Modify
struct UMMC_Damage_Structure_C_Sledgehammer_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SledgehammerMultiplier;                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_SledgehammerTag_SledgehammerTag;          // 0x2D0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetSourceAggregatedTags_ReturnValue;      // 0x2D8(0x20)(None)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x300 (0x300 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Piece_Modify
struct UMMC_Damage_Structure_C_Piece_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_PieceHealthTag_PieceHealthTag;            // 0x2C8(0x8)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetSetByCallerMagnitudeInSpec_ReturnValue; // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7792[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77A2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetSetByCallerMagnitudeInSpec_DefaultIfNotFound_ImplicitCast; // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F9 (0x2F9 - 0x0)
// Function MMC_Damage_Structure.MMC_Damage_Structure_C.Schematic_Modify
struct UMMC_Damage_Structure_C_Schematic_Modify_Params
{
public:
	struct FGameplayEffectSpec                   Spec;                                              // 0x0(0x2B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       InDamage;                                          // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OutDamage;                                         // 0x2C0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_SchematicTag_SchematicTag;                // 0x2CC(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7865[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetTargetAggregatedTags_ReturnValue;      // 0x2D8(0x20)(None)
	bool                                         CallFunc_ContainerContainsState_ReturnValue;       // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



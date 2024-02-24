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

// 0x54 (0x54 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetDamageDistanceModifier
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_GetDamageDistanceModifier_Params
{
public:
	struct FVector                               InWeaponLocation;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InTraceEnd;                                        // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InHitLocation;                                     // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutDMGModifier;                                    // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue_1;                      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCombinedAttachment_Range_OutCombinedRange; // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Sway
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Sway_Params
{
public:
	float                                        OutCombinedSway;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Recoil
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Recoil_Params
{
public:
	int32                                        OutCombinedRecoil;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Range
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Range_Params
{
public:
	float                                        OutCombinedRange;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetCombinedAttachment_Damage
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_GetCombinedAttachment_Damage_Params
{
public:
	float                                        OutCombinedDamage;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.UnhideNonHidden
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_UnhideNonHidden_Params
{
public:
	TMap<class USceneComponent*, bool>           InPreChanges;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TArray<class USceneComponent*>               Key;                                               // 0x50(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<bool>                                 Val;                                               // 0x60(0x10)(Edit, BlueprintVisible)
	TArray<bool>                                 CallFunc_Map_Values_Values;                        // 0x70(0x10)(ReferenceParm)
	TArray<class USceneComponent*>               CallFunc_Map_Keys_Keys;                            // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Get_Item;                           // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2068[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2075[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item_1;                         // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2085[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x111 (0x111 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ApplyRagdollPush
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_ApplyRagdollPush_Params
{
public:
	struct FCGMultitraceResult                   InLastMultitrace;                                  // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	float                                        InPushScale;                                       // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2107[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xAC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xC4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x104(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.GetDamageModifierByRange
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_GetDamageModifierByRange_Params
{
public:
	struct FVector                               InTraceStart;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InTraceEnd;                                        // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InImpactPoint;                                     // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutDamageModifier;                                 // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCombinedAttachment_Range_OutCombinedRange; // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue_1;                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9D (0x9D - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ApplyAIRagdollPush
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_ApplyAIRagdollPush_Params
{
public:
	class ACGAICharacter*                        InLastAIHit;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCGMultitraceResult                   InLastMultitrace;                                  // 0x8(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	float                                        InPushScale;                                       // 0x98(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.OnHideShowAdditional
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_OnHideShowAdditional_Params
{
public:
	enum class EState                            OutTargetState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.SwitchToScopeView
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_SwitchToScopeView_Params
{
public:
	float                                        InFadeScale;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThermalVision;                                   // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC9 (0xC9 - 0x0)
// Function ba_aa_Intermediary_ActiveItem_Weapon.ba_aa_Intermediary_ActiveItem_Weapon_C.ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon
struct Aba_aa_Intermediary_ActiveItem_Weapon_C_ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Weapon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2313[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EState                            K2Node_Event_OutTargetState;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2321[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_InFadeScale;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InThermalVision;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2329[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>  CallFunc_RemoveBlendable_InBlendableObject_CastInput; // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>  CallFunc_RemoveBlendable_InBlendableObject_CastInput_1; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_233E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2345[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x90(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2358[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2; // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0xC0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



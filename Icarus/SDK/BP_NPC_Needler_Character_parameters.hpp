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

// 0x18 (0x18 - 0x0)
// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.TryCosmeticResetNeedles
struct ABP_NPC_Needler_Character_C_TryCosmeticResetNeedles_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.GetNextAttackMontageSection
struct ABP_NPC_Needler_Character_C_GetNextAttackMontageSection_Params
{
public:
	class AActor*                                AttackTarget;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetNextAttackMontageSection_ReturnValue;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSwimming_ReturnValue;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x20(0x10)(ConstParm, ReferenceParm)
	class FName                                  CallFunc_Array_Random_OutItem;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1AB (0x1AB - 0x0)
// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.GetMontageForAction
struct ABP_NPC_Needler_Character_C_GetMontageForAction_Params
{
public:
	TSoftClassPtr<class UIcarusGOAPAction>       Action;                                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>           ActionMontage;                                     // 0x28(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	class FName                                  MontageSection;                                    // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MontageNotify;                                     // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UIcarusGOAPAction>       RoarAction;                                        // 0x68(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftClassPtr<class UIcarusGOAPAction>       IdleAction;                                        // 0x90(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftClassPtr<class UIcarusGOAPAction>       AttackAction;                                      // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_SoftClassReference_ReturnValue; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSwimming_ReturnValue;                   // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38EE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionAnimData                       CallFunc_Map_Find_Value;                           // 0xE8(0x80)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_SoftClassReference_ReturnValue_1; // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           CallFunc_GetMontageForAction_ActionMontage;        // 0x170(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FName                                  CallFunc_GetMontageForAction_MontageSection;       // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetMontageForAction_MontageNotify;        // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMontageForAction_ReturnValue;          // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSwimming_ReturnValue_1;                 // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_NPC_Needler_Character.BP_NPC_Needler_Character_C.GetDamageSourceLocation
struct ABP_NPC_Needler_Character_C_GetDamageSourceLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



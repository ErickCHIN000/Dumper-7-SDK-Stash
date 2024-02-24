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
// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.OnBuffEnd
struct UBuffCauseDamageOnStoneFormHitTaken_C_OnBuffEnd_Params
{
public:
	bool                                         bInterrupted;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.OnDmgBlocked
struct UBuffCauseDamageOnStoneFormHitTaken_C_OnDmgBlocked_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function BuffCauseDamageOnStoneFormHitTaken.BuffCauseDamageOnStoneFormHitTaken_C.ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken
struct UBuffCauseDamageOnStoneFormHitTaken_C_ExecuteUbergraph_BuffCauseDamageOnStoneFormHitTaken_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_SourceActor;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Amount;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bInterrupted;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetActorToBuffAs0Base_As0_Base;           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetActorToBuffAs0Base_As0_Base_1;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetGameplayPCFromActor_Gameplay_PC;       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



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
// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.ModifierTick
struct UBP_Modifier_LavaHunter_FlameOn_C_ModifierTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.OnDamagedReturned
struct UBP_Modifier_LavaHunter_FlameOn_C_OnDamagedReturned_Params
{
public:
	int32                                        ReturnedAmount;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_722[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorReceivingDamage;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn
struct UBP_Modifier_LavaHunter_FlameOn_C_ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_DeltaTime;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_783[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISpawnableAI>         K2Node_DynamicCast_AsSpawnable_AI;                 // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_78B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_ReturnedAmount;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_ActorReceivingDamage;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorState*                           CallFunc_GetAIActorState_ReturnValue;              // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFlammableTargetIgnite                CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue; // 0x48(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UFlammableInstance*                    CallFunc_TryIgniteFlammableTarget_OutInstance;     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryIgniteFlammableTarget_ReturnValue;     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



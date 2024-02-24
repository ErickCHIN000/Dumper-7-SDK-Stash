#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x26C - 0x220)
// BlueprintGeneratedClass ProtectedActorProxy.ProtectedActorProxy_C
class AProtectedActorProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusNPCGOAPCharacter_C*          Protector;                                         // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                Protectee;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UActorState*                           ProtecteeActorState;                               // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AController*>                   RecentAttackers;                                   // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                RecentAttackTimes;                                 // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        RecentAttackLifetime;                              // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProtectedActorProxy_C* GetDefaultObj();

	void ProtectedActorProxy_ActorDamaged(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void ProtectedActorProxy_ActorDied(class UActorState* ActorState);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ProtectedActorProxy(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UActorState* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}



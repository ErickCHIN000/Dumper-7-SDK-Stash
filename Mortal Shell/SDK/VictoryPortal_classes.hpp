#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x241 - 0x220)
// BlueprintGeneratedClass VictoryPortal.VictoryPortal_C
class AVictoryPortal_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              VictoryGateParticles;                              // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBeenUsed_;                                      // 0x240(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AVictoryPortal_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void MulticastVictorySound();
	void ExecuteUbergraph_VictoryPortal(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess_2, TArray<class ANavPointSpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ANavPointSpawner_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}



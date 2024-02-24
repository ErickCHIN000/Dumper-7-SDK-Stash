#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD5 (0xCD5 - 0xC00)
// BlueprintGeneratedClass TEDProjectile_RealSworderang.TEDProjectile_RealSworderang_C
class ATEDProjectile_RealSworderang_C : public ATEDProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(Transient, DuplicateTransient)
	class UDrunkenWaveMovementComponent*         DrunkenWaveMovement;                               // 0xC08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileHomingComponent*            ProjectileHoming;                                  // 0xC10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       EQS;                                               // 0xC18(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        ReturnDelay;                                       // 0xCD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Bangarang;                                         // 0xCD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ATEDProjectile_RealSworderang_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReturnToSender();
	void FindNewFriends();
	void OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang();
	void OnBeginWeaponTransform();
	void ExecuteUbergraph_TEDProjectile_RealSworderang(int32 EntryPoint, int32 CallFunc_RemoveAmmo_ThrowType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetInstigator_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FHitResult& K2Node_Event_Hit, const struct FVector& K2Node_Event_ImpactVelocity, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}



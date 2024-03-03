#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x704 - 0x6F0)
// BlueprintGeneratedClass BP_LivingStatueAI.BP_LivingStatueAI_C
class ABP_LivingStatueAI_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       IdleSoundFX;                                       // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimationVersion;                                  // 0x700(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LivingStatueAI_C* GetDefaultObj();

	void CanBeStunned(bool* Result, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool CanBeBackstabbed(bool CallFunc_CanBeBackstabbed_ReturnValue);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages, bool K2Node_SwitchInteger_CmpSuccess);
	void UserConstructionScript(bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Update_Items();
	void HandleMeshOnDeath();
	void Respawn();
	void BndEvt__BP_LivingStatueAI_RoamingSFX_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_LivingStatueAI_RoamingSFX_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_LivingStatueAI(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_ActorHasTag_ReturnValue, bool Temp_bool_IsClosed_Variable, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_ActorHasTag_ReturnValue_1);
};

}



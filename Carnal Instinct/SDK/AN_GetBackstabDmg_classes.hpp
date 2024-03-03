#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AN_GetBackstabDmg.AN_GetBackstabDmg_C
class UAN_GetBackstabDmg_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAN_GetBackstabDmg_C* GetDefaultObj();

	class FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UEffectsComponent_C* L_EffectsComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEffectApplied_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetEffectApplier_Applier, const struct FF_HitData& K2Node_MakeStruct_F_HitData, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType);
};

}



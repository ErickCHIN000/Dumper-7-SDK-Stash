#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x148 - 0x110)
// BlueprintGeneratedClass Ability_SkeepProd.Ability_SkeepProd_C
class UAbility_SkeepProd_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AIO_SkeepProd_C*                       SkeepProdController;                               // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SkeepProd; // 0x120(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_SkeepProd_C* GetDefaultObj();

	void OnActivated();
	void SkeepProd_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_SkeepProd(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_AddTargetToBeamList_Res, class AIO_SkeepProd_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue2, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}



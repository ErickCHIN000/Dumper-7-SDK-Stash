#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x15C - 0x110)
// BlueprintGeneratedClass Ability_JAK_CrossGen.Ability_JAK_CrossGen_C
class UAbility_JAK_CrossGen_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  OwnerOakCharacter;                                 // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_JAK_CrossGen; // 0x120(0x28)(None)
	class AIO_Jak_CrossGen_C*                    CrossbowGenerator;                                 // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x150(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_JAK_CrossGen_C* GetDefaultObj();

	void OnActivated();
	void CrossGen_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void SpawnNewGenerator(class AActor* DamagedActor);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_JAK_CrossGen(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor1, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_AddShotsToGenerator_Res, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AIO_Jak_CrossGen_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor);
};

}



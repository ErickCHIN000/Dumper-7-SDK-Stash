#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x1D4 - 0x198)
// BlueprintGeneratedClass Ability_All_Reload_Guns_MeleeSingularity.Ability_All_Reload_Guns_MeleeSingularity_C
class UAbility_All_Reload_Guns_MeleeSingularity_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	bool                                         bCanSingularityNextHit;                            // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4101[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Reload_Guns_MeleeSingularity; // 0x1A8(0x28)(None)
	float                                        SingularityRadius;                                 // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_All_Reload_Guns_MeleeSingularity_C* GetDefaultObj();

	void OnDeactivated();
	void Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven);
	void OnActivated();
	void Enchantment_CausedMeleeDmg(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_All_Reload_Guns_MeleeSingularity(int32 EntryPoint, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageCauserComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue);
};

}



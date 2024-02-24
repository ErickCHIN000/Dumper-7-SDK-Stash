#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x1C0 - 0x110)
// BlueprintGeneratedClass Ability_Buffmeister.Ability_Buffmeister_C
class UAbility_Buffmeister_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter*                         Owner;                                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           SpellMod;                                          // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CDM;                                               // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Buffmeister; // 0x130(0x28)(None)
	class UParticleSystem*                       ScreenParticle;                                    // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStatusEffectData*>             StatusEffectArray;                                 // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UBPInvPart_SpellMod_C*, class UStatusEffectData*> PartToStatusMap;                                   // 0x170(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAbility_Buffmeister_C* GetDefaultObj();

	void AddStatusEffect(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UBPInvPart_SpellMod_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, class UBPInvPart_SpellMod_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UStatusEffectData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1);
	void OnActivated();
	void RemoveBuff();
	void OnDeactivated();
	void BuffCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer, class AActor* SpellActor);
	void ExecuteUbergraph_Ability_Buffmeister(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable6, class UParticleSystem* Temp_object_Variable7, class UParticleSystem* Temp_object_Variable8, class UParticleSystem* Temp_object_Variable9, class UParticleSystem* Temp_object_Variable10, class UParticleSystem* Temp_object_Variable11, enum class EOakElementalType Temp_byte_Variable1, class UConditionalDamageModifier* Temp_object_Variable12, class UConditionalDamageModifier* Temp_object_Variable13, class UConditionalDamageModifier* Temp_object_Variable14, class UConditionalDamageModifier* Temp_object_Variable15, class UConditionalDamageModifier* Temp_object_Variable16, class UConditionalDamageModifier* Temp_object_Variable17, enum class EOakElementalType Temp_byte_Variable2, class UWwiseEvent* Temp_object_Variable18, class UWwiseEvent* Temp_object_Variable19, class UWwiseEvent* Temp_object_Variable20, class UWwiseEvent* Temp_object_Variable21, class UWwiseEvent* Temp_object_Variable22, class UWwiseEvent* Temp_object_Variable23, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGrenadeMod* K2Node_DynamicCast_AsGrenade_Mod, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetSpellStatusEffectDamage_ReturnValue, float CallFunc_GetSpellStatusEffectChance_ReturnValue, float CallFunc_GetSpellModRadius_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, class UClass* CallFunc_GetSpellDamageType_ReturnValue, float CallFunc_GetSpellModDamage_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_GetSpellDamageType_ReturnValue1, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess2, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EOakElementalType Temp_byte_Variable3, class UClass* CallFunc_GetSpellDamageType_ReturnValue2, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, class UParticleSystem* K2Node_Select_Default, class UParticleSystem* K2Node_Select1_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UWwiseEvent* K2Node_Select2_Default, class UClass* CallFunc_GetSpellDamageType_ReturnValue3, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue2, class UConditionalDamageModifier* K2Node_Select3_Default, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, class AActor* K2Node_CustomEvent_SpellActor, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UStatusEffectData* CallFunc_Array_Get_Item, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}



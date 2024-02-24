#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x190 - 0x110)
// BlueprintGeneratedClass Ability_Claw.Ability_Claw_C
class UAbility_Claw_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Claw_Shock; // 0x118(0x28)(None)
	class AOakCharacter_Player*                  PlayerOwner;                                       // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectData*                     SE_EleDmgTaken;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConditionalDamageModifier*            CompanionCDM;                                      // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MyDmgType;                                         // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        MyCompanions;                                      // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        DebuffDuration;                                    // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DebuffDurationHandle;                              // 0x178(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Claw_C* GetDefaultObj();

	void GetClawArmorElement(class UClass** Res);
	void OnActivated();
	void CompanionDealtDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void Event_ClawQuery();
	void OnDeactivated();
	void Event_CompanionSpawned(class AActor* SpawnedActor, struct FPetInfo& PetData);
	void Event_CompanionReleased(class AActor* Pet, enum class EPetReleaseReason Reason);
	void UnregisterPetBinds(class AActor* Pet);
	void ExecuteUbergraph_Ability_Claw(int32 EntryPoint, float CallFunc_GetDataTableValueFromHandle_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, int32 Temp_int_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* Temp_class_Variable4, class UClass* Temp_class_Variable5, enum class EOakElementalType Temp_byte_Variable, class UStatusEffectData* Temp_object_Variable, class UStatusEffectData* Temp_object_Variable1, class UStatusEffectData* Temp_object_Variable2, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, class UStatusEffectData* Temp_object_Variable5, enum class EOakElementalType Temp_byte_Variable1, class UStatusEffectData* K2Node_Select_Default, class UConditionalDamageModifier* Temp_object_Variable6, class UConditionalDamageModifier* Temp_object_Variable7, class UConditionalDamageModifier* Temp_object_Variable8, class UConditionalDamageModifier* Temp_object_Variable9, class UConditionalDamageModifier* Temp_object_Variable10, class UConditionalDamageModifier* Temp_object_Variable11, class UConditionalDamageModifier* K2Node_Select1_Default, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FOakPlayerAbilityAllyQuerySpec& K2Node_MakeStruct_OakPlayerAbilityAllyQuerySpec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FOakPlayerAbilityAllyQueryResult& CallFunc_QueryAllies_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPetOwnerComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_CustomEvent_SpawnedActor, const struct FPetInfo& K2Node_CustomEvent_PetData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class ADrone_PlayerCompanionParent_C* K2Node_DynamicCast_AsDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, class ABPChar_MushroomCompanion_C* K2Node_DynamicCast_AsBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_CustomEvent_Pet1, enum class EPetReleaseReason K2Node_CustomEvent_Reason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, bool CallFunc_Array_RemoveItem_ReturnValue, class AActor* K2Node_CustomEvent_Pet, class AActor* CallFunc_Array_Get_Item1, class ABPChar_MushroomCompanion_C* K2Node_DynamicCast_AsBPChar_Mushroom_Companion1, bool K2Node_DynamicCast_bSuccess3, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FPetInfo& K2Node_MakeStruct_PetInfo, int32 CallFunc_FTrunc_ReturnValue, class UClass* K2Node_Select2_Default, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x200 - 0x198)
// BlueprintGeneratedClass Ability_HiltMod_SmithCharade_Reward.Ability_HiltMod_SmithCharade_Reward_C
class UAbility_HiltMod_SmithCharade_Reward_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	float                                        Duration_CooldownsBuff;                            // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_HiltMod_SmithCharade_Reward; // 0x1A8(0x28)(None)
	struct FDataTableValueHandle                 ExplosionDamageMulti;                              // 0x1D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 ExplosionDamageRadius;                             // 0x1E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_HiltMod_SmithCharade_Reward_C* GetDefaultObj();

	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnActivated();
	void Event_MeleeKill(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Ability_HiltMod_SmithCharade_Reward(int32 EntryPoint, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FHitResult& Temp_struct_Variable, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UClass* K2Node_Select_Default, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}



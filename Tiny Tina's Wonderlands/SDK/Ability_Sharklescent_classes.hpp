#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x15C - 0x110)
// BlueprintGeneratedClass Ability_Sharklescent.Ability_Sharklescent_C
class UAbility_Sharklescent_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FTimerHandle                          SharkTimer;                                        // 0x118(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AOakCharacter_Player*                  AbilityPlayerOwner;                                // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Sharklescent; // 0x128(0x28)(None)
	class UConditionalDamageModifier*            ActiveCDM;                                         // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CDMIndex;                                          // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Sharklescent_C* GetDefaultObj();

	void OnActivated();
	void Event_ChangeCDMElement();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Sharklescent(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable, class UConditionalDamageModifier* Temp_object_Variable, class UConditionalDamageModifier* Temp_object_Variable1, class UConditionalDamageModifier* Temp_object_Variable2, class UConditionalDamageModifier* Temp_object_Variable3, class UConditionalDamageModifier* Temp_object_Variable4, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2, class UConditionalDamageModifier* K2Node_Select_Default);
};

}



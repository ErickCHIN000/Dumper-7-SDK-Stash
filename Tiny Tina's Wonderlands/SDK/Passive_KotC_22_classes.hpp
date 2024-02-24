#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x3E8 - 0x2C8)
// BlueprintGeneratedClass Passive_KotC_22.Passive_KotC_22_C
class UPassive_KotC_22_C : public UPassive_KotC_DragonAuraPassive_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_KotC_22; // 0x2D0(0x28)(None)
	struct FEnvQueryParams                       FindPlayersEQS;                                    // 0x2F8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        SkillTargets;                                      // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        AllAllies;                                         // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          RefreshTimer;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FGbxAttributeModifierHandle>   AttributeModifiers;                                // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPassive_KotC_22_C* GetDefaultObj();

	void OnActivated();
	void FindPlayers();
	void RemoveRebukingAuraBuffs();
	void OnDeactivated();
	void OnGradeChanged();
	void ExecuteUbergraph_Passive_KotC_22(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AActor* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FOakPlayerAbilityAllyQuerySpec& K2Node_MakeStruct_OakPlayerAbilityAllyQuerySpec, const struct FOakPlayerAbilityAllyQueryResult& CallFunc_QueryAllies_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue1, class AActor* CallFunc_Array_Get_Item2, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FGbxAttributeModifierHandle& CallFunc_Array_Get_Item3, bool CallFunc_RemoveAttributeModifier_ReturnValue);
};

}



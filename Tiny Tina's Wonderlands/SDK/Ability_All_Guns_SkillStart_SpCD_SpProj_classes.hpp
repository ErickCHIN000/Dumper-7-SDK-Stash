#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1B0 - 0x198)
// BlueprintGeneratedClass Ability_All_Guns_SkillStart_SpCD_SpProj.Ability_All_Guns_SkillStart_SpCD_SpProj_C
class UAbility_All_Guns_SkillStart_SpCD_SpProj_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	TArray<class UInventorySlotData*>            InvSlotsToTest;                                    // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAbility_All_Guns_SkillStart_SpCD_SpProj_C* GetDefaultObj();

	void Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void ExecuteUbergraph_Ability_All_Guns_SkillStart_SpCD_SpProj(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, int32 Temp_int_Loop_Counter_Variable, class UInventorySlotData* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}



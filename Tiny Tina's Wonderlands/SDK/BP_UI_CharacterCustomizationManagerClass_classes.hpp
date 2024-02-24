#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0xF70 - 0xE60)
// BlueprintGeneratedClass BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C
class UBP_UI_CharacterCustomizationManagerClass_C : public UOakUICharacterCustomizationManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE60(0x8)(Transient, DuplicateTransient)
	class UAnimMontage*                          ActiveMontage;                                     // 0xE68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABPChar_StandIn_Player_C*              ActiveStandIn;                                     // 0xE70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UClass*>             CustomizationsSwitchMap;                           // 0xE78(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UDialogNameTag*, class UClass*>   DialogTags;                                        // 0xEC8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UClass*>           ActionMap;                                         // 0xF18(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                ChosenActionSkill;                                 // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UI_CharacterCustomizationManagerClass_C* GetDefaultObj();

	void OnSelectedClassChanged();
	void OnEnteringClassSelectionView();
	void OnEnteringCharacterEditView();
	void OnToggleCustomization(class FName ValueID, class UDialogNameTag* DialogTag);
	void OnEnteringConfirmView();
	void ExecuteUbergraph_BP_UI_CharacterCustomizationManagerClass(int32 EntryPoint, enum class EOakPlayerClass Temp_byte_Variable, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable1, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable2, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable3, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable4, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable5, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable6, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable7, bool Temp_bool_Variable, class UClass* CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable8, class UOakPlayerAbilityTreeBranchData* CallFunc_GetSelectedClass_ReturnValue, class AOakCharacter_StandIn* CallFunc_GetStandInCharacter_ReturnValue, class ABPChar_StandIn_Player_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player, bool K2Node_DynamicCast_bSuccess, class UOakPlayerAbilityTreeBranchData* CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue, TArray<class UClass*>& CallFunc_GetActionAbilities_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UClass* CallFunc_Array_Get_Item, class FName K2Node_Event_ValueID, class UDialogNameTag* K2Node_Event_DialogTag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, class UClass* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable9, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable10, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable11, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable12, class AOakCharacter_StandIn* CallFunc_GetStandInCharacter_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class ABPChar_StandIn_Player_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player1, bool K2Node_DynamicCast_bSuccess1, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable13, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable14, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable15, class AOakPlayerController* CallFunc_GetPlayerOwner_ReturnValue, bool CallFunc_IsInNewGameFlow_ReturnValue, class UOakPlayerAbilityTreeBranchData* CallFunc_GetSelectedClass_ReturnValue1, class AOakCharacter_StandIn* CallFunc_GetStandInCharacter_ReturnValue2, class ABPChar_StandIn_Player_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player2, bool K2Node_DynamicCast_bSuccess2, class UOakPlayerAbilityTreeBranchData* K2Node_Select_Default, class UOakPlayerAbilityTreeBranchData* CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue1, TArray<class UClass*>& CallFunc_GetActionAbilities_ReturnValue1, enum class EOakPlayerClass Temp_byte_Variable1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_RandomInteger_ReturnValue1, class UOakPlayerAbilityTreeBranchData* K2Node_Select1_Default, class UClass* CallFunc_Array_Get_Item1, bool Temp_bool_Variable1, class UClass* K2Node_Select2_Default, class UClass* CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue1, class UClass* CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class UClass* K2Node_Select3_Default);
};

}



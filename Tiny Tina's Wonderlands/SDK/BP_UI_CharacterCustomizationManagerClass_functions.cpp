#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C
// (None)

class UClass* UBP_UI_CharacterCustomizationManagerClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_CharacterCustomizationManagerClass_C");

	return Clss;
}


// BP_UI_CharacterCustomizationManagerClass_C BP_UI_CharacterCustomizationManagerClass.Default__BP_UI_CharacterCustomizationManagerClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_CharacterCustomizationManagerClass_C* UBP_UI_CharacterCustomizationManagerClass_C::GetDefaultObj()
{
	static class UBP_UI_CharacterCustomizationManagerClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_CharacterCustomizationManagerClass_C*>(UBP_UI_CharacterCustomizationManagerClass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C.OnSelectedClassChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UI_CharacterCustomizationManagerClass_C::OnSelectedClassChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CharacterCustomizationManagerClass_C", "OnSelectedClassChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C.OnEnteringClassSelectionView
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UI_CharacterCustomizationManagerClass_C::OnEnteringClassSelectionView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CharacterCustomizationManagerClass_C", "OnEnteringClassSelectionView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C.OnEnteringCharacterEditView
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UI_CharacterCustomizationManagerClass_C::OnEnteringCharacterEditView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CharacterCustomizationManagerClass_C", "OnEnteringCharacterEditView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C.OnToggleCustomization
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        ValueID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogNameTag*              DialogTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharacterCustomizationManagerClass_C::OnToggleCustomization(class FName ValueID, class UDialogNameTag* DialogTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CharacterCustomizationManagerClass_C", "OnToggleCustomization");

	Params::UBP_UI_CharacterCustomizationManagerClass_C_OnToggleCustomization_Params Parms{};

	Parms.ValueID = ValueID;
	Parms.DialogTag = DialogTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C.OnEnteringConfirmView
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_UI_CharacterCustomizationManagerClass_C::OnEnteringConfirmView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CharacterCustomizationManagerClass_C", "OnEnteringConfirmView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_CharacterCustomizationManagerClass.BP_UI_CharacterCustomizationManagerClass_C.ExecuteUbergraph_BP_UI_CharacterCustomizationManagerClass
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakPlayerClass         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*CallFunc_GetSelectedClass_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_StandIn*       CallFunc_GetStandInCharacter_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPChar_StandIn_Player_C*    K2Node_DynamicCast_AsBPChar_Stand_in_Player                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityTreeBranchData*CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetActionAbilities_ReturnValue                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ValueID                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogNameTag*              K2Node_Event_DialogTag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_StandIn*       CallFunc_GetStandInCharacter_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPChar_StandIn_Player_C*    K2Node_DynamicCast_AsBPChar_Stand_in_Player1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable14                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*Temp_object_Variable15                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        CallFunc_GetPlayerOwner_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInNewGameFlow_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityTreeBranchData*CallFunc_GetSelectedClass_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_StandIn*       CallFunc_GetStandInCharacter_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPChar_StandIn_Player_C*    K2Node_DynamicCast_AsBPChar_Stand_in_Player2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilityTreeBranchData*K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              CallFunc_GetActionAbilities_ReturnValue1                         (ZeroConstructor, ReferenceParm)
// enum class EOakPlayerClass         Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityTreeBranchData*K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharacterCustomizationManagerClass_C::ExecuteUbergraph_BP_UI_CharacterCustomizationManagerClass(int32 EntryPoint, enum class EOakPlayerClass Temp_byte_Variable, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable1, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable2, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable3, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable4, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable5, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable6, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable7, bool Temp_bool_Variable, class UClass* CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable8, class UOakPlayerAbilityTreeBranchData* CallFunc_GetSelectedClass_ReturnValue, class AOakCharacter_StandIn* CallFunc_GetStandInCharacter_ReturnValue, class ABPChar_StandIn_Player_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player, bool K2Node_DynamicCast_bSuccess, class UOakPlayerAbilityTreeBranchData* CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue, TArray<class UClass*>& CallFunc_GetActionAbilities_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UClass* CallFunc_Array_Get_Item, class FName K2Node_Event_ValueID, class UDialogNameTag* K2Node_Event_DialogTag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, bool CallFunc_EqualEqual_NameName_ReturnValue4, class UClass* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable9, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable10, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable11, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable12, class AOakCharacter_StandIn* CallFunc_GetStandInCharacter_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class ABPChar_StandIn_Player_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player1, bool K2Node_DynamicCast_bSuccess1, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable13, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable14, class UOakPlayerAbilityTreeBranchData* Temp_object_Variable15, class AOakPlayerController* CallFunc_GetPlayerOwner_ReturnValue, bool CallFunc_IsInNewGameFlow_ReturnValue, class UOakPlayerAbilityTreeBranchData* CallFunc_GetSelectedClass_ReturnValue1, class AOakCharacter_StandIn* CallFunc_GetStandInCharacter_ReturnValue2, class ABPChar_StandIn_Player_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player2, bool K2Node_DynamicCast_bSuccess2, class UOakPlayerAbilityTreeBranchData* K2Node_Select_Default, class UOakPlayerAbilityTreeBranchData* CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue1, TArray<class UClass*>& CallFunc_GetActionAbilities_ReturnValue1, enum class EOakPlayerClass Temp_byte_Variable1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_RandomInteger_ReturnValue1, class UOakPlayerAbilityTreeBranchData* K2Node_Select1_Default, class UClass* CallFunc_Array_Get_Item1, bool Temp_bool_Variable1, class UClass* K2Node_Select2_Default, class UClass* CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue1, class UClass* CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class UClass* K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_CharacterCustomizationManagerClass_C", "ExecuteUbergraph_BP_UI_CharacterCustomizationManagerClass");

	Params::UBP_UI_CharacterCustomizationManagerClass_C_ExecuteUbergraph_BP_UI_CharacterCustomizationManagerClass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue = CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.CallFunc_GetSelectedClass_ReturnValue = CallFunc_GetSelectedClass_ReturnValue;
	Parms.CallFunc_GetStandInCharacter_ReturnValue = CallFunc_GetStandInCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPChar_Stand_in_Player = K2Node_DynamicCast_AsBPChar_Stand_in_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue = CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue;
	Parms.CallFunc_GetActionAbilities_ReturnValue = CallFunc_GetActionAbilities_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_ValueID = K2Node_Event_ValueID;
	Parms.K2Node_Event_DialogTag = K2Node_Event_DialogTag;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_EqualEqual_NameName_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue3 = CallFunc_EqualEqual_NameName_ReturnValue3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue4 = CallFunc_EqualEqual_NameName_ReturnValue4;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.CallFunc_GetStandInCharacter_ReturnValue1 = CallFunc_GetStandInCharacter_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPChar_Stand_in_Player1 = K2Node_DynamicCast_AsBPChar_Stand_in_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_object_Variable13 = Temp_object_Variable13;
	Parms.Temp_object_Variable14 = Temp_object_Variable14;
	Parms.Temp_object_Variable15 = Temp_object_Variable15;
	Parms.CallFunc_GetPlayerOwner_ReturnValue = CallFunc_GetPlayerOwner_ReturnValue;
	Parms.CallFunc_IsInNewGameFlow_ReturnValue = CallFunc_IsInNewGameFlow_ReturnValue;
	Parms.CallFunc_GetSelectedClass_ReturnValue1 = CallFunc_GetSelectedClass_ReturnValue1;
	Parms.CallFunc_GetStandInCharacter_ReturnValue2 = CallFunc_GetStandInCharacter_ReturnValue2;
	Parms.K2Node_DynamicCast_AsBPChar_Stand_in_Player2 = K2Node_DynamicCast_AsBPChar_Stand_in_Player2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue1 = CallFunc_FindAbilityTreeBranchForPlayerClass_ReturnValue1;
	Parms.CallFunc_GetActionAbilities_ReturnValue1 = CallFunc_GetActionAbilities_ReturnValue1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_RandomInteger_ReturnValue1 = CallFunc_RandomInteger_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue1 = CallFunc_PLC_FindPresentationActionForActionSkill_ReturnValue1;
	Parms.CallFunc_Map_Find_Value2 = CallFunc_Map_Find_Value2;
	Parms.CallFunc_Map_Find_ReturnValue2 = CallFunc_Map_Find_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



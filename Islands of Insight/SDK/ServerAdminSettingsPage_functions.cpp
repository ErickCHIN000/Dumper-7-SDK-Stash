#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ServerAdminSettingsPage.ServerAdminSettingsPage_C
// (None)

class UClass* UServerAdminSettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerAdminSettingsPage_C");

	return Clss;
}


// ServerAdminSettingsPage_C ServerAdminSettingsPage.Default__ServerAdminSettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerAdminSettingsPage_C* UServerAdminSettingsPage_C::GetDefaultObj()
{
	static class UServerAdminSettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerAdminSettingsPage_C*>(UServerAdminSettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.GetText_2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UServerAdminSettingsPage_C::GetText_2(float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "GetText_2");

	Params::UServerAdminSettingsPage_C_GetText_2_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.GetText_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UServerAdminSettingsPage_C::GetText_1(float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "GetText_1");

	Params::UServerAdminSettingsPage_C_GetText_1_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.Text to Int
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEditableTextBox*            TextBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Default                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerAdminSettingsPage_C::Text_to_Int(class UEditableTextBox* TextBox, int32 Default, int32* Value, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "Text to Int");

	Params::UServerAdminSettingsPage_C_Text_to_Int_Params Parms{};

	Parms.TextBox = TextBox;
	Parms.Default = Default;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.CheckOnlyNumbers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UEditableTextBox*            Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UServerAdminSettingsPage_C::CheckOnlyNumbers(class FText& InText, class UEditableTextBox* Target, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue_2, bool CallFunc_IsNumeric_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "CheckOnlyNumbers");

	Params::UServerAdminSettingsPage_C_CheckOnlyNumbers_Params Parms{};

	Parms.InText = InText;
	Parms.Target = Target;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_2 = CallFunc_NotEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UServerAdminSettingsPage_C::GetText_0(float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "GetText_0");

	Params::UServerAdminSettingsPage_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ShowOrphanPuzzles_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ShowOrphanPuzzles_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ShowOrphanPuzzles_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_MaxMatchDurationTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_MaxMatchDurationTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_MaxMatchDurationTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UServerAdminSettingsPage_C_BndEvt__GameplaySettingsPage_MaxMatchDurationTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_MatchWinConTextbox_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_MatchWinConTextbox_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_MatchWinConTextbox_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UServerAdminSettingsPage_C_BndEvt__GameplaySettingsPage_MatchWinConTextbox_K2Node_ComponentBoundEvent_14_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_CheatSpawnRandomAirdrop_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_CheatSpawnRandomAirdrop_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_CheatSpawnRandomAirdrop_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_Button_262_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_Button_262_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_Button_262_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ToggleDevModeBtn_1_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ToggleDevModeBtn_1_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ToggleDevModeBtn_1_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_CheatActiveQuests_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_CheatActiveQuests_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_CheatActiveQuests_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_AddAnyQuest_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_AddAnyQuest_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_AddAnyQuest_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_StartTeamVsTeam_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_StartTeamVsTeam_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_StartTeamVsTeam_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_SwapServer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_SwapServer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_SwapServer_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_DieBtn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_DieBtn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_DieBtn_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_SwapTeams_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_SwapTeams_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_SwapTeams_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_CheatGoldButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_CheatGoldButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_CheatGoldButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAnimSettingsPage_SwapToMultiplayerDungeonsMap_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAnimSettingsPage_SwapToMultiplayerDungeonsMap_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAnimSettingsPage_SwapToMultiplayerDungeonsMap_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_Gallery2_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_Gallery2_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_Gallery2_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockChapters_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockChapters_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockChapters_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_CheatPowerPolesButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_CheatPowerPolesButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_CheatPowerPolesButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_CheatItemButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_CheatItemButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_CheatItemButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_CheatWisdomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_CheatWisdomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_CheatWisdomButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_CheatMasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_CheatMasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_CheatMasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockEncyclopedia_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockEncyclopedia_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockEncyclopedia_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockUpgrades_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockUpgrades_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockUpgrades_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockCosmetic_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockCosmetic_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockCosmetic_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_CheatQuestObjective_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_CheatQuestObjective_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_CheatQuestObjective_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_SpawnOneBot_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_SpawnOneBot_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_SpawnOneBot_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_SpawnTenBot_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_SpawnTenBot_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_SpawnTenBot_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_DespawnAllBots_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_DespawnAllBots_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_DespawnAllBots_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockFTUE_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockFTUE_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockFTUE_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockRainforest_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockRainforest_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockRainforest_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockCentral_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockCentral_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockCentral_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockRiverlands_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockRiverlands_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockRiverlands_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockRedwoods_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockRedwoods_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockRedwoods_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockGeyser_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockGeyser_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockGeyser_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__GameplaySettingsPage_OverrideButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__GameplaySettingsPage_OverrideButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__GameplaySettingsPage_OverrideButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_CheatBorbButton_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_CheatBorbButton_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_CheatBorbButton_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_FreeCamera_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_FreeCamera_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_FreeCamera_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_ToggleVolumetricFog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_ToggleVolumetricFog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_ToggleVolumetricFog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_LODSlider_K2Node_ComponentBoundEvent_38_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_LODSlider_K2Node_ComponentBoundEvent_38_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_LODSlider_K2Node_ComponentBoundEvent_38_OnFloatValueChangedEvent__DelegateSignature");

	Params::UServerAdminSettingsPage_C_BndEvt__ServerAdminSettingsPage_LODSlider_K2Node_ComponentBoundEvent_38_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_SlowmoSlider_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_SlowmoSlider_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_SlowmoSlider_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature");

	Params::UServerAdminSettingsPage_C_BndEvt__ServerAdminSettingsPage_SlowmoSlider_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_Cheat999BorbButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_Cheat999BorbButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_Cheat999BorbButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.BndEvt__ServerAdminSettingsPage_UnlockDeluxe_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerAdminSettingsPage_C::BndEvt__ServerAdminSettingsPage_UnlockDeluxe_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "BndEvt__ServerAdminSettingsPage_UnlockDeluxe_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ServerAdminSettingsPage.ServerAdminSettingsPage_C.ExecuteUbergraph_ServerAdminSettingsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UGISSteam*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedIndex_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Text_to_Int_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Text_to_Int_Value_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CheatQuestMenu_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Text_to_Int_Value_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaPlayerState*          K2Node_DynamicCast_AsSophia_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSelectedIndex_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaGameState*            K2Node_DynamicCast_AsSophia_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaGameState*            K2Node_DynamicCast_AsSophia_Game_State_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameModeType           CallFunc_GetGameModeType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameModeType           CallFunc_GetGameModeType_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileLoadString_Text_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileLoadString_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Text_to_Int_Value_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaHUD*                  K2Node_DynamicCast_AsSophia_HUD                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FServerParams               K2Node_MakeStruct_ServerParams                                   (NoDestructor)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaPlayerState*          K2Node_DynamicCast_AsSophia_Player_State_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetDevMode_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_GameMenuSimplified_C*   K2Node_DynamicCast_AsWBP_Game_Menu_Simplified                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaCharacterController_C*K2Node_DynamicCast_AsBP_Sophia_Character_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UServerAdminSettingsPage_C::ExecuteUbergraph_ServerAdminSettingsPage(int32 EntryPoint, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UGISSteam* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32 CallFunc_GetSelectedIndex_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, class FText K2Node_ComponentBoundEvent_Text_1, float CallFunc_GetValue_ReturnValue, int32 CallFunc_Text_to_Int_Value, int32 CallFunc_Text_to_Int_Value_1, class FText K2Node_ComponentBoundEvent_Text, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_CheatQuestMenu_C* CallFunc_Create_ReturnValue, bool CallFunc_IsChecked_ReturnValue_3, int32 CallFunc_Text_to_Int_Value_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetSelectedIndex_ReturnValue_2, uint8 CallFunc_GetTeam_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State, bool K2Node_DynamicCast_bSuccess_2, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State_1, bool K2Node_DynamicCast_bSuccess_3, enum class EGameModeType CallFunc_GetGameModeType_ReturnValue, enum class EGameModeType CallFunc_GetGameModeType_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_5, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_1, bool K2Node_DynamicCast_bSuccess_6, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsChecked_ReturnValue_4, const class FString& CallFunc_FileLoadString_Text, bool CallFunc_FileLoadString_ReturnValue, const class FString& CallFunc_FileLoadString_Text_1, bool CallFunc_FileLoadString_ReturnValue_1, uint8 Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, int32 CallFunc_Text_to_Int_Value_3, class ASophiaHUD* K2Node_DynamicCast_AsSophia_HUD, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsChecked_ReturnValue_5, const struct FServerParams& K2Node_MakeStruct_ServerParams, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetDevMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_2, bool K2Node_DynamicCast_bSuccess_9, class UWBP_GameMenuSimplified_C* K2Node_DynamicCast_AsWBP_Game_Menu_Simplified, bool K2Node_DynamicCast_bSuccess_10, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, uint8 Temp_byte_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_SophiaCharacterController_C* K2Node_DynamicCast_AsBP_Sophia_Character_Controller, bool K2Node_DynamicCast_bSuccess_11, uint8 K2Node_Select_Default, class FText CallFunc_GetText_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerAdminSettingsPage_C", "ExecuteUbergraph_ServerAdminSettingsPage");

	Params::UServerAdminSettingsPage_C_ExecuteUbergraph_ServerAdminSettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue_1 = CallFunc_GetSelectedIndex_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Text_to_Int_Value = CallFunc_Text_to_Int_Value;
	Parms.CallFunc_Text_to_Int_Value_1 = CallFunc_Text_to_Int_Value_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.CallFunc_Text_to_Int_Value_2 = CallFunc_Text_to_Int_Value_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Player_State = K2Node_DynamicCast_AsSophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSelectedIndex_ReturnValue_2 = CallFunc_GetSelectedIndex_ReturnValue_2;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Game_State = K2Node_DynamicCast_AsSophia_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsSophia_Game_State_1 = K2Node_DynamicCast_AsSophia_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameModeType_ReturnValue = CallFunc_GetGameModeType_ReturnValue;
	Parms.CallFunc_GetGameModeType_ReturnValue_1 = CallFunc_GetGameModeType_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_1 = K2Node_DynamicCast_AsSophia_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character_1 = K2Node_DynamicCast_AsFirst_Person_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;
	Parms.CallFunc_FileLoadString_Text = CallFunc_FileLoadString_Text;
	Parms.CallFunc_FileLoadString_ReturnValue = CallFunc_FileLoadString_ReturnValue;
	Parms.CallFunc_FileLoadString_Text_1 = CallFunc_FileLoadString_Text_1;
	Parms.CallFunc_FileLoadString_ReturnValue_1 = CallFunc_FileLoadString_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_Text_to_Int_Value_3 = CallFunc_Text_to_Int_Value_3;
	Parms.K2Node_DynamicCast_AsSophia_HUD = K2Node_DynamicCast_AsSophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsChecked_ReturnValue_5 = CallFunc_IsChecked_ReturnValue_5;
	Parms.K2Node_MakeStruct_ServerParams = K2Node_MakeStruct_ServerParams;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Player_State_1 = K2Node_DynamicCast_AsSophia_Player_State_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SetDevMode_ReturnValue = CallFunc_SetDevMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character_2 = K2Node_DynamicCast_AsFirst_Person_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsWBP_Game_Menu_Simplified = K2Node_DynamicCast_AsWBP_Game_Menu_Simplified;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Character_Controller = K2Node_DynamicCast_AsBP_Sophia_Character_Controller;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_2 = K2Node_DynamicCast_AsSophia_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;

	UObject::ProcessEvent(Func, &Parms);

}

}



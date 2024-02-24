#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C
// (None)

class UClass* UWid_MainMenu_SubMenu_List_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_SubMenu_List_Entry_C");

	return Clss;
}


// wid_MainMenu_SubMenu_List_Entry_C wid_MainMenu_SubMenu_List_Entry.Default__wid_MainMenu_SubMenu_List_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_SubMenu_List_Entry_C* UWid_MainMenu_SubMenu_List_Entry_C::GetDefaultObj()
{
	static class UWid_MainMenu_SubMenu_List_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_SubMenu_List_Entry_C*>(UWid_MainMenu_SubMenu_List_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_Entry_C::GetEntryIndex(int32* EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "GetEntryIndex");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_GetEntryIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.PlayClickEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)

void UWid_MainMenu_SubMenu_List_Entry_C::PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "PlayClickEffect");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_PlayClickEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.ClearClickSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)

void UWid_MainMenu_SubMenu_List_Entry_C::ClearClickSelection(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "ClearClickSelection");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_ClearClickSelection_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.GetHoveredText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FString                      HoveredText                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_Entry_C::GetHoveredText(class FText* Text, const class FString& HoveredText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "GetHoveredText");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_GetHoveredText_Params Parms{};

	Parms.HoveredText = HoveredText;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_Entry_C::SetSelected(bool IsSelected, bool PostSoundEvent, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 K2Node_Select_Default, class FName K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float CallFunc_Conv_BoolToFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "SetSelected");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PostSoundEvent = PostSoundEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.SetSelectableEntryOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryOwnerInterface_C>Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_Entry_C::SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "SetSelectableEntryOwner");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_SetSelectableEntryOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_Entry_C::Select(bool IsSelected, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "Select");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_Select_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.SetEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_Entry_C::SetEntryIndex(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "SetEntryIndex");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_SetEntryIndex_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::BndEvt__Button_39_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "BndEvt__Button_39_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "BndEvt__ClickableButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "BndEvt__ClickableButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.DecrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::DecrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "DecrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "PreConstruct");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.IncrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::IncrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "IncrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.DecrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::DecrementValueReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "DecrementValueReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.IncrementValueRelesed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_SubMenu_List_Entry_C::IncrementValueRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "IncrementValueRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.ExecuteUbergraph_wid_MainMenu_SubMenu_List_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>K2Node_Event_Owner                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsSelected                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PostSoundEvent                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_EntryIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MainMenu_SubMenu_List_Entry_C::ExecuteUbergraph_wid_MainMenu_SubMenu_List_Entry(int32 EntryPoint, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsHovered_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "ExecuteUbergraph_wid_MainMenu_SubMenu_List_Entry");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_ExecuteUbergraph_wid_MainMenu_SubMenu_List_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Owner = K2Node_Event_Owner;
	Parms.K2Node_Event_IsSelected = K2Node_Event_IsSelected;
	Parms.K2Node_Event_PostSoundEvent = K2Node_Event_PostSoundEvent;
	Parms.K2Node_Event_EntryIndex = K2Node_Event_EntryIndex;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C.EntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_SubMenu_List_Entry_C::EntryClicked__DelegateSignature(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_SubMenu_List_Entry_C", "EntryClicked__DelegateSignature");

	Params::UWid_MainMenu_SubMenu_List_Entry_C_EntryClicked__DelegateSignature_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}



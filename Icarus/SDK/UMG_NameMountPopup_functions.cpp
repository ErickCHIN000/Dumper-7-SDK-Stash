#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_NameMountPopup.UMG_NameMountPopup_C
// (None)

class UClass* UUMG_NameMountPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_NameMountPopup_C");

	return Clss;
}


// UMG_NameMountPopup_C UMG_NameMountPopup.Default__UMG_NameMountPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_NameMountPopup_C* UUMG_NameMountPopup_C::GetDefaultObj()
{
	static class UUMG_NameMountPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_NameMountPopup_C*>(UUMG_NameMountPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.GetDefaultClickSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_IconTextButton_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  ClickSound                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_NameMountPopup_C::GetDefaultClickSound(class UUMG_IconTextButton_C* Button, class UFMODEvent** ClickSound, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "GetDefaultClickSound");

	Params::UUMG_NameMountPopup_C_GetDefaultClickSound_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ClickSound != nullptr)
		*ClickSound = Parms.ClickSound;

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.SetOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_IconTextButton_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  CallFunc_GetDefaultClickSound_ClickSound                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_NameMountPopup_C::SetOption(class UUMG_IconTextButton_C* Button, class FText Text, class UFMODEvent* FMODEvent, class UTexture2D* Image, const struct FLinearColor& Tint, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTexture2D* K2Node_Select_Default_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, class UTexture2D* K2Node_Select_Default_2, class UFMODEvent* Temp_wildcard_Variable, class UFMODEvent* CallFunc_GetDefaultClickSound_ClickSound, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "SetOption");

	Params::UUMG_NameMountPopup_C_SetOption_Params Parms{};

	Parms.Button = Button;
	Parms.Text = Text;
	Parms.FMODEvent = FMODEvent;
	Parms.Image = Image;
	Parms.Tint = Tint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue = CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetDefaultClickSound_ClickSound = CallFunc_GetDefaultClickSound_ClickSound;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.CallCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_NameMountPopup_C::CallCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "CallCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NameMountPopup_C::BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NameMountPopup_C::BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.SetPromptDetails
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConfirmationPopupDetails   ConfirmationPopupDetails                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UUMG_NameMountPopup_C::SetPromptDetails(struct FConfirmationPopupDetails& ConfirmationPopupDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "SetPromptDetails");

	Params::UUMG_NameMountPopup_C_SetPromptDetails_Params Parms{};

	Parms.ConfirmationPopupDetails = ConfirmationPopupDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_NameMountPopup_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_NameMountPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.SetStartingName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StartingName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_NameMountPopup_C::SetStartingName(const class FString& StartingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "SetStartingName");

	Params::UUMG_NameMountPopup_C_SetStartingName_Params Parms{};

	Parms.StartingName = StartingName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.BndEvt__UMG_NameMountPopup_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_NameMountPopup_C::BndEvt__UMG_NameMountPopup_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "BndEvt__UMG_NameMountPopup_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UUMG_NameMountPopup_C_BndEvt__UMG_NameMountPopup_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NameMountPopup.UMG_NameMountPopup_C.ExecuteUbergraph_UMG_NameMountPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_wildcard_Variable                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConfirmationPopupDetails   K2Node_Event_ConfirmationPopupDetails                            (ConstParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_StartingName                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UUMG_NameMountPopup_C::ExecuteUbergraph_UMG_NameMountPopup(int32 EntryPoint, class UUserWidget* Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, const struct FConfirmationPopupDetails& K2Node_Event_ConfirmationPopupDetails, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& K2Node_CustomEvent_StartingName, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NameMountPopup_C", "ExecuteUbergraph_UMG_NameMountPopup");

	Params::UUMG_NameMountPopup_C_ExecuteUbergraph_UMG_NameMountPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_ConfirmationPopupDetails = K2Node_Event_ConfirmationPopupDetails;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_StartingName = K2Node_CustomEvent_StartingName;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



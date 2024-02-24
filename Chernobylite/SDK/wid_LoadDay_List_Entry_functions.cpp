#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C
// (None)

class UClass* UWid_LoadDay_List_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LoadDay_List_Entry_C");

	return Clss;
}


// wid_LoadDay_List_Entry_C wid_LoadDay_List_Entry.Default__wid_LoadDay_List_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LoadDay_List_Entry_C* UWid_LoadDay_List_Entry_C::GetDefaultObj()
{
	static class UWid_LoadDay_List_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LoadDay_List_Entry_C*>(UWid_LoadDay_List_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LoadDay_List_Entry_C::GetEntryIndex(int32* EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "GetEntryIndex");

	Params::UWid_LoadDay_List_Entry_C_GetEntryIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        DayText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_LoadDay_List_Entry_C::Init(const class FString& SaveName, class FText DayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "Init");

	Params::UWid_LoadDay_List_Entry_C_Init_Params Parms{};

	Parms.SaveName = SaveName;
	Parms.DayText = DayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.PlayClickEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)

void UWid_LoadDay_List_Entry_C::PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "PlayClickEffect");

	Params::UWid_LoadDay_List_Entry_C_PlayClickEffect_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlaySoundEffect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LoadDay_List_Entry_C::SetSelected(bool IsSelected, bool PlaySoundEffect, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "SetSelected");

	Params::UWid_LoadDay_List_Entry_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PlaySoundEffect = PlaySoundEffect;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.IncrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::IncrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "IncrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.DecrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::DecrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "DecrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.IncrementValueRelesed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::IncrementValueRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "IncrementValueRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.DecrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::DecrementValueReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "DecrementValueReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.SetSelectableEntryOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryOwnerInterface_C>Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LoadDay_List_Entry_C::SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "SetSelectableEntryOwner");

	Params::UWid_LoadDay_List_Entry_C_SetSelectableEntryOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LoadDay_List_Entry_C::Select(bool IsSelected, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "Select");

	Params::UWid_LoadDay_List_Entry_C_Select_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.SetEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LoadDay_List_Entry_C::SetEntryIndex(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "SetEntryIndex");

	Params::UWid_LoadDay_List_Entry_C_SetEntryIndex_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LoadDay_List_Entry_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LoadDay_List_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "PreConstruct");

	Params::UWid_LoadDay_List_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.ExecuteUbergraph_wid_LoadDay_List_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISelectableEntryOwnerInterface_C>K2Node_Event_Owner                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsSelected                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PostSoundEvent                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_EntryIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWid_LoadDay_List_Entry_C::ExecuteUbergraph_wid_LoadDay_List_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsPressed_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "ExecuteUbergraph_wid_LoadDay_List_Entry");

	Params::UWid_LoadDay_List_Entry_C_ExecuteUbergraph_wid_LoadDay_List_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Owner = K2Node_Event_Owner;
	Parms.K2Node_Event_IsSelected = K2Node_Event_IsSelected;
	Parms.K2Node_Event_PostSoundEvent = K2Node_Event_PostSoundEvent;
	Parms.K2Node_Event_EntryIndex = K2Node_Event_EntryIndex;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_LoadDay_List_Entry_C*   Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LoadDay_List_Entry_C::OnHovered__DelegateSignature(class UWid_LoadDay_List_Entry_C* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "OnHovered__DelegateSignature");

	Params::UWid_LoadDay_List_Entry_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.OnDaySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWid_LoadDay_List_Entry_C::OnDaySelected__DelegateSignature(const class FString& SaveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LoadDay_List_Entry_C", "OnDaySelected__DelegateSignature");

	Params::UWid_LoadDay_List_Entry_C_OnDaySelected__DelegateSignature_Params Parms{};

	Parms.SaveName = SaveName;

	UObject::ProcessEvent(Func, &Parms);

}

}



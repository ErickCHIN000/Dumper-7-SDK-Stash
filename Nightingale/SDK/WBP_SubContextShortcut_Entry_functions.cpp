#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C
// (None)

class UClass* UWBP_SubContextShortcut_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SubContextShortcut_Entry_C");

	return Clss;
}


// WBP_SubContextShortcut_Entry_C WBP_SubContextShortcut_Entry.Default__WBP_SubContextShortcut_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SubContextShortcut_Entry_C* UWBP_SubContextShortcut_Entry_C::GetDefaultObj()
{
	static class UWBP_SubContextShortcut_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SubContextShortcut_Entry_C*>(UWBP_SubContextShortcut_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SubContextShortcut_Entry_C::GetDefaultFocusWidget(class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "GetDefaultFocusWidget");

	Params::UWBP_SubContextShortcut_Entry_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextShortcut_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "PreConstruct");

	Params::UWBP_SubContextShortcut_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SubContextShortcut_Entry_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "OnMouseEnter");

	Params::UWBP_SubContextShortcut_Entry_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SubContextShortcut_Entry_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "OnMouseLeave");

	Params::UWBP_SubContextShortcut_Entry_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_SubContextShortcut_Entry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "OnAddedToFocusPath");

	Params::UWBP_SubContextShortcut_Entry_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_SubContextShortcut_Entry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "OnRemovedFromFocusPath");

	Params::UWBP_SubContextShortcut_Entry_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.BndEvt__WBP_SubContextShortcut_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextShortcut_Entry_C::BndEvt__WBP_SubContextShortcut_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "BndEvt__WBP_SubContextShortcut_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_SubContextShortcut_Entry_C_BndEvt__WBP_SubContextShortcut_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.ExecuteUbergraph_WBP_SubContextShortcut_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)

void UWBP_SubContextShortcut_Entry_C::ExecuteUbergraph_WBP_SubContextShortcut_Entry(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "ExecuteUbergraph_WBP_SubContextShortcut_Entry");

	Params::UWBP_SubContextShortcut_Entry_C_ExecuteUbergraph_WBP_SubContextShortcut_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.SubContextShortcut_Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextShortcut_Entry_C::SubContextShortcut_Hovered__DelegateSignature(const struct FGameplayTag& GameplayTag, bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "SubContextShortcut_Hovered__DelegateSignature");

	Params::UWBP_SubContextShortcut_Entry_C_SubContextShortcut_Hovered__DelegateSignature_Params Parms{};

	Parms.GameplayTag = GameplayTag;
	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubContextShortcut_Entry.WBP_SubContextShortcut_Entry_C.SubContextShortcut_Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                UI_Button_Shortcut_Tag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_SubContextShortcut_Entry_C::SubContextShortcut_Selected__DelegateSignature(const struct FGameplayTag& UI_Button_Shortcut_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubContextShortcut_Entry_C", "SubContextShortcut_Selected__DelegateSignature");

	Params::UWBP_SubContextShortcut_Entry_C_SubContextShortcut_Selected__DelegateSignature_Params Parms{};

	Parms.UI_Button_Shortcut_Tag = UI_Button_Shortcut_Tag;

	UObject::ProcessEvent(Func, &Parms);

}

}



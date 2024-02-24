#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C
// (None)

class UClass* UWBP_Popup_Codex_TemplateBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Popup_Codex_TemplateBase_C");

	return Clss;
}


// WBP_Popup_Codex_TemplateBase_C WBP_Popup_Codex_TemplateBase.Default__WBP_Popup_Codex_TemplateBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Popup_Codex_TemplateBase_C* UWBP_Popup_Codex_TemplateBase_C::GetDefaultObj()
{
	static class UWBP_Popup_Codex_TemplateBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Popup_Codex_TemplateBase_C*>(UWBP_Popup_Codex_TemplateBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_OnAnalogMoved_EventReplyStructure                       (None)

struct FEventReply UWBP_Popup_Codex_TemplateBase_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_OnAnalogMoved_EventReplyStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "OnAnalogValueChanged");

	Params::UWBP_Popup_Codex_TemplateBase_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_OnAnalogMoved_EventReplyStructure = CallFunc_OnAnalogMoved_EventReplyStructure;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.GetScrollBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_Codex_TemplateBase_C::GetScrollBox(class UScrollBox** ScrollBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "GetScrollBox");

	Params::UWBP_Popup_Codex_TemplateBase_C_GetScrollBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScrollBox != nullptr)
		*ScrollBox = Parms.ScrollBox;

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.OnAnalogMoved
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   Geometry                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           AnalogEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 EventReplyStructure                                              (Parm, OutParm)
// double                             ScrollScale                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  ScrollBox                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Max_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_Codex_TemplateBase_C::OnAnalogMoved(const struct FGeometry& Geometry, const struct FAnalogInputEvent& AnalogEvent, struct FEventReply* EventReplyStructure, double ScrollScale, class UScrollBox* ScrollBox, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "OnAnalogMoved");

	Params::UWBP_Popup_Codex_TemplateBase_C_OnAnalogMoved_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AnalogEvent = AnalogEvent;
	Parms.ScrollScale = ScrollScale;
	Parms.ScrollBox = ScrollBox;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_FClamp_Max_ImplicitCast = CallFunc_FClamp_Max_ImplicitCast;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EventReplyStructure != nullptr)
		*EventReplyStructure = std::move(Parms.EventReplyStructure);

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.PlayCloseAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_TemplateBase_C::PlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "PlayCloseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.PlayOpenAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_TemplateBase_C::PlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "PlayOpenAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.Button3_Clicked_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_TemplateBase_C::Button3_Clicked_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "Button3_Clicked_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.Button2_Clicked_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_TemplateBase_C::Button2_Clicked_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "Button2_Clicked_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C.Button1_Clicked_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_TemplateBase_C::Button1_Clicked_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_TemplateBase_C", "Button1_Clicked_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



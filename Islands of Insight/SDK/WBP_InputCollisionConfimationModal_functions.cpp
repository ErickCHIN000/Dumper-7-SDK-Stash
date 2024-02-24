#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C
// (None)

class UClass* UWBP_InputCollisionConfimationModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InputCollisionConfimationModal_C");

	return Clss;
}


// WBP_InputCollisionConfimationModal_C WBP_InputCollisionConfimationModal.Default__WBP_InputCollisionConfimationModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InputCollisionConfimationModal_C* UWBP_InputCollisionConfimationModal_C::GetDefaultObj()
{
	static class UWBP_InputCollisionConfimationModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InputCollisionConfimationModal_C*>(UWBP_InputCollisionConfimationModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UWBP_InputCollisionConfimationModal_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "OnKeyDown");

	Params::UWBP_InputCollisionConfimationModal_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InputCollisionConfimationModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "PreConstruct");

	Params::UWBP_InputCollisionConfimationModal_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.BndEvt__WBP_InputCollisionConfimationModal_ButtonKeep_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InputCollisionConfimationModal_C::BndEvt__WBP_InputCollisionConfimationModal_ButtonKeep_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "BndEvt__WBP_InputCollisionConfimationModal_ButtonKeep_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.BndEvt__WBP_InputCollisionConfimationModal_ButtonErase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InputCollisionConfimationModal_C::BndEvt__WBP_InputCollisionConfimationModal_ButtonErase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "BndEvt__WBP_InputCollisionConfimationModal_ButtonErase_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.BndEvt__WBP_InputCollisionConfimationModal_ButtonCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_InputCollisionConfimationModal_C::BndEvt__WBP_InputCollisionConfimationModal_ButtonCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "BndEvt__WBP_InputCollisionConfimationModal_ButtonCancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.ExecuteUbergraph_WBP_InputCollisionConfimationModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InputCollisionConfimationModal_C::ExecuteUbergraph_WBP_InputCollisionConfimationModal(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "ExecuteUbergraph_WBP_InputCollisionConfimationModal");

	Params::UWBP_InputCollisionConfimationModal_C_ExecuteUbergraph_WBP_InputCollisionConfimationModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.ClickedCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InputCollisionConfimationModal_C::ClickedCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "ClickedCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.ClickedErase__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InputCollisionConfimationModal_C::ClickedErase__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "ClickedErase__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InputCollisionConfimationModal.WBP_InputCollisionConfimationModal_C.ClickedKeep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InputCollisionConfimationModal_C::ClickedKeep__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InputCollisionConfimationModal_C", "ClickedKeep__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



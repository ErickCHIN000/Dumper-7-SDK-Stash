#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C
// (None)

class UClass* UWBP_DB_Shard_sw_ListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Shard_sw_ListEntry_C");

	return Clss;
}


// WBP_DB_Shard_sw_ListEntry_C WBP_DB_Shard_sw_ListEntry.Default__WBP_DB_Shard_sw_ListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Shard_sw_ListEntry_C* UWBP_DB_Shard_sw_ListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_Shard_sw_ListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Shard_sw_ListEntry_C*>(UWBP_DB_Shard_sw_ListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.FocusDefaultWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_sw_ListEntry_C::FocusDefaultWidget(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "FocusDefaultWidget");

	Params::UWBP_DB_Shard_sw_ListEntry_C_FocusDefaultWidget_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_DB_Shard_sw_ListEntry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "OnFocusReceived");

	Params::UWBP_DB_Shard_sw_ListEntry_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.Get Select Is Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_DB_Shard_sw_ListEntry_C::Get_Select_Is_Enabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "Get Select Is Enabled");

	Params::UWBP_DB_Shard_sw_ListEntry_C_Get_Select_Is_Enabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_ListEntry_C::BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_ListEntry_C::BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_ListEntry_C::BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "BndEvt__WBP_ListEntry_Shard_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_ListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.ExecuteUbergraph_WBP_DB_Shard_sw_ListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_DB_Shard_sw_ListEntry_C::ExecuteUbergraph_WBP_DB_Shard_sw_ListEntry(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "ExecuteUbergraph_WBP_DB_Shard_sw_ListEntry");

	Params::UWBP_DB_Shard_sw_ListEntry_C_ExecuteUbergraph_WBP_DB_Shard_sw_ListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_ListEntry.WBP_DB_Shard_sw_ListEntry_C.SelectClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DB_Shard_sw_ListEntry_C::SelectClicked__DelegateSignature(const class FString& Shard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_ListEntry_C", "SelectClicked__DelegateSignature");

	Params::UWBP_DB_Shard_sw_ListEntry_C_SelectClicked__DelegateSignature_Params Parms{};

	Parms.Shard = Shard;

	UObject::ProcessEvent(Func, &Parms);

}

}



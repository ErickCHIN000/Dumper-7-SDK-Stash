#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_ChatterDebugEntry.wid_ChatterDebugEntry_C
// (None)

class UClass* UWid_ChatterDebugEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_ChatterDebugEntry_C");

	return Clss;
}


// wid_ChatterDebugEntry_C wid_ChatterDebugEntry.Default__wid_ChatterDebugEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_ChatterDebugEntry_C* UWid_ChatterDebugEntry_C::GetDefaultObj()
{
	static class UWid_ChatterDebugEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_ChatterDebugEntry_C*>(UWid_ChatterDebugEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_ChatterDebugEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_ChatterDebugEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_ChatterDebugEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_ChatterDebugEntry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ExecuteUbergraph_wid_ChatterDebugEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UWid_ChatterDebugEntry_C::ExecuteUbergraph_wid_ChatterDebugEntry(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "ExecuteUbergraph_wid_ChatterDebugEntry");

	Params::UWid_ChatterDebugEntry_C_ExecuteUbergraph_wid_ChatterDebugEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ChatterUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_ChatterDebugEntry_C::ChatterUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "ChatterUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ChatterHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ChatterId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ChatterDebugEntry_C::ChatterHovered__DelegateSignature(class FName ChatterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "ChatterHovered__DelegateSignature");

	Params::UWid_ChatterDebugEntry_C_ChatterHovered__DelegateSignature_Params Parms{};

	Parms.ChatterId = ChatterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_ChatterDebugEntry.wid_ChatterDebugEntry_C.ChatterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ChatterId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ChatterName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_ChatterDebugEntry_C::ChatterSelected__DelegateSignature(class FName ChatterId, class FName ChatterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_ChatterDebugEntry_C", "ChatterSelected__DelegateSignature");

	Params::UWid_ChatterDebugEntry_C_ChatterSelected__DelegateSignature_Params Parms{};

	Parms.ChatterId = ChatterId;
	Parms.ChatterName = ChatterName;

	UObject::ProcessEvent(Func, &Parms);

}

}



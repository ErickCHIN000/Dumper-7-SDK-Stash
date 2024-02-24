#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DebugBasicTextButtonEntry.wid_DebugBasicTextButtonEntry_C
// (None)

class UClass* UWid_DebugBasicTextButtonEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DebugBasicTextButtonEntry_C");

	return Clss;
}


// wid_DebugBasicTextButtonEntry_C wid_DebugBasicTextButtonEntry.Default__wid_DebugBasicTextButtonEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DebugBasicTextButtonEntry_C* UWid_DebugBasicTextButtonEntry_C::GetDefaultObj()
{
	static class UWid_DebugBasicTextButtonEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DebugBasicTextButtonEntry_C*>(UWid_DebugBasicTextButtonEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DebugBasicTextButtonEntry.wid_DebugBasicTextButtonEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DebugBasicTextButtonEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugBasicTextButtonEntry_C", "PreConstruct");

	Params::UWid_DebugBasicTextButtonEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugBasicTextButtonEntry.wid_DebugBasicTextButtonEntry_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_DebugBasicTextButtonEntry_C::BndEvt__Button_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugBasicTextButtonEntry_C", "BndEvt__Button_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DebugBasicTextButtonEntry.wid_DebugBasicTextButtonEntry_C.ExecuteUbergraph_wid_DebugBasicTextButtonEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DebugBasicTextButtonEntry_C::ExecuteUbergraph_wid_DebugBasicTextButtonEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugBasicTextButtonEntry_C", "ExecuteUbergraph_wid_DebugBasicTextButtonEntry");

	Params::UWid_DebugBasicTextButtonEntry_C_ExecuteUbergraph_wid_DebugBasicTextButtonEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DebugBasicTextButtonEntry.wid_DebugBasicTextButtonEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_DebugBasicTextButtonEntry_C*Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DebugBasicTextButtonEntry_C::OnClicked__DelegateSignature(class UWid_DebugBasicTextButtonEntry_C* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DebugBasicTextButtonEntry_C", "OnClicked__DelegateSignature");

	Params::UWid_DebugBasicTextButtonEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}

}



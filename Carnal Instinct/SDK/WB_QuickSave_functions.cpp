#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_QuickSave.WB_QuickSave_C
// (None)

class UClass* UWB_QuickSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_QuickSave_C");

	return Clss;
}


// WB_QuickSave_C WB_QuickSave.Default__WB_QuickSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_QuickSave_C* UWB_QuickSave_C::GetDefaultObj()
{
	static class UWB_QuickSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_QuickSave_C*>(UWB_QuickSave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_QuickSave.WB_QuickSave_C.Finished_9E03838F425C80E2A2E8EB8503A5DB3A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_QuickSave_C::Finished_9E03838F425C80E2A2E8EB8503A5DB3A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_QuickSave_C", "Finished_9E03838F425C80E2A2E8EB8503A5DB3A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_QuickSave.WB_QuickSave_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_QuickSave_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_QuickSave_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_QuickSave.WB_QuickSave_C.ExecuteUbergraph_WB_QuickSave
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_QuickSave_C::ExecuteUbergraph_WB_QuickSave(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_QuickSave_C", "ExecuteUbergraph_WB_QuickSave");

	Params::UWB_QuickSave_C_ExecuteUbergraph_WB_QuickSave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



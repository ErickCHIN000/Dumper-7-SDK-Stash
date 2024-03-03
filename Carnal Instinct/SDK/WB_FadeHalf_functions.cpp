#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_FadeHalf.WB_FadeHalf_C
// (None)

class UClass* UWB_FadeHalf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_FadeHalf_C");

	return Clss;
}


// WB_FadeHalf_C WB_FadeHalf.Default__WB_FadeHalf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_FadeHalf_C* UWB_FadeHalf_C::GetDefaultObj()
{
	static class UWB_FadeHalf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_FadeHalf_C*>(UWB_FadeHalf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_FadeHalf.WB_FadeHalf_C.Finished_28B3C328466A35E8EE209EB88C9CA9BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_FadeHalf_C::Finished_28B3C328466A35E8EE209EB88C9CA9BF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FadeHalf_C", "Finished_28B3C328466A35E8EE209EB88C9CA9BF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FadeHalf.WB_FadeHalf_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_FadeHalf_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FadeHalf_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_FadeHalf.WB_FadeHalf_C.ExecuteUbergraph_WB_FadeHalf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_FadeHalf_C::ExecuteUbergraph_WB_FadeHalf(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_FadeHalf_C", "ExecuteUbergraph_WB_FadeHalf");

	Params::UWB_FadeHalf_C_ExecuteUbergraph_WB_FadeHalf_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



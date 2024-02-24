#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FX_ShelterCapture.BP_FX_ShelterCapture_C
// (Actor)

class UClass* ABP_FX_ShelterCapture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FX_ShelterCapture_C");

	return Clss;
}


// BP_FX_ShelterCapture_C BP_FX_ShelterCapture.Default__BP_FX_ShelterCapture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FX_ShelterCapture_C* ABP_FX_ShelterCapture_C::GetDefaultObj()
{
	static class ABP_FX_ShelterCapture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FX_ShelterCapture_C*>(ABP_FX_ShelterCapture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.CaptureScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FX_ShelterCapture_C::CaptureScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_ShelterCapture_C", "CaptureScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FX_ShelterCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_ShelterCapture_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FX_ShelterCapture.BP_FX_ShelterCapture_C.ExecuteUbergraph_BP_FX_ShelterCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_FX_ShelterCapture_C::ExecuteUbergraph_BP_FX_ShelterCapture(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_ShelterCapture_C", "ExecuteUbergraph_BP_FX_ShelterCapture");

	Params::ABP_FX_ShelterCapture_C_ExecuteUbergraph_BP_FX_ShelterCapture_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WallLight.Buildable_WallLight_C
// (Actor)

class UClass* ABuildable_WallLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WallLight_C");

	return Clss;
}


// Buildable_WallLight_C Buildable_WallLight.Default__Buildable_WallLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WallLight_C* ABuildable_WallLight_C::GetDefaultObj()
{
	static class ABuildable_WallLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WallLight_C*>(ABuildable_WallLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buildable_WallLight.Buildable_WallLight_C.GetPickupName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)

void ABuildable_WallLight_C::GetPickupName(class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "GetPickupName");

	Params::ABuildable_WallLight_C_GetPickupName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function Buildable_WallLight.Buildable_WallLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABuildable_WallLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_WallLight.Buildable_WallLight_C.On
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_WallLight_C::On()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "On");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_WallLight.Buildable_WallLight_C.Off
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_WallLight_C::Off()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "Off");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_WallLight.Buildable_WallLight_C.LightCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_WallLight_C::LightCallback(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "LightCallback");

	Params::ABuildable_WallLight_C_LightCallback_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_WallLight.Buildable_WallLight_C.BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsBeyondLastLayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LayerIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSeen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_WallLight_C::BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature");

	Params::ABuildable_WallLight_C_BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature_Params Parms{};

	Parms.bIsBeyondLastLayer = bIsBeyondLastLayer;
	Parms.LayerIndex = LayerIndex;
	Parms.bIsSeen = bIsSeen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_WallLight.Buildable_WallLight_C.ExecuteUbergraph_Buildable_WallLight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsBeyondLastLayer                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_LayerIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSeen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_WallLight_C::ExecuteUbergraph_Buildable_WallLight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_NewValue, bool CallFunc_GetBoolCVar_ReturnValue, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_WallLight_C", "ExecuteUbergraph_Buildable_WallLight");

	Params::ABuildable_WallLight_C_ExecuteUbergraph_Buildable_WallLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bIsBeyondLastLayer = K2Node_ComponentBoundEvent_bIsBeyondLastLayer;
	Parms.K2Node_ComponentBoundEvent_LayerIndex = K2Node_ComponentBoundEvent_LayerIndex;
	Parms.K2Node_ComponentBoundEvent_bIsSeen = K2Node_ComponentBoundEvent_bIsSeen;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


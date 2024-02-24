#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Benchmark.wid_Benchmark_C
// (None)

class UClass* UWid_Benchmark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Benchmark_C");

	return Clss;
}


// wid_Benchmark_C wid_Benchmark.Default__wid_Benchmark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Benchmark_C* UWid_Benchmark_C::GetDefaultObj()
{
	static class UWid_Benchmark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Benchmark_C*>(UWid_Benchmark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Benchmark.wid_Benchmark_C.GetCurrentState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UClass* UWid_Benchmark_C::GetCurrentState(class UClass* CallFunc_GetObjectClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_C", "GetCurrentState");

	Params::UWid_Benchmark_C_GetCurrentState_Params Parms{};

	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_Benchmark.wid_Benchmark_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Benchmark_C::SetState(class UClass* NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_C", "SetState");

	Params::UWid_Benchmark_C_SetState_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Benchmark.wid_Benchmark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Benchmark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Benchmark.wid_Benchmark_C.ExecuteUbergraph_wid_Benchmark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UClass*                      K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_Benchmark_State_C>K2Node_DynamicCast_AsWid_Benchmark_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_Benchmark_State_C>K2Node_DynamicCast_AsWid_Benchmark_State_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Benchmark_C::ExecuteUbergraph_wid_Benchmark(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UClass* K2Node_CustomEvent_NewState, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IWid_Benchmark_State_C> K2Node_DynamicCast_AsWid_Benchmark_State, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IWid_Benchmark_State_C> K2Node_DynamicCast_AsWid_Benchmark_State_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Benchmark_C", "ExecuteUbergraph_wid_Benchmark");

	Params::UWid_Benchmark_C_ExecuteUbergraph_wid_Benchmark_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Benchmark_State = K2Node_DynamicCast_AsWid_Benchmark_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWid_Benchmark_State_1 = K2Node_DynamicCast_AsWid_Benchmark_State_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}



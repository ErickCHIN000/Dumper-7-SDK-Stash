#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C
// (None)

class UClass* UBP_VehicleEngineSoundController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VehicleEngineSoundController_C");

	return Clss;
}


// BP_VehicleEngineSoundController_C BP_VehicleEngineSoundController.Default__BP_VehicleEngineSoundController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VehicleEngineSoundController_C* UBP_VehicleEngineSoundController_C::GetDefaultObj()
{
	static class UBP_VehicleEngineSoundController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VehicleEngineSoundController_C*>(UBP_VehicleEngineSoundController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.ResolveCarWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_CarVariables_C*         CarWidget                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CarVariables_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_VehicleEngineSoundController_C::ResolveCarWidget(class UUMG_CarVariables_C** CarWidget, class UUMG_CarVariables_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "ResolveCarWidget");

	Params::UBP_VehicleEngineSoundController_C_ResolveCarWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CarWidget != nullptr)
		*CarWidget = Parms.CarWidget;

}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VehicleEngineSoundController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.OnRepDriverChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCharacter*                NewDriver                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VehicleEngineSoundController_C::OnRepDriverChanged(class AGGCharacter* NewDriver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "OnRepDriverChanged");

	Params::UBP_VehicleEngineSoundController_C_OnRepDriverChanged_Params Parms{};

	Parms.NewDriver = NewDriver;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.OnGearChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PreviousGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewGear                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VehicleEngineSoundController_C::OnGearChanged(int32 PreviousGear, int32 NewGear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "OnGearChanged");

	Params::UBP_VehicleEngineSoundController_C_OnGearChanged_Params Parms{};

	Parms.PreviousGear = PreviousGear;
	Parms.NewGear = NewGear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.CalculateAudioRPM
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VehicleEngineSoundController_C::CalculateAudioRPM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "CalculateAudioRPM");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VehicleEngineSoundController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "ReceiveTick");

	Params::UBP_VehicleEngineSoundController_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VehicleEngineSoundController.BP_VehicleEngineSoundController_C.ExecuteUbergraph_BP_VehicleEngineSoundController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PreviousGear                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewGear                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDebugging_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_CarVariables_C*         CallFunc_ResolveCarWidget_CarWidget                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentGear_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEngineRotationSpeed_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCharacter*                K2Node_CustomEvent_NewDriver                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEngineAudioRPMInput        K2Node_MakeStruct_EngineAudioRPMInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEngineAudioRPMOutput       CallFunc_CalculateAudioRPM_Internal_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSpeedKPH_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_WeightedMovingAverage_Float_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_VehicleEngineSoundController_C::ExecuteUbergraph_BP_VehicleEngineSoundController(int32 EntryPoint, int32 K2Node_Event_PreviousGear, int32 K2Node_Event_NewGear, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDebugging_ReturnValue, class UUMG_CarVariables_C* CallFunc_ResolveCarWidget_CarWidget, float K2Node_Event_DeltaSeconds, int32 CallFunc_GetCurrentGear_ReturnValue, float CallFunc_GetEngineRotationSpeed_ReturnValue, float CallFunc_Abs_ReturnValue, class AGGCharacter* K2Node_CustomEvent_NewDriver, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FEngineAudioRPMInput& K2Node_MakeStruct_EngineAudioRPMInput, bool CallFunc_IsValid_ReturnValue_2, const struct FEngineAudioRPMOutput& CallFunc_CalculateAudioRPM_Internal_ReturnValue, int32 CallFunc_GetSpeedKPH_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_WeightedMovingAverage_Float_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VehicleEngineSoundController_C", "ExecuteUbergraph_BP_VehicleEngineSoundController");

	Params::UBP_VehicleEngineSoundController_C_ExecuteUbergraph_BP_VehicleEngineSoundController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PreviousGear = K2Node_Event_PreviousGear;
	Parms.K2Node_Event_NewGear = K2Node_Event_NewGear;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDebugging_ReturnValue = CallFunc_IsDebugging_ReturnValue;
	Parms.CallFunc_ResolveCarWidget_CarWidget = CallFunc_ResolveCarWidget_CarWidget;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCurrentGear_ReturnValue = CallFunc_GetCurrentGear_ReturnValue;
	Parms.CallFunc_GetEngineRotationSpeed_ReturnValue = CallFunc_GetEngineRotationSpeed_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.K2Node_CustomEvent_NewDriver = K2Node_CustomEvent_NewDriver;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_MakeStruct_EngineAudioRPMInput = K2Node_MakeStruct_EngineAudioRPMInput;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CalculateAudioRPM_Internal_ReturnValue = CallFunc_CalculateAudioRPM_Internal_ReturnValue;
	Parms.CallFunc_GetSpeedKPH_ReturnValue = CallFunc_GetSpeedKPH_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_WeightedMovingAverage_Float_ReturnValue = CallFunc_WeightedMovingAverage_Float_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FirstStartup.BP_FirstStartup_C
// (Actor)

class UClass* ABP_FirstStartup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FirstStartup_C");

	return Clss;
}


// BP_FirstStartup_C BP_FirstStartup.Default__BP_FirstStartup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FirstStartup_C* ABP_FirstStartup_C::GetDefaultObj()
{
	static class ABP_FirstStartup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FirstStartup_C*>(ABP_FirstStartup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FirstStartup.BP_FirstStartup_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FirstStartup_C::Remove(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstStartup_C", "Remove");

	Params::ABP_FirstStartup_C_Remove_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirstStartup.BP_FirstStartup_C.BrightnessCalibration_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MainMenu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FirstStartup_C::BrightnessCalibration_Enable(class AActor* MainMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstStartup_C", "BrightnessCalibration_Enable");

	Params::ABP_FirstStartup_C_BrightnessCalibration_Enable_Params Parms{};

	Parms.MainMenu = MainMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FirstStartup.BP_FirstStartup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FirstStartup_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstStartup_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FirstStartup.BP_FirstStartup_C.ExecuteUbergraph_BP_FirstStartup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_MainMenu                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StartupCalibration_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FirstStartup_C::ExecuteUbergraph_BP_FirstStartup(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* K2Node_CustomEvent_MainMenu, class UUI_StartupCalibration_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstStartup_C", "ExecuteUbergraph_BP_FirstStartup");

	Params::ABP_FirstStartup_C_ExecuteUbergraph_BP_FirstStartup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_MainMenu = K2Node_CustomEvent_MainMenu;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RespawnTimer.RespawnTimer_C
// (None)

class UClass* URespawnTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RespawnTimer_C");

	return Clss;
}


// RespawnTimer_C RespawnTimer.Default__RespawnTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URespawnTimer_C* URespawnTimer_C::GetDefaultObj()
{
	static class URespawnTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URespawnTimer_C*>(URespawnTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RespawnTimer.RespawnTimer_C.Get_RespawnCounter_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText URespawnTimer_C::Get_RespawnCounter_Text_0(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnTimer_C", "Get_RespawnCounter_Text_0");

	Params::URespawnTimer_C_Get_RespawnCounter_Text_0_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RespawnTimer.RespawnTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URespawnTimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnTimer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RespawnTimer.RespawnTimer_C.ExecuteUbergraph_RespawnTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URespawnTimer_C::ExecuteUbergraph_RespawnTimer(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RespawnTimer_C", "ExecuteUbergraph_RespawnTimer");

	Params::URespawnTimer_C_ExecuteUbergraph_RespawnTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



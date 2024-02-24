#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rain_StormMode_Cathedral.BP_Rain_StormMode_Cathedral_C
// (Actor)

class UClass* ABP_Rain_StormMode_Cathedral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rain_StormMode_Cathedral_C");

	return Clss;
}


// BP_Rain_StormMode_Cathedral_C BP_Rain_StormMode_Cathedral.Default__BP_Rain_StormMode_Cathedral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rain_StormMode_Cathedral_C* ABP_Rain_StormMode_Cathedral_C::GetDefaultObj()
{
	static class ABP_Rain_StormMode_Cathedral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rain_StormMode_Cathedral_C*>(ABP_Rain_StormMode_Cathedral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Rain_StormMode_Cathedral.BP_Rain_StormMode_Cathedral_C.ApplyRainMat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rain_StormMode_Cathedral_C::ApplyRainMat(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rain_StormMode_Cathedral_C", "ApplyRainMat");

	Params::ABP_Rain_StormMode_Cathedral_C_ApplyRainMat_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Rain_StormMode_Cathedral.BP_Rain_StormMode_Cathedral_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Rain_StormMode_Cathedral_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rain_StormMode_Cathedral_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Rain_StormMode_Cathedral.BP_Rain_StormMode_Cathedral_C.ExecuteUbergraph_BP_Rain_StormMode_Cathedral
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rain_StormMode_Cathedral_C::ExecuteUbergraph_BP_Rain_StormMode_Cathedral(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rain_StormMode_Cathedral_C", "ExecuteUbergraph_BP_Rain_StormMode_Cathedral");

	Params::ABP_Rain_StormMode_Cathedral_C_ExecuteUbergraph_BP_Rain_StormMode_Cathedral_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



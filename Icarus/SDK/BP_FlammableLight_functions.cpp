#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableLight.BP_FlammableLight_C
// (Actor)

class UClass* ABP_FlammableLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableLight_C");

	return Clss;
}


// BP_FlammableLight_C BP_FlammableLight.Default__BP_FlammableLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlammableLight_C* ABP_FlammableLight_C::GetDefaultObj()
{
	static class ABP_FlammableLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlammableLight_C*>(ABP_FlammableLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableLight.BP_FlammableLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FlammableLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlammableLight.BP_FlammableLight_C.FlammableLightStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlammableLight_C::FlammableLightStart(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableLight_C", "FlammableLightStart");

	Params::ABP_FlammableLight_C_FlammableLightStart_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FlammableLight.BP_FlammableLight_C.ExecuteUbergraph_BP_FlammableLight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlammableLight_C::ExecuteUbergraph_BP_FlammableLight(int32 EntryPoint, float K2Node_CustomEvent_Radius, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableLight_C", "ExecuteUbergraph_BP_FlammableLight");

	Params::ABP_FlammableLight_C_ExecuteUbergraph_BP_FlammableLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



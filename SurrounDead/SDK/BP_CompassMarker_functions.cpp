#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CompassMarker.BP_CompassMarker_C
// (Actor)

class UClass* ABP_CompassMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CompassMarker_C");

	return Clss;
}


// BP_CompassMarker_C BP_CompassMarker.Default__BP_CompassMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CompassMarker_C* ABP_CompassMarker_C::GetDefaultObj()
{
	static class ABP_CompassMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CompassMarker_C*>(ABP_CompassMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CompassMarker.BP_CompassMarker_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CompassMarker_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompassMarker_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CompassMarker.BP_CompassMarker_C.ExecuteUbergraph_BP_CompassMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CompassMarker_C::ExecuteUbergraph_BP_CompassMarker(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompassMarker_C", "ExecuteUbergraph_BP_CompassMarker");

	Params::ABP_CompassMarker_C_ExecuteUbergraph_BP_CompassMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



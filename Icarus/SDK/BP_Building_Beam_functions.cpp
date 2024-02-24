#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Beam.BP_Building_Beam_C
// (Actor)

class UClass* ABP_Building_Beam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Beam_C");

	return Clss;
}


// BP_Building_Beam_C BP_Building_Beam.Default__BP_Building_Beam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Beam_C* ABP_Building_Beam_C::GetDefaultObj()
{
	static class ABP_Building_Beam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Beam_C*>(ABP_Building_Beam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Beam.BP_Building_Beam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Building_Beam_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Building_Beam.BP_Building_Beam_C.ExecuteUbergraph_BP_Building_Beam
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Beam_C::ExecuteUbergraph_BP_Building_Beam(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Beam_C", "ExecuteUbergraph_BP_Building_Beam");

	Params::ABP_Building_Beam_C_ExecuteUbergraph_BP_Building_Beam_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



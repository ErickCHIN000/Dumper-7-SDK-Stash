#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_rad_RadioactiveZoneAttractor_01.ba_rad_RadioactiveZoneAttractor_01_C
// (Actor)

class UClass* Aba_rad_RadioactiveZoneAttractor_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_rad_RadioactiveZoneAttractor_01_C");

	return Clss;
}


// ba_rad_RadioactiveZoneAttractor_01_C ba_rad_RadioactiveZoneAttractor_01.Default__ba_rad_RadioactiveZoneAttractor_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_rad_RadioactiveZoneAttractor_01_C* Aba_rad_RadioactiveZoneAttractor_01_C::GetDefaultObj()
{
	static class Aba_rad_RadioactiveZoneAttractor_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_rad_RadioactiveZoneAttractor_01_C*>(Aba_rad_RadioactiveZoneAttractor_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_rad_RadioactiveZoneAttractor_01.ba_rad_RadioactiveZoneAttractor_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_rad_RadioactiveZoneAttractor_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_RadioactiveZoneAttractor_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_rad_RadioactiveZoneAttractor_01.ba_rad_RadioactiveZoneAttractor_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_rad_RadioactiveZoneAttractor_01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_RadioactiveZoneAttractor_01_C", "ReceiveTick");

	Params::Aba_rad_RadioactiveZoneAttractor_01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_rad_RadioactiveZoneAttractor_01.ba_rad_RadioactiveZoneAttractor_01_C.ExecuteUbergraph_ba_rad_RadioactiveZoneAttractor_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_rad_RadioactiveZoneAttractor_01_C::ExecuteUbergraph_ba_rad_RadioactiveZoneAttractor_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_rad_RadioactiveZoneAttractor_01_C", "ExecuteUbergraph_ba_rad_RadioactiveZoneAttractor_01");

	Params::Aba_rad_RadioactiveZoneAttractor_01_C_ExecuteUbergraph_ba_rad_RadioactiveZoneAttractor_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



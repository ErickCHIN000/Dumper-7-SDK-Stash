#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Stress_Stage_3.Effects_Stress_Stage_3_C
// (Actor)

class UClass* AEffects_Stress_Stage_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Stress_Stage_3_C");

	return Clss;
}


// Effects_Stress_Stage_3_C Effects_Stress_Stage_3.Default__Effects_Stress_Stage_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Stress_Stage_3_C* AEffects_Stress_Stage_3_C::GetDefaultObj()
{
	static class AEffects_Stress_Stage_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Stress_Stage_3_C*>(AEffects_Stress_Stage_3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Stress_Stage_3.Effects_Stress_Stage_3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Stress_Stage_3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Stress_Stage_3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Stress_Stage_3.Effects_Stress_Stage_3_C.ExecuteUbergraph_Effects_Stress_Stage_3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Stress_Stage_3_C::ExecuteUbergraph_Effects_Stress_Stage_3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Stress_Stage_3_C", "ExecuteUbergraph_Effects_Stress_Stage_3");

	Params::AEffects_Stress_Stage_3_C_ExecuteUbergraph_Effects_Stress_Stage_3_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



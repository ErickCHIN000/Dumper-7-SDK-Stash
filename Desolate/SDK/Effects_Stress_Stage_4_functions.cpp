#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Stress_Stage_4.Effects_Stress_Stage_4_C
// (Actor)

class UClass* AEffects_Stress_Stage_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Stress_Stage_4_C");

	return Clss;
}


// Effects_Stress_Stage_4_C Effects_Stress_Stage_4.Default__Effects_Stress_Stage_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Stress_Stage_4_C* AEffects_Stress_Stage_4_C::GetDefaultObj()
{
	static class AEffects_Stress_Stage_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Stress_Stage_4_C*>(AEffects_Stress_Stage_4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Stress_Stage_4.Effects_Stress_Stage_4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Stress_Stage_4_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Stress_Stage_4_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Stress_Stage_4.Effects_Stress_Stage_4_C.ExecuteUbergraph_Effects_Stress_Stage_4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Stress_Stage_4_C::ExecuteUbergraph_Effects_Stress_Stage_4(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Stress_Stage_4_C", "ExecuteUbergraph_Effects_Stress_Stage_4");

	Params::AEffects_Stress_Stage_4_C_ExecuteUbergraph_Effects_Stress_Stage_4_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



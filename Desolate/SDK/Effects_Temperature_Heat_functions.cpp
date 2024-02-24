#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Temperature_Heat.Effects_Temperature_Heat_C
// (Actor)

class UClass* AEffects_Temperature_Heat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Temperature_Heat_C");

	return Clss;
}


// Effects_Temperature_Heat_C Effects_Temperature_Heat.Default__Effects_Temperature_Heat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Temperature_Heat_C* AEffects_Temperature_Heat_C::GetDefaultObj()
{
	static class AEffects_Temperature_Heat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Temperature_Heat_C*>(AEffects_Temperature_Heat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Temperature_Heat.Effects_Temperature_Heat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Temperature_Heat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Temperature_Heat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Temperature_Heat.Effects_Temperature_Heat_C.ExecuteUbergraph_Effects_Temperature_Heat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Temperature_Heat_C::ExecuteUbergraph_Effects_Temperature_Heat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Temperature_Heat_C", "ExecuteUbergraph_Effects_Temperature_Heat");

	Params::AEffects_Temperature_Heat_C_ExecuteUbergraph_Effects_Temperature_Heat_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



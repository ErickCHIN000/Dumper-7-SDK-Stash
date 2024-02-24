#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Temperature_Frostbite.Effects_Temperature_Frostbite_C
// (Actor)

class UClass* AEffects_Temperature_Frostbite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Temperature_Frostbite_C");

	return Clss;
}


// Effects_Temperature_Frostbite_C Effects_Temperature_Frostbite.Default__Effects_Temperature_Frostbite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Temperature_Frostbite_C* AEffects_Temperature_Frostbite_C::GetDefaultObj()
{
	static class AEffects_Temperature_Frostbite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Temperature_Frostbite_C*>(AEffects_Temperature_Frostbite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_Temperature_Frostbite.Effects_Temperature_Frostbite_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_Temperature_Frostbite_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Temperature_Frostbite_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_Temperature_Frostbite.Effects_Temperature_Frostbite_C.ExecuteUbergraph_Effects_Temperature_Frostbite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_Temperature_Frostbite_C::ExecuteUbergraph_Effects_Temperature_Frostbite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_Temperature_Frostbite_C", "ExecuteUbergraph_Effects_Temperature_Frostbite");

	Params::AEffects_Temperature_Frostbite_C_ExecuteUbergraph_Effects_Temperature_Frostbite_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



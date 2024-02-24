#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C
// (Actor)

class UClass* AAuxActor_Shaman_Maelstorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_Shaman_Maelstorm_C");

	return Clss;
}


// AuxActor_Shaman_Maelstorm_C AuxActor_Shaman_Maelstorm.Default__AuxActor_Shaman_Maelstorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_Shaman_Maelstorm_C* AAuxActor_Shaman_Maelstorm_C::GetDefaultObj()
{
	static class AAuxActor_Shaman_Maelstorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_Shaman_Maelstorm_C*>(AAuxActor_Shaman_Maelstorm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Maelstorm_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Maelstorm_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Maelstorm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Maelstorm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C.TurnOffEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Maelstorm_C::TurnOffEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Maelstorm_C", "TurnOffEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C.TurnOnStormEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Maelstorm_C::TurnOnStormEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Maelstorm_C", "TurnOnStormEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C.TurnOnRainEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Shaman_Maelstorm_C::TurnOnRainEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Maelstorm_C", "TurnOnRainEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Shaman_Maelstorm.AuxActor_Shaman_Maelstorm_C.ExecuteUbergraph_AuxActor_Shaman_Maelstorm
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_Shaman_Maelstorm_C::ExecuteUbergraph_AuxActor_Shaman_Maelstorm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Shaman_Maelstorm_C", "ExecuteUbergraph_AuxActor_Shaman_Maelstorm");

	Params::AAuxActor_Shaman_Maelstorm_C_ExecuteUbergraph_AuxActor_Shaman_Maelstorm_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



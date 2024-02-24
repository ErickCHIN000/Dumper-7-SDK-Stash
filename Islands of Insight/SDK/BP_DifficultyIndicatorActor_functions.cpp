#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DifficultyIndicatorActor.BP_DifficultyIndicatorActor_C
// (Actor)

class UClass* ABP_DifficultyIndicatorActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DifficultyIndicatorActor_C");

	return Clss;
}


// BP_DifficultyIndicatorActor_C BP_DifficultyIndicatorActor.Default__BP_DifficultyIndicatorActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DifficultyIndicatorActor_C* ABP_DifficultyIndicatorActor_C::GetDefaultObj()
{
	static class ABP_DifficultyIndicatorActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DifficultyIndicatorActor_C*>(ABP_DifficultyIndicatorActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DifficultyIndicatorActor.BP_DifficultyIndicatorActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DifficultyIndicatorActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DifficultyIndicatorActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DifficultyIndicatorActor.BP_DifficultyIndicatorActor_C.ExecuteUbergraph_BP_DifficultyIndicatorActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DifficultyIndicatorActor_C::ExecuteUbergraph_BP_DifficultyIndicatorActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DifficultyIndicatorActor_C", "ExecuteUbergraph_BP_DifficultyIndicatorActor");

	Params::ABP_DifficultyIndicatorActor_C_ExecuteUbergraph_BP_DifficultyIndicatorActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



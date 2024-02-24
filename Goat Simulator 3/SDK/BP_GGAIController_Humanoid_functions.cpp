#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGAIController_Humanoid.BP_GGAIController_Humanoid_C
// (Actor)

class UClass* ABP_GGAIController_Humanoid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGAIController_Humanoid_C");

	return Clss;
}


// BP_GGAIController_Humanoid_C BP_GGAIController_Humanoid.Default__BP_GGAIController_Humanoid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGAIController_Humanoid_C* ABP_GGAIController_Humanoid_C::GetDefaultObj()
{
	static class ABP_GGAIController_Humanoid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGAIController_Humanoid_C*>(ABP_GGAIController_Humanoid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GGAIController_Humanoid.BP_GGAIController_Humanoid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GGAIController_Humanoid_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGAIController_Humanoid_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GGAIController_Humanoid.BP_GGAIController_Humanoid_C.ExecuteUbergraph_BP_GGAIController_Humanoid
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GGAIController_Humanoid_C::ExecuteUbergraph_BP_GGAIController_Humanoid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GGAIController_Humanoid_C", "ExecuteUbergraph_BP_GGAIController_Humanoid");

	Params::ABP_GGAIController_Humanoid_C_ExecuteUbergraph_BP_GGAIController_Humanoid_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



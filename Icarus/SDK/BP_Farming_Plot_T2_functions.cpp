#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Farming_Plot_T2.BP_Farming_Plot_T2_C
// (Actor)

class UClass* ABP_Farming_Plot_T2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Farming_Plot_T2_C");

	return Clss;
}


// BP_Farming_Plot_T2_C BP_Farming_Plot_T2.Default__BP_Farming_Plot_T2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Farming_Plot_T2_C* ABP_Farming_Plot_T2_C::GetDefaultObj()
{
	static class ABP_Farming_Plot_T2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Farming_Plot_T2_C*>(ABP_Farming_Plot_T2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Farming_Plot_T2.BP_Farming_Plot_T2_C.ActorCanConnectToNetwork
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIcarusResourceType     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Farming_Plot_T2_C::ActorCanConnectToNetwork(enum class EIcarusResourceType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Farming_Plot_T2_C", "ActorCanConnectToNetwork");

	Params::ABP_Farming_Plot_T2_C_ActorCanConnectToNetwork_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



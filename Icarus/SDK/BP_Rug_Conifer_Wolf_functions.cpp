#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rug_Conifer_Wolf.BP_Rug_Conifer_Wolf_C
// (Actor)

class UClass* ABP_Rug_Conifer_Wolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rug_Conifer_Wolf_C");

	return Clss;
}


// BP_Rug_Conifer_Wolf_C BP_Rug_Conifer_Wolf.Default__BP_Rug_Conifer_Wolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rug_Conifer_Wolf_C* ABP_Rug_Conifer_Wolf_C::GetDefaultObj()
{
	static class ABP_Rug_Conifer_Wolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rug_Conifer_Wolf_C*>(ABP_Rug_Conifer_Wolf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Rug_Conifer_Wolf.BP_Rug_Conifer_Wolf_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Rug_Conifer_Wolf_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rug_Conifer_Wolf_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Rug_Conifer_Wolf.BP_Rug_Conifer_Wolf_C.ExecuteUbergraph_BP_Rug_Conifer_Wolf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Rug_Conifer_Wolf_C::ExecuteUbergraph_BP_Rug_Conifer_Wolf(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Rug_Conifer_Wolf_C", "ExecuteUbergraph_BP_Rug_Conifer_Wolf");

	Params::ABP_Rug_Conifer_Wolf_C_ExecuteUbergraph_BP_Rug_Conifer_Wolf_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



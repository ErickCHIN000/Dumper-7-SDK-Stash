#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Extractor_Electric.BP_Extractor_Electric_C
// (Actor)

class UClass* ABP_Extractor_Electric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Extractor_Electric_C");

	return Clss;
}


// BP_Extractor_Electric_C BP_Extractor_Electric.Default__BP_Extractor_Electric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Extractor_Electric_C* ABP_Extractor_Electric_C::GetDefaultObj()
{
	static class ABP_Extractor_Electric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Extractor_Electric_C*>(ABP_Extractor_Electric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Extractor_Electric.BP_Extractor_Electric_C.ExecuteUbergraph_BP_Extractor_Electric
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Extractor_Electric_C::ExecuteUbergraph_BP_Extractor_Electric(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Extractor_Electric_C", "ExecuteUbergraph_BP_Extractor_Electric");

	Params::ABP_Extractor_Electric_C_ExecuteUbergraph_BP_Extractor_Electric_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



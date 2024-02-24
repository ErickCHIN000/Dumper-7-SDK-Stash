#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GlobalTravelGraph.GlobalTravelGraph_C
// (None)

class UClass* UGlobalTravelGraph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalTravelGraph_C");

	return Clss;
}


// GlobalTravelGraph_C GlobalTravelGraph.Default__GlobalTravelGraph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalTravelGraph_C* UGlobalTravelGraph_C::GetDefaultObj()
{
	static class UGlobalTravelGraph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalTravelGraph_C*>(UGlobalTravelGraph_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GlobalTravelGraph.GlobalTravelGraph_C.ExecuteUbergraph_GlobalTravelGraph
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalTravelGraph_C::ExecuteUbergraph_GlobalTravelGraph(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalTravelGraph_C", "ExecuteUbergraph_GlobalTravelGraph");

	Params::UGlobalTravelGraph_C_ExecuteUbergraph_GlobalTravelGraph_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TravelGraph_Indigo1.TravelGraph_Indigo1_C
// (None)

class UClass* UTravelGraph_Indigo1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TravelGraph_Indigo1_C");

	return Clss;
}


// TravelGraph_Indigo1_C TravelGraph_Indigo1.Default__TravelGraph_Indigo1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTravelGraph_Indigo1_C* UTravelGraph_Indigo1_C::GetDefaultObj()
{
	static class UTravelGraph_Indigo1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTravelGraph_Indigo1_C*>(UTravelGraph_Indigo1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TravelGraph_Indigo1.TravelGraph_Indigo1_C.ExecuteUbergraph_TravelGraph_Indigo1
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTravelGraph_Indigo1_C::ExecuteUbergraph_TravelGraph_Indigo1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TravelGraph_Indigo1_C", "ExecuteUbergraph_TravelGraph_Indigo1");

	Params::UTravelGraph_Indigo1_C_ExecuteUbergraph_TravelGraph_Indigo1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



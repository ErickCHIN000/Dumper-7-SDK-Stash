#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Map_Return_BP.Map_Return_BP_C
// (SceneComponent)

class UClass* UMap_Return_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Map_Return_BP_C");

	return Clss;
}


// Map_Return_BP_C Map_Return_BP.Default__Map_Return_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMap_Return_BP_C* UMap_Return_BP_C::GetDefaultObj()
{
	static class UMap_Return_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMap_Return_BP_C*>(UMap_Return_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Map_Return_BP.Map_Return_BP_C.ExecuteUbergraph_Map_Return_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMap_Return_BP_C::ExecuteUbergraph_Map_Return_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_Return_BP_C", "ExecuteUbergraph_Map_Return_BP");

	Params::UMap_Return_BP_C_ExecuteUbergraph_Map_Return_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



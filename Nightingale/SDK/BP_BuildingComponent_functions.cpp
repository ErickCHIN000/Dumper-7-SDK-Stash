#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildingComponent.BP_BuildingComponent_C
// (None)

class UClass* UBP_BuildingComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildingComponent_C");

	return Clss;
}


// BP_BuildingComponent_C BP_BuildingComponent.Default__BP_BuildingComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildingComponent_C* UBP_BuildingComponent_C::GetDefaultObj()
{
	static class UBP_BuildingComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildingComponent_C*>(UBP_BuildingComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildingComponent.BP_BuildingComponent_C.ExecuteUbergraph_BP_BuildingComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildingComponent_C::ExecuteUbergraph_BP_BuildingComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingComponent_C", "ExecuteUbergraph_BP_BuildingComponent");

	Params::UBP_BuildingComponent_C_ExecuteUbergraph_BP_BuildingComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



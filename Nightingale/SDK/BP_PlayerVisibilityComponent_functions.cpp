#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerVisibilityComponent.BP_PlayerVisibilityComponent_C
// (None)

class UClass* UBP_PlayerVisibilityComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerVisibilityComponent_C");

	return Clss;
}


// BP_PlayerVisibilityComponent_C BP_PlayerVisibilityComponent.Default__BP_PlayerVisibilityComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerVisibilityComponent_C* UBP_PlayerVisibilityComponent_C::GetDefaultObj()
{
	static class UBP_PlayerVisibilityComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerVisibilityComponent_C*>(UBP_PlayerVisibilityComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerVisibilityComponent.BP_PlayerVisibilityComponent_C.ExecuteUbergraph_BP_PlayerVisibilityComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerVisibilityComponent_C::ExecuteUbergraph_BP_PlayerVisibilityComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerVisibilityComponent_C", "ExecuteUbergraph_BP_PlayerVisibilityComponent");

	Params::UBP_PlayerVisibilityComponent_C_ExecuteUbergraph_BP_PlayerVisibilityComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



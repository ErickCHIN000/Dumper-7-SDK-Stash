#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableArea_Small.BP_FlammableArea_Small_C
// (Actor)

class UClass* ABP_FlammableArea_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableArea_Small_C");

	return Clss;
}


// BP_FlammableArea_Small_C BP_FlammableArea_Small.Default__BP_FlammableArea_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlammableArea_Small_C* ABP_FlammableArea_Small_C::GetDefaultObj()
{
	static class ABP_FlammableArea_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlammableArea_Small_C*>(ABP_FlammableArea_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableArea_Small.BP_FlammableArea_Small_C.CleanupVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FlammableArea_Small_C::CleanupVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_Small_C", "CleanupVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlammableArea_Small.BP_FlammableArea_Small_C.ExecuteUbergraph_BP_FlammableArea_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlammableArea_Small_C::ExecuteUbergraph_BP_FlammableArea_Small(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_Small_C", "ExecuteUbergraph_BP_FlammableArea_Small");

	Params::ABP_FlammableArea_Small_C_ExecuteUbergraph_BP_FlammableArea_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


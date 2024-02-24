#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlammableArea_Medium.BP_FlammableArea_Medium_C
// (Actor)

class UClass* ABP_FlammableArea_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlammableArea_Medium_C");

	return Clss;
}


// BP_FlammableArea_Medium_C BP_FlammableArea_Medium.Default__BP_FlammableArea_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlammableArea_Medium_C* ABP_FlammableArea_Medium_C::GetDefaultObj()
{
	static class ABP_FlammableArea_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlammableArea_Medium_C*>(ABP_FlammableArea_Medium_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FlammableArea_Medium.BP_FlammableArea_Medium_C.CleanupVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FlammableArea_Medium_C::CleanupVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_Medium_C", "CleanupVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FlammableArea_Medium.BP_FlammableArea_Medium_C.ExecuteUbergraph_BP_FlammableArea_Medium
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlammableArea_Medium_C::ExecuteUbergraph_BP_FlammableArea_Medium(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FlammableArea_Medium_C", "ExecuteUbergraph_BP_FlammableArea_Medium");

	Params::ABP_FlammableArea_Medium_C_ExecuteUbergraph_BP_FlammableArea_Medium_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



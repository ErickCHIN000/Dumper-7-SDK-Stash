#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PS_BlackStalkerProjectileExplosion_01_01_small.BP_PS_BlackStalkerProjectileExplosion_01_01_small_C
// (Actor)

class UClass* ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PS_BlackStalkerProjectileExplosion_01_01_small_C");

	return Clss;
}


// BP_PS_BlackStalkerProjectileExplosion_01_01_small_C BP_PS_BlackStalkerProjectileExplosion_01_01_small.Default__BP_PS_BlackStalkerProjectileExplosion_01_01_small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C* ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C::GetDefaultObj()
{
	static class ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C*>(ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PS_BlackStalkerProjectileExplosion_01_01_small.BP_PS_BlackStalkerProjectileExplosion_01_01_small_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectileExplosion_01_01_small_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PS_BlackStalkerProjectileExplosion_01_01_small.BP_PS_BlackStalkerProjectileExplosion_01_01_small_C.ExecuteUbergraph_BP_PS_BlackStalkerProjectileExplosion_01_01_small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C::ExecuteUbergraph_BP_PS_BlackStalkerProjectileExplosion_01_01_small(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PS_BlackStalkerProjectileExplosion_01_01_small_C", "ExecuteUbergraph_BP_PS_BlackStalkerProjectileExplosion_01_01_small");

	Params::ABP_PS_BlackStalkerProjectileExplosion_01_01_small_C_ExecuteUbergraph_BP_PS_BlackStalkerProjectileExplosion_01_01_small_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C
// (Actor)

class UClass* ABP_BlueOrbFragmentPuzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlueOrbFragmentPuzzle_C");

	return Clss;
}


// BP_BlueOrbFragmentPuzzle_C BP_BlueOrbFragmentPuzzle.Default__BP_BlueOrbFragmentPuzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlueOrbFragmentPuzzle_C* ABP_BlueOrbFragmentPuzzle_C::GetDefaultObj()
{
	static class ABP_BlueOrbFragmentPuzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlueOrbFragmentPuzzle_C*>(ABP_BlueOrbFragmentPuzzle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.FindTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BlueOrbFragmentPuzzle_C::FindTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "FindTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.FindTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BlueOrbFragmentPuzzle_C::FindTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "FindTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.Solved Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BlueOrbFragmentPuzzle_C::Solved_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "Solved Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.Solved Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BlueOrbFragmentPuzzle_C::Solved_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "Solved Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.BPI_FoundTrinket
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Trinket                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLoadingFromPersistence                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BlueOrbFragmentPuzzle_C::BPI_FoundTrinket(class UStaticMeshComponent* Trinket, bool bLoadingFromPersistence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "BPI_FoundTrinket");

	Params::ABP_BlueOrbFragmentPuzzle_C_BPI_FoundTrinket_Params Parms{};

	Parms.Trinket = Trinket;
	Parms.bLoadingFromPersistence = bLoadingFromPersistence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.BP_OnSolved_Client
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_BlueOrbFragmentPuzzle_C::BP_OnSolved_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "BP_OnSolved_Client");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BlueOrbFragmentPuzzle.BP_BlueOrbFragmentPuzzle_C.ExecuteUbergraph_BP_BlueOrbFragmentPuzzle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_Event_trinket                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bLoadingFromPersistence                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BlueOrbFragmentPuzzle_C::ExecuteUbergraph_BP_BlueOrbFragmentPuzzle(int32 EntryPoint, class UStaticMeshComponent* K2Node_Event_trinket, bool K2Node_Event_bLoadingFromPersistence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BlueOrbFragmentPuzzle_C", "ExecuteUbergraph_BP_BlueOrbFragmentPuzzle");

	Params::ABP_BlueOrbFragmentPuzzle_C_ExecuteUbergraph_BP_BlueOrbFragmentPuzzle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_trinket = K2Node_Event_trinket;
	Parms.K2Node_Event_bLoadingFromPersistence = K2Node_Event_bLoadingFromPersistence;

	UObject::ProcessEvent(Func, &Parms);

}

}



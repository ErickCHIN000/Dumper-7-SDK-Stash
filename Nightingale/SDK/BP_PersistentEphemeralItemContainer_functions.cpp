#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PersistentEphemeralItemContainer.BP_PersistentEphemeralItemContainer_C
// (Actor)

class UClass* ABP_PersistentEphemeralItemContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PersistentEphemeralItemContainer_C");

	return Clss;
}


// BP_PersistentEphemeralItemContainer_C BP_PersistentEphemeralItemContainer.Default__BP_PersistentEphemeralItemContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PersistentEphemeralItemContainer_C* ABP_PersistentEphemeralItemContainer_C::GetDefaultObj()
{
	static class ABP_PersistentEphemeralItemContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PersistentEphemeralItemContainer_C*>(ABP_PersistentEphemeralItemContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PersistentEphemeralItemContainer.BP_PersistentEphemeralItemContainer_C.ShouldOptOutOfPersistenceStore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PersistentEphemeralItemContainer_C::ShouldOptOutOfPersistenceStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PersistentEphemeralItemContainer_C", "ShouldOptOutOfPersistenceStore");

	Params::ABP_PersistentEphemeralItemContainer_C_ShouldOptOutOfPersistenceStore_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PersistentEphemeralItemContainer.BP_PersistentEphemeralItemContainer_C.OnLinkedReferencesRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PersistentEphemeralItemContainer_C::OnLinkedReferencesRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PersistentEphemeralItemContainer_C", "OnLinkedReferencesRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PersistentEphemeralItemContainer.BP_PersistentEphemeralItemContainer_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PersistentEphemeralItemContainer_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PersistentEphemeralItemContainer_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PersistentEphemeralItemContainer.BP_PersistentEphemeralItemContainer_C.ExecuteUbergraph_BP_PersistentEphemeralItemContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersistentEphemeralItemContainer_C::ExecuteUbergraph_BP_PersistentEphemeralItemContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PersistentEphemeralItemContainer_C", "ExecuteUbergraph_BP_PersistentEphemeralItemContainer");

	Params::ABP_PersistentEphemeralItemContainer_C_ExecuteUbergraph_BP_PersistentEphemeralItemContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



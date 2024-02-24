#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DialoguePersistenceComponent.BP_DialoguePersistenceComponent_C
// (None)

class UClass* UBP_DialoguePersistenceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DialoguePersistenceComponent_C");

	return Clss;
}


// BP_DialoguePersistenceComponent_C BP_DialoguePersistenceComponent.Default__BP_DialoguePersistenceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DialoguePersistenceComponent_C* UBP_DialoguePersistenceComponent_C::GetDefaultObj()
{
	static class UBP_DialoguePersistenceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DialoguePersistenceComponent_C*>(UBP_DialoguePersistenceComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DialoguePersistenceComponent.BP_DialoguePersistenceComponent_C.OnRep_PuckIntroComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DialoguePersistenceComponent_C::OnRep_PuckIntroComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialoguePersistenceComponent_C", "OnRep_PuckIntroComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialoguePersistenceComponent.BP_DialoguePersistenceComponent_C.SetPuckIntroComplete
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DialoguePersistenceComponent_C::SetPuckIntroComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialoguePersistenceComponent_C", "SetPuckIntroComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialoguePersistenceComponent.BP_DialoguePersistenceComponent_C.ExecuteUbergraph_BP_DialoguePersistenceComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DialoguePersistenceComponent_C::ExecuteUbergraph_BP_DialoguePersistenceComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialoguePersistenceComponent_C", "ExecuteUbergraph_BP_DialoguePersistenceComponent");

	Params::UBP_DialoguePersistenceComponent_C_ExecuteUbergraph_BP_DialoguePersistenceComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



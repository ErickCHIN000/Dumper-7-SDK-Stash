#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_NoInteraction.BP_Interactable_NoInteraction_C
// (None)

class UClass* UBP_Interactable_NoInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_NoInteraction_C");

	return Clss;
}


// BP_Interactable_NoInteraction_C BP_Interactable_NoInteraction.Default__BP_Interactable_NoInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_NoInteraction_C* UBP_Interactable_NoInteraction_C::GetDefaultObj()
{
	static class UBP_Interactable_NoInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_NoInteraction_C*>(UBP_Interactable_NoInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_NoInteraction.BP_Interactable_NoInteraction_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_Interactable_NoInteraction_C::CanInteract(class AActor* Instigator, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_NoInteraction_C", "CanInteract");

	Params::UBP_Interactable_NoInteraction_C_CanInteract_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



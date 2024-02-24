#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionComponentBase.BP_InteractionComponentBase_C
// (None)

class UClass* UBP_InteractionComponentBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionComponentBase_C");

	return Clss;
}


// BP_InteractionComponentBase_C BP_InteractionComponentBase.Default__BP_InteractionComponentBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionComponentBase_C* UBP_InteractionComponentBase_C::GetDefaultObj()
{
	static class UBP_InteractionComponentBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionComponentBase_C*>(UBP_InteractionComponentBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionComponentBase.BP_InteractionComponentBase_C.GetCurrentInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_InteractionSceneBase_C*  CurrentInteraction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionComponentBase_C::GetCurrentInteraction(class ABP_InteractionSceneBase_C** CurrentInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionComponentBase_C", "GetCurrentInteraction");

	Params::UBP_InteractionComponentBase_C_GetCurrentInteraction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentInteraction != nullptr)
		*CurrentInteraction = Parms.CurrentInteraction;

}

}



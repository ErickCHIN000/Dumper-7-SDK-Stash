#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALI_StaticBehaviour.ALI_StaticBehaviour_C
// (None)

class UClass* IALI_StaticBehaviour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALI_StaticBehaviour_C");

	return Clss;
}


// ALI_StaticBehaviour_C ALI_StaticBehaviour.Default__ALI_StaticBehaviour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IALI_StaticBehaviour_C* IALI_StaticBehaviour_C::GetDefaultObj()
{
	static class IALI_StaticBehaviour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IALI_StaticBehaviour_C*>(IALI_StaticBehaviour_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALI_StaticBehaviour.ALI_StaticBehaviour_C.LoiterBehaviour
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LoiterBehaviour                                                  (Parm, OutParm, NoDestructor)

void IALI_StaticBehaviour_C::LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALI_StaticBehaviour_C", "LoiterBehaviour");

	Params::IALI_StaticBehaviour_C_LoiterBehaviour_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (LoiterBehaviour != nullptr)
		*LoiterBehaviour = std::move(Parms.LoiterBehaviour);

}

}



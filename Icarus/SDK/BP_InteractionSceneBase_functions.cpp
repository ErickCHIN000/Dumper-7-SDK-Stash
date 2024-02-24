#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionSceneBase.BP_InteractionSceneBase_C
// (Actor)

class UClass* ABP_InteractionSceneBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionSceneBase_C");

	return Clss;
}


// BP_InteractionSceneBase_C BP_InteractionSceneBase.Default__BP_InteractionSceneBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_InteractionSceneBase_C* ABP_InteractionSceneBase_C::GetDefaultObj()
{
	static class ABP_InteractionSceneBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_InteractionSceneBase_C*>(ABP_InteractionSceneBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionSceneBase.BP_InteractionSceneBase_C.GetInteractionBlendSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              BlendSpeed                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractionSceneBase_C::GetInteractionBlendSpeed(float* BlendSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionSceneBase_C", "GetInteractionBlendSpeed");

	Params::ABP_InteractionSceneBase_C_GetInteractionBlendSpeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BlendSpeed != nullptr)
		*BlendSpeed = Parms.BlendSpeed;

}

}



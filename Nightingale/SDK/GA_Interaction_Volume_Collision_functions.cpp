#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_Volume_Collision.GA_Interaction_Volume_Collision_C
// (None)

class UClass* UGA_Interaction_Volume_Collision_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_Volume_Collision_C");

	return Clss;
}


// GA_Interaction_Volume_Collision_C GA_Interaction_Volume_Collision.Default__GA_Interaction_Volume_Collision_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_Volume_Collision_C* UGA_Interaction_Volume_Collision_C::GetDefaultObj()
{
	static class UGA_Interaction_Volume_Collision_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_Volume_Collision_C*>(UGA_Interaction_Volume_Collision_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_Volume_Collision.GA_Interaction_Volume_Collision_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// class ACollisionVolume*            K2Node_DynamicCast_AsCollision_Volume                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)

void UGA_Interaction_Volume_Collision_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, class ACollisionVolume* K2Node_DynamicCast_AsCollision_Volume, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Volume_Collision_C", "ExecuteInteraction");

	Params::UGA_Interaction_Volume_Collision_C_ExecuteInteraction_Params Parms{};

	Parms.K2Node_DynamicCast_AsCollision_Volume = K2Node_DynamicCast_AsCollision_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}



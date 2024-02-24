#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_Pet.GA_Interaction_Pet_C
// (None)

class UClass* UGA_Interaction_Pet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_Pet_C");

	return Clss;
}


// GA_Interaction_Pet_C GA_Interaction_Pet.Default__GA_Interaction_Pet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_Pet_C* UGA_Interaction_Pet_C::GetDefaultObj()
{
	static class UGA_Interaction_Pet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_Pet_C*>(UGA_Interaction_Pet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_Pet.GA_Interaction_Pet_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Pet_C::PopulateVariables(bool* bSuccess, class UObject* CallFunc_GetInteractable_Interactable, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_PopulateVariables_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Pet_C", "PopulateVariables");

	Params::UGA_Interaction_Pet_C_PopulateVariables_Params Parms{};

	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_Pet.GA_Interaction_Pet_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// struct FGameplayTag                MontageActionTag                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccessful                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractionAnimationInterface>K2Node_DynamicCast_AsInteraction_Animation_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_Pet_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTag& MontageActionTag, bool IsSuccessful, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_K2_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IInteractionAnimationInterface> K2Node_DynamicCast_AsInteraction_Animation_Interface, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_Pawn_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_Pet_C", "ExecuteInteraction");

	Params::UGA_Interaction_Pet_C_ExecuteInteraction_Params Parms{};

	Parms.MontageActionTag = MontageActionTag;
	Parms.IsSuccessful = IsSuccessful;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.K2Node_DynamicCast_AsInteraction_Animation_Interface = K2Node_DynamicCast_AsInteraction_Animation_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPawn_Pawn_1 = CallFunc_GetPawn_Pawn_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}



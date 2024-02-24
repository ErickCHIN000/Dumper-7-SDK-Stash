#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_PortalMachine.GA_Interaction_PortalMachine_C
// (None)

class UClass* UGA_Interaction_PortalMachine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_PortalMachine_C");

	return Clss;
}


// GA_Interaction_PortalMachine_C GA_Interaction_PortalMachine.Default__GA_Interaction_PortalMachine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_PortalMachine_C* UGA_Interaction_PortalMachine_C::GetDefaultObj()
{
	static class UGA_Interaction_PortalMachine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_PortalMachine_C*>(UGA_Interaction_PortalMachine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_PortalMachine.GA_Interaction_PortalMachine_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Interactable                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URealmCardMachineComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_PortalMachine_C::PopulateVariables(bool* bSuccess, class AActor* Interactable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URealmCardMachineComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetInteractable_Interactable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PopulateVariables_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_PortalMachine_C", "PopulateVariables");

	Params::UGA_Interaction_PortalMachine_C_PopulateVariables_Params Parms{};

	Parms.Interactable = Interactable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_PortalMachine.GA_Interaction_PortalMachine_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// class AController*                 Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       InteractionPawn                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ParentTags                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenPortalUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_ExecuteInteraction_InteractionTags                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_PortalMachine_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, class AController* Controller, class APawn* InteractionPawn, const struct FGameplayTagContainer& ParentTags, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OpenPortalUI_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_PortalMachine_C", "ExecuteInteraction");

	Params::UGA_Interaction_PortalMachine_C_ExecuteInteraction_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionPawn = InteractionPawn;
	Parms.ParentTags = ParentTags;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OpenPortalUI_ReturnValue = CallFunc_OpenPortalUI_ReturnValue;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_ExecuteInteraction_InteractionTags = CallFunc_ExecuteInteraction_InteractionTags;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}



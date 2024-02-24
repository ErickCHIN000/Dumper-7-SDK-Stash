#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interaction_RealmCardMachine.GA_Interaction_RealmCardMachine_C
// (None)

class UClass* UGA_Interaction_RealmCardMachine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interaction_RealmCardMachine_C");

	return Clss;
}


// GA_Interaction_RealmCardMachine_C GA_Interaction_RealmCardMachine.Default__GA_Interaction_RealmCardMachine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interaction_RealmCardMachine_C* UGA_Interaction_RealmCardMachine_C::GetDefaultObj()
{
	static class UGA_Interaction_RealmCardMachine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interaction_RealmCardMachine_C*>(UGA_Interaction_RealmCardMachine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Interaction_RealmCardMachine.GA_Interaction_RealmCardMachine_C.PopulateVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetInteractable_Interactable                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_RealmCardMachine_ServerList_C*K2Node_DynamicCast_AsBP_Realm_Card_Machine_Server_List           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_Pawn                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PopulateVariables_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_RealmCardMachine_C::PopulateVariables(bool* bSuccess, class UObject* CallFunc_GetInteractable_Interactable, class ABP_RealmCardMachine_ServerList_C* K2Node_DynamicCast_AsBP_Realm_Card_Machine_Server_List, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_Pawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_PopulateVariables_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_RealmCardMachine_C", "PopulateVariables");

	Params::UGA_Interaction_RealmCardMachine_C_PopulateVariables_Params Parms{};

	Parms.CallFunc_GetInteractable_Interactable = CallFunc_GetInteractable_Interactable;
	Parms.K2Node_DynamicCast_AsBP_Realm_Card_Machine_Server_List = K2Node_DynamicCast_AsBP_Realm_Card_Machine_Server_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPawn_Pawn = CallFunc_GetPawn_Pawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_PopulateVariables_bSuccess = CallFunc_PopulateVariables_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_Interaction_RealmCardMachine.GA_Interaction_RealmCardMachine_C.ExecuteInteraction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (Parm, OutParm)
// struct FGameplayTag                MontageActionTag                                                 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccessful                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Interaction_RealmCardMachine_C::ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTag& MontageActionTag, bool IsSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Interaction_RealmCardMachine_C", "ExecuteInteraction");

	Params::UGA_Interaction_RealmCardMachine_C_ExecuteInteraction_Params Parms{};

	Parms.MontageActionTag = MontageActionTag;
	Parms.IsSuccessful = IsSuccessful;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractionTags != nullptr)
		*InteractionTags = std::move(Parms.InteractionTags);

}

}



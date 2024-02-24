#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Feat_Necromancer.Feat_Necromancer_C
// (None)

class UClass* UFeat_Necromancer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Feat_Necromancer_C");

	return Clss;
}


// Feat_Necromancer_C Feat_Necromancer.Default__Feat_Necromancer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeat_Necromancer_C* UFeat_Necromancer_C::GetDefaultObj()
{
	static class UFeat_Necromancer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeat_Necromancer_C*>(UFeat_Necromancer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Feat_Necromancer.Feat_Necromancer_C.GetDemiLichDrone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADrone_PlayerCompanionParent_C*Ref                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_Necromancer_C::GetDemiLichDrone(class ADrone_PlayerCompanionParent_C** Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "GetDemiLichDrone");

	Params::UFeat_Necromancer_C_GetDemiLichDrone_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

}


// Function Feat_Necromancer.Feat_Necromancer_C.SpawnDemiLich
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPetInfo                    PetData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADrone_PlayerCompanionParent_C*K2Node_DynamicCast_AsDrone_Player_Companion_Parent               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_Necromancer_C::SpawnDemiLich(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res, class ADrone_PlayerCompanionParent_C* K2Node_DynamicCast_AsDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "SpawnDemiLich");

	Params::UFeat_Necromancer_C_SpawnDemiLich_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.PetData = PetData;
	Parms.K2Node_DynamicCast_AsDrone_Player_Companion_Parent = K2Node_DynamicCast_AsDrone_Player_Companion_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_Necromancer.Feat_Necromancer_C.GetDemiLich
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Ref                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_Necromancer_C::GetDemiLich(class AActor** Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "GetDemiLich");

	Params::UFeat_Necromancer_C_GetDemiLich_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ref != nullptr)
		*Ref = Parms.Ref;

}


// Function Feat_Necromancer.Feat_Necromancer_C.DespawnDemiLich
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Pet                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPetReleaseReason       Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_PlayerCompanionParent_C>K2Node_DynamicCast_AsIDrone_Player_Companion_Parent              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompanionDespawn_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFeat_Necromancer_C::DespawnDemiLich(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res, TScriptInterface<class IIDrone_PlayerCompanionParent_C> K2Node_DynamicCast_AsIDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CompanionDespawn_Res, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "DespawnDemiLich");

	Params::UFeat_Necromancer_C_DespawnDemiLich_Params Parms{};

	Parms.Pet = Pet;
	Parms.Reason = Reason;
	Parms.K2Node_DynamicCast_AsIDrone_Player_Companion_Parent = K2Node_DynamicCast_AsIDrone_Player_Companion_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CompanionDespawn_Res = CallFunc_CompanionDespawn_Res;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Feat_Necromancer.Feat_Necromancer_C.HandleChallenge_DarkHealing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::HandleChallenge_DarkHealing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "HandleChallenge_DarkHealing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnDialogSequenceFinished_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::OnDialogSequenceFinished_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnDialogSequenceFinished_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnDialogSequenceFinished_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::OnDialogSequenceFinished_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnDialogSequenceFinished_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeat_Necromancer_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OakPassiveOnCausedDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFeat_Necromancer_C::OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OakPassiveOnCausedDeath");

	Params::UFeat_Necromancer_C_OakPassiveOnCausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnPetSpawned
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPetInfo                    PetData                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UFeat_Necromancer_C::OnPetSpawned(class AActor* SpawnedActor, struct FPetInfo& PetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnPetSpawned");

	Params::UFeat_Necromancer_C_OnPetSpawned_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.PetData = PetData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnPetReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Pet                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPetReleaseReason       Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_Necromancer_C::OnPetReleased(class AActor* Pet, enum class EPetReleaseReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnPetReleased");

	Params::UFeat_Necromancer_C_OnPetReleased_Params Parms{};

	Parms.Pet = Pet;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_Necromancer.Feat_Necromancer_C.OnReceivedHealing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HealReceiver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Healing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HealInstigator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeat_Necromancer_C::OnReceivedHealing(class AActor* HealReceiver, float Healing, class AActor* HealInstigator, class UDamageSource* DamageSource, class UDamageType* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "OnReceivedHealing");

	Params::UFeat_Necromancer_C_OnReceivedHealing_Params Parms{};

	Parms.HealReceiver = HealReceiver;
	Parms.Healing = Healing;
	Parms.HealInstigator = HealInstigator;
	Parms.DamageSource = DamageSource;
	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Feat_Necromancer.Feat_Necromancer_C.ExecuteUbergraph_Feat_Necromancer
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPetOwnerComponent*          CallFunc_GetPetOwnerComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPetReleaseReason       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation2                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            K2Node_Event_Damaged                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_Event_Details                                             (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPlayerClass_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPetOwnerComponent*          CallFunc_GetPetOwnerComponent_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue3                           (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_SpawnedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPetInfo                    K2Node_CustomEvent_PetData                                       (ConstParm, ContainsInstancedReference)
// class AActor*                      K2Node_CustomEvent_Pet                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPetReleaseReason       K2Node_CustomEvent_Reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADrone_Necromancer_DemiLich_C*K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SpawnDemiLich_Res                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADrone_Necromancer_DemiLich_C*K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DespawnDemiLich_Res                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue4                           (None)
// class UPetOwnerComponent*          CallFunc_GetPetOwnerComponent_ReturnValue2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation3                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation4                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_HealReceiver                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Healing                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HealInstigator                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Damage_Source_Equal                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Equal1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Compare_Damage_Source_Not_Equal1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2         (NoDestructor)
// class UPetOwnerComponent*          CallFunc_GetPetOwnerComponent_ReturnValue3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3         (NoDestructor)
// class UPetOwnerComponent*          CallFunc_GetPetOwnerComponent_ReturnValue4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPetOwnerComponent*          CallFunc_GetPetOwnerComponent_ReturnValue5                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4         (NoDestructor)

void UFeat_Necromancer_C::ExecuteUbergraph_Feat_Necromancer(int32 EntryPoint, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, enum class EPetReleaseReason Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation2, int32 CallFunc_FinishTriggerDialog_SequenceID2, bool CallFunc_FinishTriggerDialog_ReturnValue2, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasPlayerClass_Res, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* K2Node_CustomEvent_SpawnedActor, const struct FPetInfo& K2Node_CustomEvent_PetData, class AActor* K2Node_CustomEvent_Pet, enum class EPetReleaseReason K2Node_CustomEvent_Reason, class ADrone_Necromancer_DemiLich_C* K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_SpawnDemiLich_Res, bool K2Node_Select_Default, class ADrone_Necromancer_DemiLich_C* K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_DespawnDemiLich_Res, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation3, int32 CallFunc_FinishTriggerDialog_SequenceID3, bool CallFunc_FinishTriggerDialog_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation4, int32 CallFunc_FinishTriggerDialog_SequenceID4, bool CallFunc_FinishTriggerDialog_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class AActor* K2Node_CustomEvent_HealReceiver, float K2Node_CustomEvent_Healing, class AActor* K2Node_CustomEvent_HealInstigator, class UDamageSource* K2Node_CustomEvent_DamageSource, class UDamageType* K2Node_CustomEvent_DamageType, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue4, class UPetOwnerComponent* CallFunc_GetPetOwnerComponent_ReturnValue5, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Feat_Necromancer_C", "ExecuteUbergraph_Feat_Necromancer");

	Params::UFeat_Necromancer_C_ExecuteUbergraph_Feat_Necromancer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPetOwnerComponent_ReturnValue = CallFunc_GetPetOwnerComponent_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation2 = CallFunc_FinishTriggerDialog_Conversation2;
	Parms.CallFunc_FinishTriggerDialog_SequenceID2 = CallFunc_FinishTriggerDialog_SequenceID2;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue2 = CallFunc_FinishTriggerDialog_ReturnValue2;
	Parms.K2Node_Event_Damaged = K2Node_Event_Damaged;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_HasPlayerClass_Res = CallFunc_HasPlayerClass_Res;
	Parms.CallFunc_GetPetOwnerComponent_ReturnValue1 = CallFunc_GetPetOwnerComponent_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue3 = CallFunc_NewDialogContext_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_SpawnedActor = K2Node_CustomEvent_SpawnedActor;
	Parms.K2Node_CustomEvent_PetData = K2Node_CustomEvent_PetData;
	Parms.K2Node_CustomEvent_Pet = K2Node_CustomEvent_Pet;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich = K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_SpawnDemiLich_Res = CallFunc_SpawnDemiLich_Res;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich1 = K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_DespawnDemiLich_Res = CallFunc_DespawnDemiLich_Res;
	Parms.CallFunc_NewDialogContext_ReturnValue4 = CallFunc_NewDialogContext_ReturnValue4;
	Parms.CallFunc_GetPetOwnerComponent_ReturnValue2 = CallFunc_GetPetOwnerComponent_ReturnValue2;
	Parms.CallFunc_FinishTriggerDialog_Conversation3 = CallFunc_FinishTriggerDialog_Conversation3;
	Parms.CallFunc_FinishTriggerDialog_SequenceID3 = CallFunc_FinishTriggerDialog_SequenceID3;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue3 = CallFunc_FinishTriggerDialog_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_FinishTriggerDialog_Conversation4 = CallFunc_FinishTriggerDialog_Conversation4;
	Parms.CallFunc_FinishTriggerDialog_SequenceID4 = CallFunc_FinishTriggerDialog_SequenceID4;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue4 = CallFunc_FinishTriggerDialog_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_HealReceiver = K2Node_CustomEvent_HealReceiver;
	Parms.K2Node_CustomEvent_Healing = K2Node_CustomEvent_Healing;
	Parms.K2Node_CustomEvent_HealInstigator = K2Node_CustomEvent_HealInstigator;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.CallFunc_Compare_Damage_Source_Equal = CallFunc_Compare_Damage_Source_Equal;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal = CallFunc_Compare_Damage_Source_Not_Equal;
	Parms.CallFunc_Compare_Damage_Source_Equal1 = CallFunc_Compare_Damage_Source_Equal1;
	Parms.CallFunc_Compare_Damage_Source_Not_Equal1 = CallFunc_Compare_Damage_Source_Not_Equal1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2;
	Parms.CallFunc_GetPetOwnerComponent_ReturnValue3 = CallFunc_GetPetOwnerComponent_ReturnValue3;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3;
	Parms.CallFunc_GetPetOwnerComponent_ReturnValue4 = CallFunc_GetPetOwnerComponent_ReturnValue4;
	Parms.CallFunc_GetPetOwnerComponent_ReturnValue5 = CallFunc_GetPetOwnerComponent_ReturnValue5;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}

}



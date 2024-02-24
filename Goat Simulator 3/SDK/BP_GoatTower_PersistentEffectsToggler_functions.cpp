#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C
// (Actor)

class UClass* ABP_GoatTower_PersistentEffectsToggler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GoatTower_PersistentEffectsToggler_C");

	return Clss;
}


// BP_GoatTower_PersistentEffectsToggler_C BP_GoatTower_PersistentEffectsToggler.Default__BP_GoatTower_PersistentEffectsToggler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GoatTower_PersistentEffectsToggler_C* ABP_GoatTower_PersistentEffectsToggler_C::GetDefaultObj()
{
	static class ABP_GoatTower_PersistentEffectsToggler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GoatTower_PersistentEffectsToggler_C*>(ABP_GoatTower_PersistentEffectsToggler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.ShouldShowInteractHintOnMobile
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::ShouldShowInteractHintOnMobile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "ShouldShowInteractHintOnMobile");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_ShouldShowInteractHintOnMobile_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.CanBeInteractedWith
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSince_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::CanBeInteractedWith(class AActor* SourceActor, float CallFunc_GetTimeSince_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "CanBeInteractedWith");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_CanBeInteractedWith_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.CallFunc_GetTimeSince_ReturnValue = CallFunc_GetTimeSince_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.EndHold
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HeldFor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::EndHold(float HeldFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "EndHold");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_EndHold_Params Parms{};

	Parms.HeldFor = HeldFor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetAutoInteractPastDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::GetAutoInteractPastDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetAutoInteractPastDuration");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetAutoInteractPastDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractNotificationID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_GoatTower_PersistentEffectsToggler_C::GetInteractNotificationID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetInteractNotificationID");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetInteractNotificationID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractNotificationTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag ABP_GoatTower_PersistentEffectsToggler_C::GetInteractNotificationTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetInteractNotificationTag");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetInteractNotificationTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractTextBody
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         InteractingPlayerController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_GoatTower_PersistentEffectsToggler_C::GetInteractTextBody(class AGGPlayerController* InteractingPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetInteractTextBody");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetInteractTextBody_Params Parms{};

	Parms.InteractingPlayerController = InteractingPlayerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetInteractTextTitle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         InteractingPlayerController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class E_Events_PersistentEffectsTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Events_PersistentEffectsTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

class FText ABP_GoatTower_PersistentEffectsToggler_C::GetInteractTextTitle(class AGGPlayerController* InteractingPlayerController, enum class E_Events_PersistentEffects Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class E_Events_PersistentEffects Temp_byte_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetInteractTextTitle");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetInteractTextTitle_Params Parms{};

	Parms.InteractingPlayerController = InteractingPlayerController;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetNPCInteractionChance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_GoatTower_PersistentEffectsToggler_C::GetNPCInteractionChance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetNPCInteractionChance");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetNPCInteractionChance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetNPCRecentInteractDelay
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_GoatTower_PersistentEffectsToggler_C::GetNPCRecentInteractDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetNPCRecentInteractDelay");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetNPCRecentInteractDelay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GetRequiredHoldDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_GoatTower_PersistentEffectsToggler_C::GetRequiredHoldDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GetRequiredHoldDuration");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_GetRequiredHoldDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.Interact
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeldFor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::Interact(class AActor* SourceActor, float HeldFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "Interact");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_Interact_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.HeldFor = HeldFor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.InteractClient
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeldFor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::InteractClient(class AActor* SourceActor, float HeldFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "InteractClient");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_InteractClient_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.HeldFor = HeldFor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.StartHold
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GoatTower_PersistentEffectsToggler_C::StartHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "StartHold");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_StartHold_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.OnRep_bPersistentEffectActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_PersistentEffectsToggler_C::OnRep_bPersistentEffectActive(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "OnRep_bPersistentEffectActive");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_OnRep_bPersistentEffectActive_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_GetIsLoaded_ReturnValue_1 = CallFunc_GetIsLoaded_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Events_PersistentEffectsTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Events_PersistentEffectsTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Events_PersistentEffectsTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Events_PersistentEffectsTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_PersistentEffectsToggler_C::UserConstructionScript(enum class E_Events_PersistentEffects Temp_byte_Variable, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, enum class E_Events_PersistentEffects Temp_byte_Variable_1, const struct FRotator& Temp_struct_Variable_2, const struct FRotator& Temp_struct_Variable_3, enum class E_Events_PersistentEffects Temp_byte_Variable_2, const struct FVector& Temp_struct_Variable_4, const struct FVector& Temp_struct_Variable_5, enum class E_Events_PersistentEffects Temp_byte_Variable_3, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FRotator& K2Node_Select_Default_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FVector& K2Node_Select_Default_2, class UStaticMesh* K2Node_Select_Default_3, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "UserConstructionScript");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_UserConstructionScript_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.TL_SpinMesh__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_GoatTower_PersistentEffectsToggler_C::TL_SpinMesh__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "TL_SpinMesh__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.TL_SpinMesh__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_GoatTower_PersistentEffectsToggler_C::TL_SpinMesh__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "TL_SpinMesh__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_PersistentEffectsToggler_C::BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.StartTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_PersistentEffectsToggler_C::StartTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "StartTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.StopTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_PersistentEffectsToggler_C::StopTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "StopTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GoatTower_PersistentEffectsToggler_C::BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_BndEvt__BP_GoatTower_PersistentEffectsToggler_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnGainedSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.GoatInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GoatTower_PersistentEffectsToggler_C::GoatInteracted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "GoatInteracted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class ABP_Event_TheButterflyEffect_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// TArray<class ABP_Event_LazyWorkers_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class ABP_Event_TheButterflyEffect_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Event_LazyWorkers_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Event_TheButterflyEffect_C*>CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Event_TheButterflyEffect_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Event_LazyWorkers_C*>CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm)
// class ABP_Event_LazyWorkers_C*     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_PersistentEffectsToggler_C::ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler(int32 EntryPoint, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, const struct FVector& CallFunc_VLerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<class ABP_Event_TheButterflyEffect_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABP_Event_LazyWorkers_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_Event_TheButterflyEffect_C* CallFunc_Array_Get_Item, class ABP_Event_LazyWorkers_C* CallFunc_Array_Get_Item_1, TArray<class ABP_Event_TheButterflyEffect_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_Event_TheButterflyEffect_C* CallFunc_Array_Get_Item_2, TArray<class ABP_Event_LazyWorkers_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class ABP_Event_LazyWorkers_C* CallFunc_Array_Get_Item_3, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_ExecuteUbergraph_BP_GoatTower_PersistentEffectsToggler_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GoatTower_PersistentEffectsToggler.BP_GoatTower_PersistentEffectsToggler_C.OnPersistentEffectToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GoatTower_PersistentEffectsToggler_C::OnPersistentEffectToggled__DelegateSignature(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GoatTower_PersistentEffectsToggler_C", "OnPersistentEffectToggled__DelegateSignature");

	Params::ABP_GoatTower_PersistentEffectsToggler_C_OnPersistentEffectToggled__DelegateSignature_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}

}



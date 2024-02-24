#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Building_Deconstruct.GA_Building_Deconstruct_C
// (None)

class UClass* UGA_Building_Deconstruct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Building_Deconstruct_C");

	return Clss;
}


// GA_Building_Deconstruct_C GA_Building_Deconstruct.Default__GA_Building_Deconstruct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Building_Deconstruct_C* UGA_Building_Deconstruct_C::GetDefaultObj()
{
	static class UGA_Building_Deconstruct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Building_Deconstruct_C*>(UGA_Building_Deconstruct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.PlayDeconstructionSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStructureState         StructureState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkAudioEventUncomplete                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkAudioEventComplete                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ActivatingPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAssociatedAkEvent_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetActivatingCharacter_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::PlayDeconstructionSound(enum class EStructureState StructureState, class UAkAudioEvent* AkAudioEventUncomplete, class UAkAudioEvent* AkAudioEventComplete, class UAkComponent* AkComponent, class APawn* ActivatingPawn, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, class UAkAudioEvent* K2Node_Select_Default, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkSwitchValue* K2Node_Select_Default_1, class ACharacter* CallFunc_GetActivatingCharacter_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "PlayDeconstructionSound");

	Params::UGA_Building_Deconstruct_C_PlayDeconstructionSound_Params Parms{};

	Parms.StructureState = StructureState;
	Parms.AkAudioEventUncomplete = AkAudioEventUncomplete;
	Parms.AkAudioEventComplete = AkAudioEventComplete;
	Parms.AkComponent = AkComponent;
	Parms.ActivatingPawn = ActivatingPawn;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PostAssociatedAkEvent_ReturnValue = CallFunc_PostAssociatedAkEvent_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetActivatingCharacter_Character = CallFunc_GetActivatingCharacter_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnCopyCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnCopyCancelled(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnCopyCancelled");

	Params::UGA_Building_Deconstruct_C_OnCopyCancelled_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnCopyConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Deconstruct_C::OnCopyConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnCopyConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnDeconstructCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnDeconstructCancelled");

	Params::UGA_Building_Deconstruct_C_OnDeconstructCancelled_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnDeconstructConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Deconstruct_C::OnDeconstructConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnDeconstructConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnEndBuilding
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnEndBuilding(enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnEndBuilding");

	Params::UGA_Building_Deconstruct_C_OnEndBuilding_Params Parms{};

	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnMovementCancelled
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     MovingStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnMovementCancelled");

	Params::UGA_Building_Deconstruct_C_OnMovementCancelled_Params Parms{};

	Parms.MovingStructure = MovingStructure;
	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnMovementConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     MovingStructure                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnMovementConfirmed(class UObject* MovingStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnMovementConfirmed");

	Params::UGA_Building_Deconstruct_C_OnMovementConfirmed_Params Parms{};

	Parms.MovingStructure = MovingStructure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnPlacementCancelled
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class EBuildingFeedback       FeedbackId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnPlacementCancelled");

	Params::UGA_Building_Deconstruct_C_OnPlacementCancelled_Params Parms{};

	Parms.StructureReference = StructureReference;
	Parms.FeedbackId = FeedbackId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnPlacementConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bRefire                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnPlacementConfirmed(bool bRefire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnPlacementConfirmed");

	Params::UGA_Building_Deconstruct_C_OnPlacementConfirmed_Params Parms{};

	Parms.bRefire = bRefire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnPlacePreviewStructure
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IgnoreStructureBudgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnPlacePreviewStructure");

	Params::UGA_Building_Deconstruct_C_OnPlacePreviewStructure_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.StructureReference = StructureReference;
	Parms.IgnoreStructureBudgets = IgnoreStructureBudgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStartBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Deconstruct_C::OnStartBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStartBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStartCopy
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnStartCopy(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStartCopy");

	Params::UGA_Building_Deconstruct_C_OnStartCopy_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStartMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnStartMovement(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStartMovement");

	Params::UGA_Building_Deconstruct_C_OnStartMovement_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStartPlacing
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnStartPlacing(struct FStructureAssetReference& StructureReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStartPlacing");

	Params::UGA_Building_Deconstruct_C_OnStartPlacing_Params Parms{};

	Parms.StructureReference = StructureReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStructureSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     SpawnedStructure                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnStructureSpawned(class UObject* SpawnedStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStructureSpawned");

	Params::UGA_Building_Deconstruct_C_OnStructureSpawned_Params Parms{};

	Parms.SpawnedStructure = SpawnedStructure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.ServerOnly_OnSpawnStructure
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructureAssetReference    StructureReference                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IgnoreStructureBudgets                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "ServerOnly_OnSpawnStructure");

	Params::UGA_Building_Deconstruct_C_ServerOnly_OnSpawnStructure_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.StructureReference = StructureReference;
	Parms.IgnoreStructureBudgets = IgnoreStructureBudgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Building_Deconstruct_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStartDeconstruct
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::OnStartDeconstruct(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStartDeconstruct");

	Params::UGA_Building_Deconstruct_C_OnStartDeconstruct_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "K2_OnEndAbility");

	Params::UGA_Building_Deconstruct_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.OnStructureDeconstructed
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Building_Deconstruct_C::OnStructureDeconstructed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "OnStructureDeconstructed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Building_Deconstruct.GA_Building_Deconstruct_C.ExecuteUbergraph_GA_Building_Deconstruct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_MovingStructure_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_MovingStructure                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureReference_3                                (ConstParm, HasGetValueTypeHash)
// enum class EBuildingFeedback       K2Node_Event_FeedbackId                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRefire                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetData_1                                        (ConstParm)
// struct FStructureAssetReference    K2Node_Event_StructureReference_2                                (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IgnoreStructureBudgets_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure_2                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructureAssetReference    K2Node_Event_StructureReference_1                                (ConstParm, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_SpawnedStructure                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_Event_TargetData                                          (ConstParm)
// struct FStructureAssetReference    K2Node_Event_StructureReference                                  (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IgnoreStructureBudgets                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetActivatingController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetActivatingController_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Structure                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingEventInterface>CallFunc_AddBuildingEventListener_Listener_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IBuildingInterface>K2Node_DynamicCast_AsBuilding_Interface_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Building_Deconstruct_C::ExecuteUbergraph_GA_Building_Deconstruct(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, class UObject* K2Node_Event_MovingStructure, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, enum class EBuildingFeedback K2Node_Event_FeedbackId, bool K2Node_Event_bRefire, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, class UObject* K2Node_Event_SpawnedStructure, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference, bool K2Node_Event_IgnoreStructureBudgets, bool CallFunc_K2_CommitAbility_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_Event_Structure, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_Event_bWasCancelled, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TSubclassOf<class IInterface> Temp_class_Variable, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_FindFirstImplementor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Building_Deconstruct_C", "ExecuteUbergraph_GA_Building_Deconstruct");

	Params::UGA_Building_Deconstruct_C_ExecuteUbergraph_GA_Building_Deconstruct_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_FeedbackId_4 = K2Node_Event_FeedbackId_4;
	Parms.K2Node_Event_FeedbackId_3 = K2Node_Event_FeedbackId_3;
	Parms.K2Node_Event_FeedbackId_2 = K2Node_Event_FeedbackId_2;
	Parms.K2Node_Event_MovingStructure_1 = K2Node_Event_MovingStructure_1;
	Parms.K2Node_Event_FeedbackId_1 = K2Node_Event_FeedbackId_1;
	Parms.K2Node_Event_MovingStructure = K2Node_Event_MovingStructure;
	Parms.K2Node_Event_StructureReference_3 = K2Node_Event_StructureReference_3;
	Parms.K2Node_Event_FeedbackId = K2Node_Event_FeedbackId;
	Parms.K2Node_Event_bRefire = K2Node_Event_bRefire;
	Parms.K2Node_Event_TargetData_1 = K2Node_Event_TargetData_1;
	Parms.K2Node_Event_StructureReference_2 = K2Node_Event_StructureReference_2;
	Parms.K2Node_Event_IgnoreStructureBudgets_1 = K2Node_Event_IgnoreStructureBudgets_1;
	Parms.K2Node_Event_Structure_2 = K2Node_Event_Structure_2;
	Parms.K2Node_Event_Structure_1 = K2Node_Event_Structure_1;
	Parms.K2Node_Event_StructureReference_1 = K2Node_Event_StructureReference_1;
	Parms.K2Node_Event_SpawnedStructure = K2Node_Event_SpawnedStructure;
	Parms.K2Node_Event_TargetData = K2Node_Event_TargetData;
	Parms.K2Node_Event_StructureReference = K2Node_Event_StructureReference;
	Parms.K2Node_Event_IgnoreStructureBudgets = K2Node_Event_IgnoreStructureBudgets;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActivatingController_ReturnValue = CallFunc_GetActivatingController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActivatingController_ReturnValue_1 = CallFunc_GetActivatingController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBuilding_Interface = K2Node_DynamicCast_AsBuilding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Structure = K2Node_Event_Structure;
	Parms.CallFunc_AddBuildingEventListener_Listener_CastInput = CallFunc_AddBuildingEventListener_Listener_CastInput;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_1 = K2Node_DynamicCast_AsBuilding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_DynamicCast_AsBuilding_Interface_2 = K2Node_DynamicCast_AsBuilding_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



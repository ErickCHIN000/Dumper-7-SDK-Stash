#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpellAVFXComponent.BP_SpellAVFXComponent_C
// (None)

class UClass* UBP_SpellAVFXComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpellAVFXComponent_C");

	return Clss;
}


// BP_SpellAVFXComponent_C BP_SpellAVFXComponent.Default__BP_SpellAVFXComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SpellAVFXComponent_C* UBP_SpellAVFXComponent_C::GetDefaultObj()
{
	static class UBP_SpellAVFXComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SpellAVFXComponent_C*>(UBP_SpellAVFXComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.UpdateFirstThirdPersonRTPCValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          ScopedAk                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::UpdateFirstThirdPersonRTPCValue(class UScopedAkComponent* ScopedAk, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsFirstPersonCharacter_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "UpdateFirstThirdPersonRTPCValue");

	Params::UBP_SpellAVFXComponent_C_UpdateFirstThirdPersonRTPCValue_Params Parms{};

	Parms.ScopedAk = ScopedAk;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue = CallFunc_IsFirstPersonCharacter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.EndAllAVFXForSpell
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SpellTag                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        AllSpellcastingStates                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::EndAllAVFXForSpell(struct FGameplayTag& SpellTag, const TArray<struct FGameplayTag>& AllSpellcastingStates, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "EndAllAVFXForSpell");

	Params::UBP_SpellAVFXComponent_C_EndAllAVFXForSpell_Params Parms{};

	Parms.SpellTag = SpellTag;
	Parms.AllSpellcastingStates = AllSpellcastingStates;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleAnimNotifyEnd
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SpellcastingStateTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               IsSFXNotify                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVFXNotify                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleAnimNotifyEnd(class USkeletalMeshComponent* MeshComponent, struct FGameplayTag& SpellcastingStateTag, bool IsSFXNotify, bool IsVFXNotify, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleAnimNotifyEnd");

	Params::UBP_SpellAVFXComponent_C_HandleAnimNotifyEnd_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.SpellcastingStateTag = SpellcastingStateTag;
	Parms.IsSFXNotify = IsSFXNotify;
	Parms.IsVFXNotify = IsVFXNotify;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleAnimNotifyTick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SpellcastingStateTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               IsSFXNotify                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVFXNotify                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleAnimNotifyTick(class USkeletalMeshComponent* MeshComponent, struct FGameplayTag& SpellcastingStateTag, bool IsSFXNotify, bool IsVFXNotify, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleAnimNotifyTick");

	Params::UBP_SpellAVFXComponent_C_HandleAnimNotifyTick_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.SpellcastingStateTag = SpellcastingStateTag;
	Parms.IsSFXNotify = IsSFXNotify;
	Parms.IsVFXNotify = IsVFXNotify;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleAnimNotifyBegin
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SpellcastingStateTag                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               IsSFXNotify                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsVFXNotify                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleAnimNotifyBegin(class USkeletalMeshComponent* MeshComponent, struct FGameplayTag& SpellcastingStateTag, bool IsSFXNotify, bool IsVFXNotify, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleAnimNotifyBegin");

	Params::UBP_SpellAVFXComponent_C_HandleAnimNotifyBegin_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.SpellcastingStateTag = SpellcastingStateTag;
	Parms.IsSFXNotify = IsSFXNotify;
	Parms.IsVFXNotify = IsVFXNotify;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.AttachComponentToCorrectFocusSocket
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             ThingToAttach                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleCharacterMesh_VisibleMesh                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleCharacterMesh_VisibleMesh_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::AttachComponentToCorrectFocusSocket(class USceneComponent* ThingToAttach, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_VisibleMesh, bool CallFunc_K2_AttachToComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_VisibleMesh_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "AttachComponentToCorrectFocusSocket");

	Params::UBP_SpellAVFXComponent_C_AttachComponentToCorrectFocusSocket_Params Parms{};

	Parms.ThingToAttach = ThingToAttach;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVisibleCharacterMesh_VisibleMesh = CallFunc_GetVisibleCharacterMesh_VisibleMesh;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetVisibleCharacterMesh_VisibleMesh_1 = CallFunc_GetVisibleCharacterMesh_VisibleMesh_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.SpawnAttachedSpellcastingScopedAk
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          SpawnedScopedAk                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          SpawnedAk                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleCharacterMesh_VisibleMesh                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::SpawnAttachedSpellcastingScopedAk(class UScopedAkComponent** SpawnedScopedAk, bool IsLocalPlayer, class UScopedAkComponent* SpawnedAk, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class UScopedAkComponent* CallFunc_AddComponentByClass_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_VisibleMesh, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "SpawnAttachedSpellcastingScopedAk");

	Params::UBP_SpellAVFXComponent_C_SpawnAttachedSpellcastingScopedAk_Params Parms{};

	Parms.IsLocalPlayer = IsLocalPlayer;
	Parms.SpawnedAk = SpawnedAk;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetVisibleCharacterMesh_VisibleMesh = CallFunc_GetVisibleCharacterMesh_VisibleMesh;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedScopedAk != nullptr)
		*SpawnedScopedAk = Parms.SpawnedScopedAk;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleFirstThirdPersonUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsThirdPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleFirstThirdPersonUpdated(bool IsThirdPerson, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp_1, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleFirstThirdPersonUpdated");

	Params::UBP_SpellAVFXComponent_C_HandleFirstThirdPersonUpdated_Params Parms{};

	Parms.IsThirdPerson = IsThirdPerson;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp = CallFunc_GetScopedAkComponent_ScopedAkComp;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp_1 = CallFunc_GetScopedAkComponent_ScopedAkComp_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp_2 = CallFunc_GetScopedAkComponent_ScopedAkComp_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.ResolveSpellcastAudio
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AudioSpellcasting        SpellcastingAudioStruct                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>StartEvent                                                       (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>StopEvent                                                        (Parm, OutParm, HasGetValueTypeHash)
// class AEquippableItem*             EquippedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1           (None)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2           (None)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_3           (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_1                      (UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_2                      (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_3                      (UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::ResolveSpellcastAudio(struct FS_AudioSpellcasting& SpellcastingAudioStruct, TSoftObjectPtr<class UAkAudioEvent>* StartEvent, TSoftObjectPtr<class UAkAudioEvent>* StopEvent, class AEquippableItem* EquippedItem, class AEquippableItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_3, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_2, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "ResolveSpellcastAudio");

	Params::UBP_SpellAVFXComponent_C_ResolveSpellcastAudio_Params Parms{};

	Parms.SpellcastingAudioStruct = SpellcastingAudioStruct;
	Parms.EquippedItem = EquippedItem;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_3 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_3;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue = CallFunc_ResolveTaggableSound_ReturnValue;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_1 = CallFunc_ResolveTaggableSound_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_2 = CallFunc_ResolveTaggableSound_ReturnValue_2;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_3 = CallFunc_ResolveTaggableSound_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StartEvent != nullptr)
		*StartEvent = Parms.StartEvent;

	if (StopEvent != nullptr)
		*StopEvent = Parms.StopEvent;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.SubscribeToFirstThirdPersonSwitch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::SubscribeToFirstThirdPersonSwitch(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "SubscribeToFirstThirdPersonSwitch");

	Params::UBP_SpellAVFXComponent_C_SubscribeToFirstThirdPersonSwitch_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.GetVisibleToolMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEquippableItem*             EquippableItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      VisibleMesh                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      LightweightItemMeshRoot                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ALightweightAttachedItem*    LightweightItem                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             LEquippableItem                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::GetVisibleToolMesh(class AEquippableItem* EquippableItem, class USkeletalMeshComponent** VisibleMesh, class USkeletalMeshComponent* LightweightItemMeshRoot, class ALightweightAttachedItem* LightweightItem, class AEquippableItem* LEquippableItem, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsFirstPersonCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "GetVisibleToolMesh");

	Params::UBP_SpellAVFXComponent_C_GetVisibleToolMesh_Params Parms{};

	Parms.EquippableItem = EquippableItem;
	Parms.LightweightItemMeshRoot = LightweightItemMeshRoot;
	Parms.LightweightItem = LightweightItem;
	Parms.LEquippableItem = LEquippableItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue = CallFunc_IsFirstPersonCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (VisibleMesh != nullptr)
		*VisibleMesh = Parms.VisibleMesh;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.GetVisibleCharacterMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      VisibleMesh                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetTPSkeletalMesh_TPSkeletalMesh                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetFPSkeletalMesh_FPSkeletalMesh                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::GetVisibleCharacterMesh(class USkeletalMeshComponent** VisibleMesh, class USkeletalMeshComponent* CallFunc_GetTPSkeletalMesh_TPSkeletalMesh, class USkeletalMeshComponent* CallFunc_GetFPSkeletalMesh_FPSkeletalMesh, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsFirstPersonCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "GetVisibleCharacterMesh");

	Params::UBP_SpellAVFXComponent_C_GetVisibleCharacterMesh_Params Parms{};

	Parms.CallFunc_GetTPSkeletalMesh_TPSkeletalMesh = CallFunc_GetTPSkeletalMesh_TPSkeletalMesh;
	Parms.CallFunc_GetFPSkeletalMesh_FPSkeletalMesh = CallFunc_GetFPSkeletalMesh_FPSkeletalMesh;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue = CallFunc_IsFirstPersonCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (VisibleMesh != nullptr)
		*VisibleMesh = Parms.VisibleMesh;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.GetTPSkeletalMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      TPSkeletalMesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::GetTPSkeletalMesh(class USkeletalMeshComponent** TPSkeletalMesh, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "GetTPSkeletalMesh");

	Params::UBP_SpellAVFXComponent_C_GetTPSkeletalMesh_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TPSkeletalMesh != nullptr)
		*TPSkeletalMesh = Parms.TPSkeletalMesh;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.GetFPSkeletalMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      FPSkeletalMesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_DynamicCast_AsNWXCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::GetFPSkeletalMesh(class USkeletalMeshComponent** FPSkeletalMesh, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "GetFPSkeletalMesh");

	Params::UBP_SpellAVFXComponent_C_GetFPSkeletalMesh_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXCharacter = K2Node_DynamicCast_AsNWXCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FPSkeletalMesh != nullptr)
		*FPSkeletalMesh = Parms.FPSkeletalMesh;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.GetScopedAkComponent
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScopedAkComponent*          ScopedAkComp                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnAttachedSpellcastingScopedAk_SpawnedScopedAk       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::GetScopedAkComponent(class UScopedAkComponent** ScopedAkComp, class UScopedAkComponent* CallFunc_SpawnAttachedSpellcastingScopedAk_SpawnedScopedAk, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "GetScopedAkComponent");

	Params::UBP_SpellAVFXComponent_C_GetScopedAkComponent_Params Parms{};

	Parms.CallFunc_SpawnAttachedSpellcastingScopedAk_SpawnedScopedAk = CallFunc_SpawnAttachedSpellcastingScopedAk_SpawnedScopedAk;
	Parms.CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue = CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ScopedAkComp != nullptr)
		*ScopedAkComp = Parms.ScopedAkComp;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.SpawnAndInitializeVFX
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_VFXSpellcasting_Data     VFXData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraInstance                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             EquippedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      ToolMesh                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraSystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleToolMesh_VisibleMesh                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::SpawnAndInitializeVFX(class USkeletalMeshComponent* MeshComponent, const struct FS_VFXSpellcasting_Data& VFXData, class UNiagaraComponent** NiagaraInstance, class AEquippableItem* EquippedItem, bool IsFirstPerson, class USkeletalMeshComponent* ToolMesh, class UNiagaraComponent* NiagaraSystem, float Temp_real_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_real_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AEquippableItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetVisibleToolMesh_VisibleMesh, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsFirstPersonCharacter_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsFirstPersonCharacter_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, double K2Node_Select_Default_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "SpawnAndInitializeVFX");

	Params::UBP_SpellAVFXComponent_C_SpawnAndInitializeVFX_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.VFXData = VFXData;
	Parms.EquippedItem = EquippedItem;
	Parms.IsFirstPerson = IsFirstPerson;
	Parms.ToolMesh = ToolMesh;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVisibleToolMesh_VisibleMesh = CallFunc_GetVisibleToolMesh_VisibleMesh;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue = CallFunc_IsFirstPersonCharacter_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue_1 = CallFunc_IsFirstPersonCharacter_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful = CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful;
	Parms.CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned = CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_5 = CallFunc_SetFloatParameter_Param_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_6 = CallFunc_SetFloatParameter_Param_ImplicitCast_6;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_7 = CallFunc_SetFloatParameter_Param_ImplicitCast_7;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraInstance != nullptr)
		*NiagaraInstance = Parms.NiagaraInstance;

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleLoopingAudioLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedStartEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               LoadedStopEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleLoopingAudioLoaded(class UAkAudioEvent* LoadedStartEvent, class UAkAudioEvent* LoadedStopEvent, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp_1, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleLoopingAudioLoaded");

	Params::UBP_SpellAVFXComponent_C_HandleLoopingAudioLoaded_Params Parms{};

	Parms.LoadedStartEvent = LoadedStartEvent;
	Parms.LoadedStopEvent = LoadedStopEvent;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp = CallFunc_GetScopedAkComponent_ScopedAkComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp_1 = CallFunc_GetScopedAkComponent_ScopedAkComp_1;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp_2 = CallFunc_GetScopedAkComponent_ScopedAkComp_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleOneShotAudioLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetScopedAkComponent_ScopedAkComp_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleOneShotAudioLoaded(class UAkAudioEvent* LoadedEvent, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp_1, class UScopedAkComponent* CallFunc_GetScopedAkComponent_ScopedAkComp_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleOneShotAudioLoaded");

	Params::UBP_SpellAVFXComponent_C_HandleOneShotAudioLoaded_Params Parms{};

	Parms.LoadedEvent = LoadedEvent;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp = CallFunc_GetScopedAkComponent_ScopedAkComp;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp_1 = CallFunc_GetScopedAkComponent_ScopedAkComp_1;
	Parms.CallFunc_GetScopedAkComponent_ScopedAkComp_2 = CallFunc_GetScopedAkComponent_ScopedAkComp_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleReattachVFXSockets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsThirdPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             EquippedItem                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FSpellcastNiagaraInstance   CurrentInstanceData                                              (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference)
// struct FGameplayTag                CurrentStateTag                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrentSpellTag                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleToolMesh_VisibleMesh                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpellcastNiagaraInstance   CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVisibleCharacterMesh_VisibleMesh                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleReattachVFXSockets(bool IsThirdPerson, class AEquippableItem* EquippedItem, const struct FSpellcastNiagaraInstance& CurrentInstanceData, const struct FGameplayTag& CurrentStateTag, const struct FGameplayTag& CurrentSpellTag, class AEquippableItem* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVisibleToolMesh_VisibleMesh, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FSpellcastNiagaraInstance& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Select_Default, class FName CallFunc_GetAttachSocketName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default_1, class USkeletalMeshComponent* CallFunc_GetVisibleCharacterMesh_VisibleMesh, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleReattachVFXSockets");

	Params::UBP_SpellAVFXComponent_C_HandleReattachVFXSockets_Params Parms{};

	Parms.IsThirdPerson = IsThirdPerson;
	Parms.EquippedItem = EquippedItem;
	Parms.CurrentInstanceData = CurrentInstanceData;
	Parms.CurrentStateTag = CurrentStateTag;
	Parms.CurrentSpellTag = CurrentSpellTag;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVisibleToolMesh_VisibleMesh = CallFunc_GetVisibleToolMesh_VisibleMesh;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAttachSocketName_ReturnValue = CallFunc_GetAttachSocketName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetVisibleCharacterMesh_VisibleMesh = CallFunc_GetVisibleCharacterMesh_VisibleMesh;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.GetCastingStateFromNotifyName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CastingState                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::GetCastingStateFromNotifyName(class FName NotifyName, bool* Success, struct FGameplayTag* CastingState, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "GetCastingStateFromNotifyName");

	Params::UBP_SpellAVFXComponent_C_GetCastingStateFromNotifyName_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (CastingState != nullptr)
		*CastingState = std::move(Parms.CastingState);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleVFXEnd
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SpellTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CastingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpellcastNiagaraInstance   CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleVFXEnd(const struct FGameplayTag& SpellTag, const struct FGameplayTag& CastingState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSpellcastNiagaraInstance& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleVFXEnd");

	Params::UBP_SpellAVFXComponent_C_HandleVFXEnd_Params Parms{};

	Parms.SpellTag = SpellTag;
	Parms.CastingState = CastingState;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue_1 = CallFunc_MatchesTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleVFXTick
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      MeshComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSpellcastNiagaraInstance   CurrentVFXParams                                                 (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference)
// struct FSpellcastNiagaraInstance   CurrentNiagaraInstance                                           (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpellcastNiagaraInstance   CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleVFXTick(class USkeletalMeshComponent* MeshComponent, const struct FSpellcastNiagaraInstance& CurrentVFXParams, const struct FSpellcastNiagaraInstance& CurrentNiagaraInstance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSpellcastNiagaraInstance& CallFunc_Array_Get_Item, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleVFXTick");

	Params::UBP_SpellAVFXComponent_C_HandleVFXTick_Params Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.CurrentVFXParams = CurrentVFXParams;
	Parms.CurrentNiagaraInstance = CurrentNiagaraInstance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleVFXBegin
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      AttachMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SpellTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CastingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           NiagaraInstance                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_VFXSpellcasting_Data     CurrentVFXData                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VFXSpellcasting          CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// struct FS_VFXSpellcasting_Data     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnAndInitializeVFX_NiagaraInstance                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RegisterSpellVFX_VFXScaleFirstPerson_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RegisterSpellVFX_VFXScaleThirdPerson_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleVFXBegin(class USkeletalMeshComponent* AttachMesh, const struct FGameplayTag& SpellTag, const struct FGameplayTag& CastingState, class UNiagaraComponent* NiagaraInstance, const struct FS_VFXSpellcasting_Data& CurrentVFXData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_VFXSpellcasting& CallFunc_GetTableCellData_OutData, const struct FS_VFXSpellcasting_Data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnAndInitializeVFX_NiagaraInstance, float CallFunc_RegisterSpellVFX_VFXScaleFirstPerson_ImplicitCast, float CallFunc_RegisterSpellVFX_VFXScaleThirdPerson_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleVFXBegin");

	Params::UBP_SpellAVFXComponent_C_HandleVFXBegin_Params Parms{};

	Parms.AttachMesh = AttachMesh;
	Parms.SpellTag = SpellTag;
	Parms.CastingState = CastingState;
	Parms.NiagaraInstance = NiagaraInstance;
	Parms.CurrentVFXData = CurrentVFXData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SpawnAndInitializeVFX_NiagaraInstance = CallFunc_SpawnAndInitializeVFX_NiagaraInstance;
	Parms.CallFunc_RegisterSpellVFX_VFXScaleFirstPerson_ImplicitCast = CallFunc_RegisterSpellVFX_VFXScaleFirstPerson_ImplicitCast;
	Parms.CallFunc_RegisterSpellVFX_VFXScaleThirdPerson_ImplicitCast = CallFunc_RegisterSpellVFX_VFXScaleThirdPerson_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleSFXEnd
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SpellTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CastingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftAkEvent                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioSpellcasting        CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSpellcastAudio_StartEvent                        (HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSpellcastAudio_StopEvent                         (HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleSFXEnd(const struct FGameplayTag& SpellTag, const struct FGameplayTag& CastingState, TSoftObjectPtr<class UAkAudioEvent> SoftAkEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, const struct FS_AudioSpellcasting& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSpellcastAudio_StartEvent, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSpellcastAudio_StopEvent, bool CallFunc_IsInEditorPreview_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleSFXEnd");

	Params::UBP_SpellAVFXComponent_C_HandleSFXEnd_Params Parms{};

	Parms.SpellTag = SpellTag;
	Parms.CastingState = CastingState;
	Parms.SoftAkEvent = SoftAkEvent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_ResolveSpellcastAudio_StartEvent = CallFunc_ResolveSpellcastAudio_StartEvent;
	Parms.CallFunc_ResolveSpellcastAudio_StopEvent = CallFunc_ResolveSpellcastAudio_StopEvent;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleSFXInterrupt
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SpellTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CastingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftAkEvent                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioSpellcasting        CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleSFXInterrupt(const struct FGameplayTag& SpellTag, const struct FGameplayTag& CastingState, TSoftObjectPtr<class UAkAudioEvent> SoftAkEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_AudioSpellcasting& CallFunc_GetTableCellData_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleSFXInterrupt");

	Params::UBP_SpellAVFXComponent_C_HandleSFXInterrupt_Params Parms{};

	Parms.SpellTag = SpellTag;
	Parms.CastingState = CastingState;
	Parms.SoftAkEvent = SoftAkEvent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.HandleSFXBegin
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SpellTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CastingState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftStopAkEvent                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftStartAkEvent                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioSpellcasting        CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSpellcastAudio_StartEvent                        (HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSpellcastAudio_StopEvent                         (HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInEditorPreview_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::HandleSFXBegin(const struct FGameplayTag& SpellTag, const struct FGameplayTag& CastingState, TSoftObjectPtr<class UAkAudioEvent> SoftStopAkEvent, TSoftObjectPtr<class UAkAudioEvent> SoftStartAkEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, const struct FS_AudioSpellcasting& CallFunc_GetTableCellData_OutData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_1, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSpellcastAudio_StartEvent, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSpellcastAudio_StopEvent, bool CallFunc_IsInEditorPreview_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, bool CallFunc_IsInEditorPreview_ReturnValue_1, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "HandleSFXBegin");

	Params::UBP_SpellAVFXComponent_C_HandleSFXBegin_Params Parms{};

	Parms.SpellTag = SpellTag;
	Parms.CastingState = CastingState;
	Parms.SoftStopAkEvent = SoftStopAkEvent;
	Parms.SoftStartAkEvent = SoftStartAkEvent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_1 = K2Node_DynamicCast_AsAk_Audio_Event_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ResolveSpellcastAudio_StartEvent = CallFunc_ResolveSpellcastAudio_StartEvent;
	Parms.CallFunc_ResolveSpellcastAudio_StopEvent = CallFunc_ResolveSpellcastAudio_StopEvent;
	Parms.CallFunc_IsInEditorPreview_ReturnValue = CallFunc_IsInEditorPreview_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_2 = CallFunc_LoadAsset_Blocking_ReturnValue_2;
	Parms.CallFunc_IsInEditorPreview_ReturnValue_1 = CallFunc_IsInEditorPreview_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event_2 = K2Node_DynamicCast_AsAk_Audio_Event_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SpellAVFXComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpellAVFXComponent.BP_SpellAVFXComponent_C.ExecuteUbergraph_BP_SpellAVFXComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpellAVFXComponent_C::ExecuteUbergraph_BP_SpellAVFXComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpellAVFXComponent_C", "ExecuteUbergraph_BP_SpellAVFXComponent");

	Params::UBP_SpellAVFXComponent_C_ExecuteUbergraph_BP_SpellAVFXComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



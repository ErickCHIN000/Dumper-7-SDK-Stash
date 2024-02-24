#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C
// (None)

class UClass* UBP_EquippableItemAudioComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquippableItemAudioComponent_C");

	return Clss;
}


// BP_EquippableItemAudioComponent_C BP_EquippableItemAudioComponent.Default__BP_EquippableItemAudioComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EquippableItemAudioComponent_C* UBP_EquippableItemAudioComponent_C::GetDefaultObj()
{
	static class UBP_EquippableItemAudioComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EquippableItemAudioComponent_C*>(UBP_EquippableItemAudioComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.GetFPTPRTPCValue
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             RTPCValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThirdPerson_ThirdPerson                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::GetFPTPRTPCValue(double* RTPCValue, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_IsThirdPerson_ThirdPerson, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "GetFPTPRTPCValue");

	Params::UBP_EquippableItemAudioComponent_C_GetFPTPRTPCValue_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_IsThirdPerson_ThirdPerson = CallFunc_IsThirdPerson_ThirdPerson;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (RTPCValue != nullptr)
		*RTPCValue = Parms.RTPCValue;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.InformEmoteComponetEquippedChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Emote_Component_C*       EmoteComponent                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ParentActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Emote_Component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::InformEmoteComponetEquippedChanged(class UBP_Emote_Component_C* EmoteComponent, class AActor* ParentActor, bool CallFunc_IsValid_ReturnValue, class UBP_Emote_Component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "InformEmoteComponetEquippedChanged");

	Params::UBP_EquippableItemAudioComponent_C_InformEmoteComponetEquippedChanged_Params Parms{};

	Parms.EmoteComponent = EmoteComponent;
	Parms.ParentActor = ParentActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.ResolveStartStopEvent
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FS_AudioStartStopEventPair  StartStopPair                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsStop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftEvent                                                        (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>K2Node_Select_Default                                            (HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::ResolveStartStopEvent(const struct FS_AudioStartStopEventPair& StartStopPair, bool IsStop, TSoftObjectPtr<class UAkAudioEvent>* SoftEvent, bool Temp_bool_Variable, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "ResolveStartStopEvent");

	Params::UBP_EquippableItemAudioComponent_C_ResolveStartStopEvent_Params Parms{};

	Parms.StartStopPair = StartStopPair;
	Parms.IsStop = IsStop;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (SoftEvent != nullptr)
		*SoftEvent = Parms.SoftEvent;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.ResolveSwingAudioType
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FS_ItemAudioSwingTypes      SwingAudio                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsHeavy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftEvent                                                        (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>ResolvedSoftEvent                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveStartStopEvent_SoftEvent                         (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioStartStopEventPair  K2Node_Select_Default                                            (HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveStartStopEvent_SoftEvent_1                       (HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::ResolveSwingAudioType(const struct FS_ItemAudioSwingTypes& SwingAudio, bool IsHeavy, bool IsStop, TSoftObjectPtr<class UAkAudioEvent>* SoftEvent, TSoftObjectPtr<class UAkAudioEvent> ResolvedSoftEvent, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveStartStopEvent_SoftEvent, bool CallFunc_BooleanAND_ReturnValue, const struct FS_AudioStartStopEventPair& K2Node_Select_Default, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveStartStopEvent_SoftEvent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "ResolveSwingAudioType");

	Params::UBP_EquippableItemAudioComponent_C_ResolveSwingAudioType_Params Parms{};

	Parms.SwingAudio = SwingAudio;
	Parms.IsHeavy = IsHeavy;
	Parms.IsStop = IsStop;
	Parms.ResolvedSoftEvent = ResolvedSoftEvent;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ResolveStartStopEvent_SoftEvent = CallFunc_ResolveStartStopEvent_SoftEvent;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ResolveStartStopEvent_SoftEvent_1 = CallFunc_ResolveStartStopEvent_SoftEvent_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SoftEvent != nullptr)
		*SoftEvent = Parms.SoftEvent;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.ResolveSwingAudioStruct
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FS_ItemAudioSwings          SwingAudioStruct                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ESwingDirection         Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHeavy                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftAudioEvent                                                   (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>ResolvedSoftEvent                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSwingAudioType_SoftEvent                         (HasGetValueTypeHash)
// struct FS_ItemAudioSwingTypes      CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSwingAudioType_SoftEvent_1                       (HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::ResolveSwingAudioStruct(const struct FS_ItemAudioSwings& SwingAudioStruct, enum class ESwingDirection Direction, bool IsHeavy, bool IsStop, TSoftObjectPtr<class UAkAudioEvent>* SoftAudioEvent, TSoftObjectPtr<class UAkAudioEvent> ResolvedSoftEvent, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSwingAudioType_SoftEvent, const struct FS_ItemAudioSwingTypes& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSwingAudioType_SoftEvent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "ResolveSwingAudioStruct");

	Params::UBP_EquippableItemAudioComponent_C_ResolveSwingAudioStruct_Params Parms{};

	Parms.SwingAudioStruct = SwingAudioStruct;
	Parms.Direction = Direction;
	Parms.IsHeavy = IsHeavy;
	Parms.IsStop = IsStop;
	Parms.ResolvedSoftEvent = ResolvedSoftEvent;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_ResolveSwingAudioType_SoftEvent = CallFunc_ResolveSwingAudioType_SoftEvent;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_ResolveSwingAudioType_SoftEvent_1 = CallFunc_ResolveSwingAudioType_SoftEvent_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SoftAudioEvent != nullptr)
		*SoftAudioEvent = Parms.SoftAudioEvent;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleFuelAudioLoaded
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleFuelAudioLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleFuelAudioLoaded");

	Params::UBP_EquippableItemAudioComponent_C_HandleFuelAudioLoaded_Params Parms{};

	Parms.LoadedEvent = LoadedEvent;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleCharacterViewUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsThirdPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FPTPRTPCValue                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                DurabilityScopedAk                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFPTPRTPCValue_RTPCValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAttachToItemMeshSocket_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAttachToItemMeshSocket_Success_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAttachToItemMeshSocket_Success_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleCharacterViewUpdated(bool IsThirdPerson, double FPTPRTPCValue, class UAkComponent* DurabilityScopedAk, double CallFunc_GetFPTPRTPCValue_RTPCValue, class UAkComponent* CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryAttachToItemMeshSocket_Success, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_TryAttachToItemMeshSocket_Success_1, bool CallFunc_TryAttachToItemMeshSocket_Success_2, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleCharacterViewUpdated");

	Params::UBP_EquippableItemAudioComponent_C_HandleCharacterViewUpdated_Params Parms{};

	Parms.IsThirdPerson = IsThirdPerson;
	Parms.FPTPRTPCValue = FPTPRTPCValue;
	Parms.DurabilityScopedAk = DurabilityScopedAk;
	Parms.CallFunc_GetFPTPRTPCValue_RTPCValue = CallFunc_GetFPTPRTPCValue_RTPCValue;
	Parms.CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent = CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryAttachToItemMeshSocket_Success = CallFunc_TryAttachToItemMeshSocket_Success;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_TryAttachToItemMeshSocket_Success_1 = CallFunc_TryAttachToItemMeshSocket_Success_1;
	Parms.CallFunc_TryAttachToItemMeshSocket_Success_2 = CallFunc_TryAttachToItemMeshSocket_Success_2;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = CallFunc_SetRTPCValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_2 = CallFunc_SetRTPCValue_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.SubscribeToFirstThirdPersonSwitch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::SubscribeToFirstThirdPersonSwitch(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "SubscribeToFirstThirdPersonSwitch");

	Params::UBP_EquippableItemAudioComponent_C_SubscribeToFirstThirdPersonSwitch_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.TryAttachToItemMeshSocket
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             ThingToAttach                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketToAttachTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshToAttachTo                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedAsset*               CallFunc_GetSkinnedAsset_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetVisibleSkeletalMesh_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::TryAttachToItemMeshSocket(class USceneComponent* ThingToAttach, class FName SocketToAttachTo, bool* Success, class USkeletalMeshComponent* MeshToAttachTo, bool CallFunc_IsValid_ReturnValue, class USkinnedAsset* CallFunc_GetSkinnedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh, bool CallFunc_TryGetVisibleSkeletalMesh_Success, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "TryAttachToItemMeshSocket");

	Params::UBP_EquippableItemAudioComponent_C_TryAttachToItemMeshSocket_Params Parms{};

	Parms.ThingToAttach = ThingToAttach;
	Parms.SocketToAttachTo = SocketToAttachTo;
	Parms.MeshToAttachTo = MeshToAttachTo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkinnedAsset_ReturnValue = CallFunc_GetSkinnedAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh = CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_Success = CallFunc_TryGetVisibleSkeletalMesh_Success;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.TryGetVisibleSkeletalMesh
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMesh                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThirdPerson_ThirdPerson                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::TryGetVisibleSkeletalMesh(class USkeletalMeshComponent** SkeletalMesh, bool* Success, bool CallFunc_IsThirdPerson_ThirdPerson, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "TryGetVisibleSkeletalMesh");

	Params::UBP_EquippableItemAudioComponent_C_TryGetVisibleSkeletalMesh_Params Parms{};

	Parms.CallFunc_IsThirdPerson_ThirdPerson = CallFunc_IsThirdPerson_ThirdPerson;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = Parms.SkeletalMesh;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.IsThirdPerson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ThirdPerson                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               OwningCharAsNWXCharacter                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFirstPersonCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::IsThirdPerson(bool* ThirdPerson, class ANWXCharacter* OwningCharAsNWXCharacter, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsFirstPersonCharacter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "IsThirdPerson");

	Params::UBP_EquippableItemAudioComponent_C_IsThirdPerson_Params Parms{};

	Parms.OwningCharAsNWXCharacter = OwningCharAsNWXCharacter;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_IsFirstPersonCharacter_ReturnValue = CallFunc_IsFirstPersonCharacter_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ThirdPerson != nullptr)
		*ThirdPerson = Parms.ThirdPerson;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.PlaySwoosh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESwingDirection         SwingDirection                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHeavySwing                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStopEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>AudioToLoad                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemAudioSwings          CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveSwingAudioStruct_SoftAudioEvent                  (HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::PlaySwoosh(enum class ESwingDirection SwingDirection, bool IsHeavySwing, bool IsStopEvent, TSoftObjectPtr<class UAkAudioEvent> AudioToLoad, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FS_ItemAudioSwings& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveSwingAudioStruct_SoftAudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "PlaySwoosh");

	Params::UBP_EquippableItemAudioComponent_C_PlaySwoosh_Params Parms{};

	Parms.SwingDirection = SwingDirection;
	Parms.IsHeavySwing = IsHeavySwing;
	Parms.IsStopEvent = IsStopEvent;
	Parms.AudioToLoad = AudioToLoad;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_ResolveSwingAudioStruct_SoftAudioEvent = CallFunc_ResolveSwingAudioStruct_SoftAudioEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleLightweightItemSpawned
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    EquippableItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleLightweightItemSpawned(class ABP_EquippableItemBase_C* EquippableItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleLightweightItemSpawned");

	Params::UBP_EquippableItemAudioComponent_C_HandleLightweightItemSpawned_Params Parms{};

	Parms.EquippableItem = EquippableItem;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.StopCrustLoopIfLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::StopCrustLoopIfLoaded(bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "StopCrustLoopIfLoaded");

	Params::UBP_EquippableItemAudioComponent_C_StopCrustLoopIfLoaded_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.StartCrustLoopIfLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::StartCrustLoopIfLoaded(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "StartCrustLoopIfLoaded");

	Params::UBP_EquippableItemAudioComponent_C_StartCrustLoopIfLoaded_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleCrustLoopEventsLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               StartLoopEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               StopLoopEvent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleCrustLoopEventsLoaded(class UAkAudioEvent* StartLoopEvent, class UAkAudioEvent* StopLoopEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleCrustLoopEventsLoaded");

	Params::UBP_EquippableItemAudioComponent_C_HandleCrustLoopEventsLoaded_Params Parms{};

	Parms.StartLoopEvent = StartLoopEvent;
	Parms.StopLoopEvent = StopLoopEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.SetupDynamicAkComponents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                DurabilityScopedAk                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             FPTPRTPCValue                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsThirdPerson                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFPTPRTPCValue_RTPCValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Locally_Controlled_LocallyControlled                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Locally_Controlled_LocallyControlled_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAttachToItemMeshSocket_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAttachToItemMeshSocket_Success_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetVisibleSkeletalMesh_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh_1                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetVisibleSkeletalMesh_Success_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAttachToItemMeshSocket_Success_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightRoot_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetLightweightRoot_Root                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::SetupDynamicAkComponents(class UAkComponent* DurabilityScopedAk, double FPTPRTPCValue, bool IsThirdPerson, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* Temp_object_Variable_2, class UAkSwitchValue* Temp_object_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class UAkComponent* CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent, double CallFunc_GetFPTPRTPCValue_RTPCValue, bool CallFunc_Is_Locally_Controlled_LocallyControlled, bool CallFunc_Is_Locally_Controlled_LocallyControlled_1, class UAkSwitchValue* K2Node_Select_Default, class UAkSwitchValue* K2Node_Select_Default_1, bool CallFunc_TryAttachToItemMeshSocket_Success, bool CallFunc_TryAttachToItemMeshSocket_Success_1, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh, bool CallFunc_TryGetVisibleSkeletalMesh_Success, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh_1, bool CallFunc_TryGetVisibleSkeletalMesh_Success_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_TryAttachToItemMeshSocket_Success_2, bool CallFunc_GetLightweightRoot_bSuccess, class USkeletalMeshComponent* CallFunc_GetLightweightRoot_Root, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "SetupDynamicAkComponents");

	Params::UBP_EquippableItemAudioComponent_C_SetupDynamicAkComponents_Params Parms{};

	Parms.DurabilityScopedAk = DurabilityScopedAk;
	Parms.FPTPRTPCValue = FPTPRTPCValue;
	Parms.IsThirdPerson = IsThirdPerson;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent = CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent;
	Parms.CallFunc_GetFPTPRTPCValue_RTPCValue = CallFunc_GetFPTPRTPCValue_RTPCValue;
	Parms.CallFunc_Is_Locally_Controlled_LocallyControlled = CallFunc_Is_Locally_Controlled_LocallyControlled;
	Parms.CallFunc_Is_Locally_Controlled_LocallyControlled_1 = CallFunc_Is_Locally_Controlled_LocallyControlled_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_TryAttachToItemMeshSocket_Success = CallFunc_TryAttachToItemMeshSocket_Success;
	Parms.CallFunc_TryAttachToItemMeshSocket_Success_1 = CallFunc_TryAttachToItemMeshSocket_Success_1;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh = CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_Success = CallFunc_TryGetVisibleSkeletalMesh_Success;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh_1 = CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh_1;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_Success_1 = CallFunc_TryGetVisibleSkeletalMesh_Success_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1 = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1;
	Parms.CallFunc_TryAttachToItemMeshSocket_Success_2 = CallFunc_TryAttachToItemMeshSocket_Success_2;
	Parms.CallFunc_GetLightweightRoot_bSuccess = CallFunc_GetLightweightRoot_bSuccess;
	Parms.CallFunc_GetLightweightRoot_Root = CallFunc_GetLightweightRoot_Root;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = CallFunc_SetRTPCValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_2 = CallFunc_SetRTPCValue_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleCrustLoopEndLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleCrustLoopEndLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleCrustLoopEndLoaded");

	Params::UBP_EquippableItemAudioComponent_C_HandleCrustLoopEndLoaded_Params Parms{};

	Parms.LoadedEvent = LoadedEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleCrustLoopStartLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleCrustLoopStartLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleCrustLoopStartLoaded");

	Params::UBP_EquippableItemAudioComponent_C_HandleCrustLoopStartLoaded_Params Parms{};

	Parms.LoadedEvent = LoadedEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleStatusEffectOneShotLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleStatusEffectOneShotLoaded(class UAkAudioEvent* LoadedEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleStatusEffectOneShotLoaded");

	Params::UBP_EquippableItemAudioComponent_C_HandleStatusEffectOneShotLoaded_Params Parms{};

	Parms.LoadedEvent = LoadedEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleOnUnequipped
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleOnUnequipped(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleOnUnequipped");

	Params::UBP_EquippableItemAudioComponent_C_HandleOnUnequipped_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleOnEquipped
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleOnEquipped(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleOnEquipped");

	Params::UBP_EquippableItemAudioComponent_C_HandleOnEquipped_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.RemoveCurrentStatusEffectVFX
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>SoftAkEvent                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioStatusEffect      CallFunc_GetTableCellData_OutData                                (None)

void UBP_EquippableItemAudioComponent_C::RemoveCurrentStatusEffectVFX(TSoftObjectPtr<class UAkAudioEvent> SoftAkEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FItemAudioStatusEffect& CallFunc_GetTableCellData_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "RemoveCurrentStatusEffectVFX");

	Params::UBP_EquippableItemAudioComponent_C_RemoveCurrentStatusEffectVFX_Params Parms{};

	Parms.SoftAkEvent = SoftAkEvent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.ApplyStatusEffectVFX
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                StatusEffectTag                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftAkLoopEnd                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftAkLoopStart                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>SoftAkOneShot                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioStatusEffect      CallFunc_GetTableCellData_OutData                                (None)

void UBP_EquippableItemAudioComponent_C::ApplyStatusEffectVFX(struct FGameplayTag& StatusEffectTag, TSoftObjectPtr<class UAkAudioEvent> SoftAkLoopEnd, TSoftObjectPtr<class UAkAudioEvent> SoftAkLoopStart, TSoftObjectPtr<class UAkAudioEvent> SoftAkOneShot, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FItemAudioStatusEffect& CallFunc_GetTableCellData_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "ApplyStatusEffectVFX");

	Params::UBP_EquippableItemAudioComponent_C_ApplyStatusEffectVFX_Params Parms{};

	Parms.StatusEffectTag = StatusEffectTag;
	Parms.SoftAkLoopEnd = SoftAkLoopEnd;
	Parms.SoftAkLoopStart = SoftAkLoopStart;
	Parms.SoftAkOneShot = SoftAkOneShot;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_2 = CallFunc_IsValidSoftObjectReference_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.Is Locally Controlled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               LocallyControlled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::Is_Locally_Controlled(bool* LocallyControlled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "Is Locally Controlled");

	Params::UBP_EquippableItemAudioComponent_C_Is_Locally_Controlled_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocallyControlled != nullptr)
		*LocallyControlled = Parms.LocallyControlled;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.GetScopedAkComponentForDurabilityRTPC
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkComponent*                ScopedAkComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_FishingRod_C*            K2Node_DynamicCast_AsBP_Fishing_Rod                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Locally_Controlled_LocallyControlled                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLightweightItemBP_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LightweightAttachedItem_C*CallFunc_GetLightweightItemBP_LightweightItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::GetScopedAkComponentForDurabilityRTPC(class UAkComponent** ScopedAkComponent, class ABP_FishingRod_C* K2Node_DynamicCast_AsBP_Fishing_Rod, bool K2Node_DynamicCast_bSuccess, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_Locally_Controlled_LocallyControlled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetLightweightItemBP_bSuccess, class ABP_LightweightAttachedItem_C* CallFunc_GetLightweightItemBP_LightweightItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "GetScopedAkComponentForDurabilityRTPC");

	Params::UBP_EquippableItemAudioComponent_C_GetScopedAkComponentForDurabilityRTPC_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Fishing_Rod = K2Node_DynamicCast_AsBP_Fishing_Rod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Is_Locally_Controlled_LocallyControlled = CallFunc_Is_Locally_Controlled_LocallyControlled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLightweightItemBP_bSuccess = CallFunc_GetLightweightItemBP_bSuccess;
	Parms.CallFunc_GetLightweightItemBP_LightweightItem = CallFunc_GetLightweightItemBP_LightweightItem;

	UObject::ProcessEvent(Func, &Parms);

	if (ScopedAkComponent != nullptr)
		*ScopedAkComponent = Parms.ScopedAkComponent;

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.TryTriggerDurabilityAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNearBreaking                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ItemOwner                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             OwnerInventoryEntry                                              (Edit, BlueprintVisible)
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetVisibleSkeletalMesh_Success                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadAndPlay_Audio_C*     CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits                           (None)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATRow                     (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATColumn                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Locally_Controlled_LocallyControlled                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits_1                         (None)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATRow_1                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetATRowAndColumnFromItemData_ATColumn_1                (NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioDurability        CallFunc_GetTableCellData_OutData                                (None)
// bool                               CallFunc_Is_Locally_Controlled_LocallyControlled_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTaggableSound              K2Node_Select_Default                                            (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs_1                              (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioDurability        CallFunc_GetTableCellData_OutData_1                              (None)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTaggableSound              K2Node_Select_Default_1                                          (None)
// TSoftObjectPtr<class UAkAudioEvent>CallFunc_ResolveTaggableSound_ReturnValue_1                      (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::TryTriggerDurabilityAudio(bool IsNearBreaking, class AActor* ItemOwner, const struct FInventoryEntry& OwnerInventoryEntry, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh, bool CallFunc_TryGetVisibleSkeletalMesh_Success, class UBP_LoadAndPlay_Audio_C* CallFunc_AddComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, bool CallFunc_Is_Locally_Controlled_LocallyControlled, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow_1, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FItemAudioDurability& CallFunc_GetTableCellData_OutData, bool CallFunc_Is_Locally_Controlled_LocallyControlled_1, bool Temp_bool_Variable_1, const struct FTaggableSound& K2Node_Select_Default, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs_1, bool CallFunc_QueryTable_ReturnValue_1, const struct FItemAudioDurability& CallFunc_GetTableCellData_OutData_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FTaggableSound& K2Node_Select_Default_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "TryTriggerDurabilityAudio");

	Params::UBP_EquippableItemAudioComponent_C_TryTriggerDurabilityAudio_Params Parms{};

	Parms.IsNearBreaking = IsNearBreaking;
	Parms.ItemOwner = ItemOwner;
	Parms.OwnerInventoryEntry = OwnerInventoryEntry;
	Parms.AudioEvent = AudioEvent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh = CallFunc_TryGetVisibleSkeletalMesh_SkeletalMesh;
	Parms.CallFunc_TryGetVisibleSkeletalMesh_Success = CallFunc_TryGetVisibleSkeletalMesh_Success;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits = CallFunc_GetItemTraitsFromEntry_Traits;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATRow = CallFunc_GetATRowAndColumnFromItemData_ATRow;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATColumn = CallFunc_GetATRowAndColumnFromItemData_ATColumn;
	Parms.CallFunc_Is_Locally_Controlled_LocallyControlled = CallFunc_Is_Locally_Controlled_LocallyControlled;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits_1 = CallFunc_GetItemTraitsFromEntry_Traits_1;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATRow_1 = CallFunc_GetATRowAndColumnFromItemData_ATRow_1;
	Parms.CallFunc_GetATRowAndColumnFromItemData_ATColumn_1 = CallFunc_GetATRowAndColumnFromItemData_ATColumn_1;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_Is_Locally_Controlled_LocallyControlled_1 = CallFunc_Is_Locally_Controlled_LocallyControlled_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue = CallFunc_ResolveTaggableSound_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_QueryTable_OutMemoryPtrs_1 = CallFunc_QueryTable_OutMemoryPtrs_1;
	Parms.CallFunc_QueryTable_ReturnValue_1 = CallFunc_QueryTable_ReturnValue_1;
	Parms.CallFunc_GetTableCellData_OutData_1 = CallFunc_GetTableCellData_OutData_1;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ResolveTaggableSound_ReturnValue_1 = CallFunc_ResolveTaggableSound_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.UpdateDurabilityRTPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NormalizedDurability                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                ScopedAkComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::UpdateDurabilityRTPC(double NormalizedDurability, class UAkComponent* ScopedAkComponent, class UAkComponent* CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "UpdateDurabilityRTPC");

	Params::UBP_EquippableItemAudioComponent_C_UpdateDurabilityRTPC_Params Parms{};

	Parms.NormalizedDurability = NormalizedDurability;
	Parms.ScopedAkComponent = ScopedAkComponent;
	Parms.CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent = CallFunc_GetScopedAkComponentForDurabilityRTPC_ScopedAkComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleRealDurabilityChange
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NormalizedDurability                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleRealDurabilityChange(double NewDurability, double MaxDurability, double NormalizedDurability, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleRealDurabilityChange");

	Params::UBP_EquippableItemAudioComponent_C_HandleRealDurabilityChange_Params Parms{};

	Parms.NewDurability = NewDurability;
	Parms.MaxDurability = MaxDurability;
	Parms.NormalizedDurability = NormalizedDurability;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandlePredictedDurabilityChange
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PredictedDurability                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               IsLocal                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewNormalizedDurability                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDurability_HasDurability                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceDurabilityData CallFunc_GetDurability_DurabilityData                            (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandlePredictedDurabilityChange(double PredictedDurability, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, bool IsLocal, double NewNormalizedDurability, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GetDurability_HasDurability, const struct FItemInstanceDurabilityData& CallFunc_GetDurability_DurabilityData, bool CallFunc_IsValid_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandlePredictedDurabilityChange");

	Params::UBP_EquippableItemAudioComponent_C_HandlePredictedDurabilityChange_Params Parms{};

	Parms.PredictedDurability = PredictedDurability;
	Parms.AudioEvent = AudioEvent;
	Parms.IsLocal = IsLocal;
	Parms.NewNormalizedDurability = NewNormalizedDurability;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetDurability_HasDurability = CallFunc_GetDurability_HasDurability;
	Parms.CallFunc_GetDurability_DurabilityData = CallFunc_GetDurability_DurabilityData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleAddFuelAudio
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FuelAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxFuel                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachParentChar_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         CallFunc_GetAttachParentChar_Parent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_FuelAudio         CallFunc_TryGetItemDataFuelAudio_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataFuelAudio_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UAkAudioEvent>K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::HandleAddFuelAudio(double FuelAmount, double MaxFuel, TSoftObjectPtr<class UAkAudioEvent> AudioEvent, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_GetAttachParentChar_bSuccess, class ABP_AnimCharacter_C* CallFunc_GetAttachParentChar_Parent, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FItemData_FuelAudio& CallFunc_TryGetItemDataFuelAudio_OutData, enum class EGetResult CallFunc_TryGetItemDataFuelAudio_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleAddFuelAudio");

	Params::UBP_EquippableItemAudioComponent_C_HandleAddFuelAudio_Params Parms{};

	Parms.FuelAmount = FuelAmount;
	Parms.MaxFuel = MaxFuel;
	Parms.AudioEvent = AudioEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetAttachParentChar_bSuccess = CallFunc_GetAttachParentChar_bSuccess;
	Parms.CallFunc_GetAttachParentChar_Parent = CallFunc_GetAttachParentChar_Parent;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_TryGetItemDataFuelAudio_OutData = CallFunc_TryGetItemDataFuelAudio_OutData;
	Parms.CallFunc_TryGetItemDataFuelAudio_Branches = CallFunc_TryGetItemDataFuelAudio_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.SetupCallbacks
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::SetupCallbacks(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "SetupCallbacks");

	Params::UBP_EquippableItemAudioComponent_C_SetupCallbacks_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleDurabilityNearBreaking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EquippableItemAudioComponent_C::HandleDurabilityNearBreaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleDurabilityNearBreaking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.HandleDurabilityDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EquippableItemAudioComponent_C::HandleDurabilityDepleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "HandleDurabilityDepleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_EquippableItemAudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquippableItemAudioComponent.BP_EquippableItemAudioComponent_C.ExecuteUbergraph_BP_EquippableItemAudioComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetOwnerAsEquippableItem_ReturnValue                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_GetFuel_HasFuelData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceFuelData       CallFunc_GetFuel_Fuel                                            (NoDestructor)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FuelAmountCache_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EquippableItemAudioComponent_C::ExecuteUbergraph_BP_EquippableItemAudioComponent(int32 EntryPoint, class AEquippableItem* CallFunc_GetOwnerAsEquippableItem_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, class UAkComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_GetFuel_HasFuelData, const struct FItemInstanceFuelData& CallFunc_GetFuel_Fuel, float CallFunc_CalculateItemAttributeValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_VariableSet_FuelAmountCache_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableItemAudioComponent_C", "ExecuteUbergraph_BP_EquippableItemAudioComponent");

	Params::UBP_EquippableItemAudioComponent_C_ExecuteUbergraph_BP_EquippableItemAudioComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerAsEquippableItem_ReturnValue = CallFunc_GetOwnerAsEquippableItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetFuel_HasFuelData = CallFunc_GetFuel_HasFuelData;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_FuelAmountCache_ImplicitCast = K2Node_VariableSet_FuelAmountCache_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



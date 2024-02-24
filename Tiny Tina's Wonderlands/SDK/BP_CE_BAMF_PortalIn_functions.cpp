#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_BAMF_PortalIn.BP_CE_BAMF_PortalIn_C
// (None)

class UClass* UBP_CE_BAMF_PortalIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_BAMF_PortalIn_C");

	return Clss;
}


// BP_CE_BAMF_PortalIn_C BP_CE_BAMF_PortalIn.Default__BP_CE_BAMF_PortalIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_BAMF_PortalIn_C* UBP_CE_BAMF_PortalIn_C::GetDefaultObj()
{
	static class UBP_CE_BAMF_PortalIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_BAMF_PortalIn_C*>(UBP_CE_BAMF_PortalIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CE_BAMF_PortalIn.BP_CE_BAMF_PortalIn_C.PlayMaterialAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseAudioComponent*        ComponentFromInstance                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxElement_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxStaticMeshComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class UWwiseAudioComponent*        CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// class UWwiseAudioComponent*        CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue1      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue1                          (None)
// class UWwiseAudioComponent*        CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue2      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BAMF_PortalIn_C::PlayMaterialAudio(class UWwiseAudioComponent* ComponentFromInstance, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, class UGbxStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalIn_C", "PlayMaterialAudio");

	Params::UBP_CE_BAMF_PortalIn_C_PlayMaterialAudio_Params Parms{};

	Parms.ComponentFromInstance = ComponentFromInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_GetMaxElement_ReturnValue = CallFunc_GetMaxElement_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue = CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue1 = CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue1;
	Parms.CallFunc_PostAttachedEvent_ReturnValue1 = CallFunc_PostAttachedEvent_ReturnValue1;
	Parms.CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue2 = CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BAMF_PortalIn.BP_CE_BAMF_PortalIn_C.PlayPoofAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxElement_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CE_BAMF_PortalIn_C::PlayPoofAudio(const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_GetMaxElement_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalIn_C", "PlayPoofAudio");

	Params::UBP_CE_BAMF_PortalIn_C_PlayPoofAudio_Params Parms{};

	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_GetMaxElement_ReturnValue = CallFunc_GetMaxElement_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BAMF_PortalIn.BP_CE_BAMF_PortalIn_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BAMF_PortalIn_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalIn_C", "OnBegin");

	Params::UBP_CE_BAMF_PortalIn_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BAMF_PortalIn.BP_CE_BAMF_PortalIn_C.ExecuteUbergraph_BP_CE_BAMF_PortalIn
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BAMF_PortalIn_C::ExecuteUbergraph_BP_CE_BAMF_PortalIn(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BAMF_PortalIn_C", "ExecuteUbergraph_BP_CE_BAMF_PortalIn");

	Params::UBP_CE_BAMF_PortalIn_C_ExecuteUbergraph_BP_CE_BAMF_PortalIn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}



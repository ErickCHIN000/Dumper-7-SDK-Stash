#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C
// (None)

class UClass* UBP_CE_BlackHole_Tech_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_BlackHole_Tech_Death_C");

	return Clss;
}


// BP_CE_BlackHole_Tech_Death_C BP_CE_BlackHole_Tech_Death.Default__BP_CE_BlackHole_Tech_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_BlackHole_Tech_Death_C* UBP_CE_BlackHole_Tech_Death_C::GetDefaultObj()
{
	static class UBP_CE_BlackHole_Tech_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_BlackHole_Tech_Death_C*>(UBP_CE_BlackHole_Tech_Death_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C.PlayBlackholeAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FSingularityInitializationInfoK2Node_MakeStruct_SingularityInitializationInfo                  (None)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxStaticMeshComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxElement_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USingularityComponent*       CallFunc_CreateSingularity_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue1                          (None)

void UBP_CE_BlackHole_Tech_Death_C::PlayBlackholeAudio(TArray<class AActor*>& K2Node_MakeArray_Array, const struct FSingularityInitializationInfo& K2Node_MakeStruct_SingularityInitializationInfo, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, class UGbxStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetMaxElement_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USingularityComponent* CallFunc_CreateSingularity_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BlackHole_Tech_Death_C", "PlayBlackholeAudio");

	Params::UBP_CE_BlackHole_Tech_Death_C_PlayBlackholeAudio_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_SingularityInitializationInfo = K2Node_MakeStruct_SingularityInitializationInfo;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetMaxElement_ReturnValue = CallFunc_GetMaxElement_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSingularity_ReturnValue = CallFunc_CreateSingularity_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue1 = CallFunc_PostAttachedEvent_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BlackHole_Tech_Death_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BlackHole_Tech_Death_C", "OnBegin");

	Params::UBP_CE_BlackHole_Tech_Death_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CE_BlackHole_Tech_Death.BP_CE_BlackHole_Tech_Death_C.ExecuteUbergraph_BP_CE_BlackHole_Tech_Death
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CE_BlackHole_Tech_Death_C::ExecuteUbergraph_BP_CE_BlackHole_Tech_Death(int32 EntryPoint, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CE_BlackHole_Tech_Death_C", "ExecuteUbergraph_BP_CE_BlackHole_Tech_Death");

	Params::UBP_CE_BlackHole_Tech_Death_C_ExecuteUbergraph_BP_CE_BlackHole_Tech_Death_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}



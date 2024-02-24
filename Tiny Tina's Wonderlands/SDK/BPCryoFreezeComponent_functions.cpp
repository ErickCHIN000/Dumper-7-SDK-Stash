#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCryoFreezeComponent.BPCryoFreezeComponent_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent)

class UClass* UBPCryoFreezeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCryoFreezeComponent_C");

	return Clss;
}


// BPCryoFreezeComponent_C BPCryoFreezeComponent.Default__BPCryoFreezeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCryoFreezeComponent_C* UBPCryoFreezeComponent_C::GetDefaultObj()
{
	static class UBPCryoFreezeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCryoFreezeComponent_C*>(UBPCryoFreezeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPCryoFreezeComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPCryoFreezeComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.OnGbxComponentFracture_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     FractureCentroid                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitDirection                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FracturePercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSilentFracture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPCryoFreezeComponent_C::OnGbxComponentFracture_Event_0(struct FVector& FractureCentroid, struct FVector& HitDirection, float FracturePercent, bool bSilentFracture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPCryoFreezeComponent_C", "OnGbxComponentFracture_Event_0");

	Params::UBPCryoFreezeComponent_C_OnGbxComponentFracture_Event_0_Params Parms{};

	Parms.FractureCentroid = FractureCentroid;
	Parms.HitDirection = HitDirection;
	Parms.FracturePercent = FracturePercent;
	Parms.bSilentFracture = bSilentFracture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ExecuteUbergraph_BPCryoFreezeComponent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_CustomEvent_FractureCentroid                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitDirection                                  (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FracturePercent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSilentFracture                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// class UWwiseAudioComponent*        CallFunc_SpawnWwiseComponentAtLocation_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void UBPCryoFreezeComponent_C::ExecuteUbergraph_BPCryoFreezeComponent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_FractureCentroid, const struct FVector& K2Node_CustomEvent_HitDirection, float K2Node_CustomEvent_FracturePercent, bool K2Node_CustomEvent_bSilentFracture, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UWwiseAudioComponent* CallFunc_SpawnWwiseComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPCryoFreezeComponent_C", "ExecuteUbergraph_BPCryoFreezeComponent");

	Params::UBPCryoFreezeComponent_C_ExecuteUbergraph_BPCryoFreezeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_FractureCentroid = K2Node_CustomEvent_FractureCentroid;
	Parms.K2Node_CustomEvent_HitDirection = K2Node_CustomEvent_HitDirection;
	Parms.K2Node_CustomEvent_FracturePercent = K2Node_CustomEvent_FracturePercent;
	Parms.K2Node_CustomEvent_bSilentFracture = K2Node_CustomEvent_bSilentFracture;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_SpawnWwiseComponentAtLocation_ReturnValue = CallFunc_SpawnWwiseComponentAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



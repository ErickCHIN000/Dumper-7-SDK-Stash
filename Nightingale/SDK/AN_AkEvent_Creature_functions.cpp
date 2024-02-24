#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_AkEvent_Creature.AN_AkEvent_Creature_C
// (None)

class UClass* UAN_AkEvent_Creature_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_AkEvent_Creature_C");

	return Clss;
}


// AN_AkEvent_Creature_C AN_AkEvent_Creature.Default__AN_AkEvent_Creature_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_AkEvent_Creature_C* UAN_AkEvent_Creature_C::GetDefaultObj()
{
	static class UAN_AkEvent_Creature_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_AkEvent_Creature_C*>(UAN_AkEvent_Creature_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_AkEvent_Creature.AN_AkEvent_Creature_C.Get Bucket
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UComponentAudioBucket*       Component_Audio_Bucket                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAkComponent            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAN_AkEvent_Creature_C::Get_Bucket(class UComponentAudioBucket** Component_Audio_Bucket, enum class EAkComponent Temp_byte_Variable, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* Temp_object_Variable_10, class UComponentAudioBucket* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_AkEvent_Creature_C", "Get Bucket");

	Params::UAN_AkEvent_Creature_C_Get_Bucket_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Component_Audio_Bucket != nullptr)
		*Component_Audio_Bucket = Parms.Component_Audio_Bucket;

}


// Function AN_AkEvent_Creature.AN_AkEvent_Creature_C.GetSocketForPreview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PreviewSocket                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshCompCache                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       CallFunc_Get_Bucket_Component_Audio_Bucket                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAnimationEditorSocketForBucket_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_AkEvent_Creature_C::GetSocketForPreview(class USkeletalMeshComponent* MeshComp, class FName* Socket, class FName PreviewSocket, class USkeletalMeshComponent* MeshCompCache, class UComponentAudioBucket* CallFunc_Get_Bucket_Component_Audio_Bucket, class FName CallFunc_GetAnimationEditorSocketForBucket_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_AkEvent_Creature_C", "GetSocketForPreview");

	Params::UAN_AkEvent_Creature_C_GetSocketForPreview_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.PreviewSocket = PreviewSocket;
	Parms.MeshCompCache = MeshCompCache;
	Parms.CallFunc_Get_Bucket_Component_Audio_Bucket = CallFunc_Get_Bucket_Component_Audio_Bucket;
	Parms.CallFunc_GetAnimationEditorSocketForBucket_ReturnValue = CallFunc_GetAnimationEditorSocketForBucket_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Socket != nullptr)
		*Socket = Parms.Socket;

}


// Function AN_AkEvent_Creature.AN_AkEvent_Creature_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          Ak_Component                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        PreviewSocket                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      MeshCompCache                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       CallFunc_Get_Bucket_Component_Audio_Bucket                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       CallFunc_Get_Bucket_Component_Audio_Bucket_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponentAggregatorComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAudioComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_GetAnimationEditorSwitch_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSocketForPreview_Socket                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAsyncAkEventScoped_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_AkEvent_Creature_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UScopedAkComponent* Ak_Component, class FName PreviewSocket, class USkeletalMeshComponent* MeshCompCache, class UComponentAudioBucket* CallFunc_Get_Bucket_Component_Audio_Bucket, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UComponentAudioBucket* CallFunc_Get_Bucket_Component_Audio_Bucket_1, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, class UAudioComponentAggregatorComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, class UAkSwitchValue* CallFunc_GetAnimationEditorSwitch_ReturnValue, bool CallFunc_IsEditor_ReturnValue, class FName CallFunc_GetSocketForPreview_Socket, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_AkEvent_Creature_C", "Received_Notify");

	Params::UAN_AkEvent_Creature_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.Ak_Component = Ak_Component;
	Parms.PreviewSocket = PreviewSocket;
	Parms.MeshCompCache = MeshCompCache;
	Parms.CallFunc_Get_Bucket_Component_Audio_Bucket = CallFunc_Get_Bucket_Component_Audio_Bucket;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue = CallFunc_PostAsyncAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Bucket_Component_Audio_Bucket_1 = CallFunc_Get_Bucket_Component_Audio_Bucket_1;
	Parms.CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue = CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAudioComponent_ReturnValue = CallFunc_GetAudioComponent_ReturnValue;
	Parms.CallFunc_GetAnimationEditorSwitch_ReturnValue = CallFunc_GetAnimationEditorSwitch_ReturnValue;
	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;
	Parms.CallFunc_GetSocketForPreview_Socket = CallFunc_GetSocketForPreview_Socket;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1 = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue_1 = CallFunc_PostAsyncAkEventScoped_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_PostAsyncAkEventScoped_ReturnValue_2 = CallFunc_PostAsyncAkEventScoped_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



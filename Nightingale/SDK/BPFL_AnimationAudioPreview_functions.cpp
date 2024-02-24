#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_AnimationAudioPreview.BPFL_AnimationAudioPreview_C
// (None)

class UClass* UBPFL_AnimationAudioPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_AnimationAudioPreview_C");

	return Clss;
}


// BPFL_AnimationAudioPreview_C BPFL_AnimationAudioPreview.Default__BPFL_AnimationAudioPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_AnimationAudioPreview_C* UBPFL_AnimationAudioPreview_C::GetDefaultObj()
{
	static class UBPFL_AnimationAudioPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_AnimationAudioPreview_C*>(UBPFL_AnimationAudioPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_AnimationAudioPreview.BPFL_AnimationAudioPreview_C.Try Preview
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Skeletal_Mesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Bucket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Start_Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Stop_Event                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Continue_to_Play_In_Game                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                Ak_Component                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Preview_Socket                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              CallFunc_GetAnimationEditorSwitch_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Socket_for_Preview_Socket                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AnimationAudioPreview_C::Try_Preview(class AActor* Owner, class USkeletalMeshComponent* Skeletal_Mesh, class UComponentAudioBucket* Bucket, class UAkAudioEvent* Start_Event, class UAkAudioEvent* Stop_Event, class UObject* __WorldContext, bool* Continue_to_Play_In_Game, class UAkComponent* Ak_Component, class FName Preview_Socket, FDelegateProperty_ Temp_delegate_Variable, class UObject* K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* CallFunc_GetAnimationEditorSwitch_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, bool CallFunc_IsEditor_ReturnValue, class FName CallFunc_Get_Socket_for_Preview_Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_AnimationAudioPreview_C", "Try Preview");

	Params::UBPFL_AnimationAudioPreview_C_Try_Preview_Params Parms{};

	Parms.Owner = Owner;
	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Bucket = Bucket;
	Parms.Start_Event = Start_Event;
	Parms.Stop_Event = Stop_Event;
	Parms.__WorldContext = __WorldContext;
	Parms.Ak_Component = Ak_Component;
	Parms.Preview_Socket = Preview_Socket;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor = K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimationEditorSwitch_ReturnValue = CallFunc_GetAnimationEditorSwitch_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue = CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue;
	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;
	Parms.CallFunc_Get_Socket_for_Preview_Socket = CallFunc_Get_Socket_for_Preview_Socket;

	UObject::ProcessEvent(Func, &Parms);

	if (Continue_to_Play_In_Game != nullptr)
		*Continue_to_Play_In_Game = Parms.Continue_to_Play_In_Game;

}


// Function BPFL_AnimationAudioPreview.BPFL_AnimationAudioPreview_C.Get Socket for Preview
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Skeletal_Mesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UComponentAudioBucket*       Bucket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket_Name                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAnimationEditorSocketForBucket_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AnimationAudioPreview_C::Get_Socket_for_Preview(class USkeletalMeshComponent* Skeletal_Mesh, class UComponentAudioBucket* Bucket, class UObject* __WorldContext, class FName* Socket, class FName Socket_Name, class FName CallFunc_GetAnimationEditorSocketForBucket_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_AnimationAudioPreview_C", "Get Socket for Preview");

	Params::UBPFL_AnimationAudioPreview_C_Get_Socket_for_Preview_Params Parms{};

	Parms.Skeletal_Mesh = Skeletal_Mesh;
	Parms.Bucket = Bucket;
	Parms.__WorldContext = __WorldContext;
	Parms.Socket_Name = Socket_Name;
	Parms.CallFunc_GetAnimationEditorSocketForBucket_ReturnValue = CallFunc_GetAnimationEditorSocketForBucket_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Socket != nullptr)
		*Socket = Parms.Socket;

}

}



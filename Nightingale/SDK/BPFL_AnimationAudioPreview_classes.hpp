#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_AnimationAudioPreview.BPFL_AnimationAudioPreview_C
class UBPFL_AnimationAudioPreview_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_AnimationAudioPreview_C* GetDefaultObj();

	void Try_Preview(class AActor* Owner, class USkeletalMeshComponent* Skeletal_Mesh, class UComponentAudioBucket* Bucket, class UAkAudioEvent* Start_Event, class UAkAudioEvent* Stop_Event, class UObject* __WorldContext, bool* Continue_to_Play_In_Game, class UAkComponent* Ak_Component, class FName Preview_Socket, FDelegateProperty_ Temp_delegate_Variable, class UObject* K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* CallFunc_GetAnimationEditorSwitch_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, bool CallFunc_IsEditor_ReturnValue, class FName CallFunc_Get_Socket_for_Preview_Socket);
	void Get_Socket_for_Preview(class USkeletalMeshComponent* Skeletal_Mesh, class UComponentAudioBucket* Bucket, class UObject* __WorldContext, class FName* Socket, class FName Socket_Name, class FName CallFunc_GetAnimationEditorSocketForBucket_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x6C - 0x38)
// BlueprintGeneratedClass AN_AkEvent_Creature.AN_AkEvent_Creature_C
class UAN_AkEvent_Creature_C : public UAnimNotify
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent;                                           // 0x38(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class EAkComponent                      AkComponent;                                       // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Attached;                                          // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F14[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  JointForDetachedSound;                             // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_AkEvent_Creature_C* GetDefaultObj();

	void Get_Bucket(class UComponentAudioBucket** Component_Audio_Bucket, enum class EAkComponent Temp_byte_Variable, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* Temp_object_Variable_10, class UComponentAudioBucket* K2Node_Select_Default);
	void GetSocketForPreview(class USkeletalMeshComponent* MeshComp, class FName* Socket, class FName PreviewSocket, class USkeletalMeshComponent* MeshCompCache, class UComponentAudioBucket* CallFunc_Get_Bucket_Component_Audio_Bucket, class FName CallFunc_GetAnimationEditorSocketForBucket_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UScopedAkComponent* Ak_Component, class FName PreviewSocket, class USkeletalMeshComponent* MeshCompCache, class UComponentAudioBucket* CallFunc_Get_Bucket_Component_Audio_Bucket, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UComponentAudioBucket* CallFunc_Get_Bucket_Component_Audio_Bucket_1, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, class UAudioComponentAggregatorComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UScopedAkComponent* CallFunc_GetAudioComponent_ReturnValue, class UAkSwitchValue* CallFunc_GetAnimationEditorSwitch_ReturnValue, bool CallFunc_IsEditor_ReturnValue, class FName CallFunc_GetSocketForPreview_Socket, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_2);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x4C - 0x38)
// BlueprintGeneratedClass AN_AkEvent_BP_Character.AN_AkEvent_BP_Character_C
class UAN_AkEvent_BP_Character_C : public UAnimNotify_FPTP
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAkComponent                      AkComponent;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Attached;                                          // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4763[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  JointForDetachedSound;                             // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_AkEvent_BP_Character_C* GetDefaultObj();

	void AnimationPreviewerAudio(class USkeletalMeshComponent* MeshComp, FDelegateProperty_ Temp_delegate_Variable, class AActor* CallFunc_GetOwner_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsEditor_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ApplyAdditionalRTPCs(class USkeletalMeshComponent* MeshComponent, class UAkComponent* AkComponent, double Durability);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UScopedAkComponent* ScopedAkComponent, class USkeletalMeshComponent* MeshCompCache, enum class EAkComponent Temp_byte_Variable, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* Temp_object_Variable_10, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue, class UComponentAudioBucket* K2Node_Select_Default, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x98 - 0x30)
// BlueprintGeneratedClass ANS_AkEvents_Creature.ANS_AkEvents_Creature_C
class UANS_AkEvents_Creature_C : public UAnimNotifyState
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent_Start;                                     // 0x30(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent_End;                                       // 0x58(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Attached;                                          // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  JointForDetachedSound;                             // 0x84(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UComponentAudioBucket*                 Bucket;                                            // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_AkEvents_Creature_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class FName PreviewSocket, class UScopedAkComponent* PreviewAkComponent, class UScopedAkComponent* FoundReducedScopedAk, class UScopedAkComponent* FoundScopedAk, class AActor* CachedOwner, class USkeletalMeshComponent* CachedMeshComp, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, class UScopedAkComponent* CallFunc_GetReducedAudioComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class FName CallFunc_Get_Socket_for_Preview_Socket, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_2, class UAkSwitchValue* CallFunc_GetAnimationEditorSwitch_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_3, bool CallFunc_IsEditor_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class FName PreviewSocket, class UScopedAkComponent* PreviewAkComponent, class UScopedAkComponent* FoundScopedAk, class AActor* CachedOwner, class USkeletalMeshComponent* CachedMeshComp, bool CallFunc_IsInEditorPreview_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue, class UScopedAkComponent* CallFunc_GetAnimationEditorPersistentScopedAkComponent_ReturnValue, class UAkSwitchValue* CallFunc_GetAnimationEditorSwitch_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_Get_Socket_for_Preview_Socket, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_1, bool CallFunc_PostAsyncAkEventScoped_ReturnValue_2, bool CallFunc_IsEditor_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x69 - 0x50)
// BlueprintGeneratedClass BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C
class UBP_AnimNotify_PlaySound_Player_C : public UAnimNotify_PlaySoundPlayer
{
public:
	bool                                         Follow;                                            // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseListenerRotation;                               // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ApplyPlayerTypeParameter;                          // 0x52(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EAudioPlayerPerspective           PerspectiveToPlayIn;                               // 0x53(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachPoint;                                       // 0x54(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyOcclusion;                                    // 0x5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1645[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OcclusionTrace;                                    // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyWaterImmersion;                               // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_PlaySound_Player_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& Temp_wildcard_Variable, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetNotifyName_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AIcarusPlayerCharacter* Player, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* CallFunc_GetFMODEvent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UFMODEvent* Temp_wildcard_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlayerInAudioPerspective_Result);
};

}



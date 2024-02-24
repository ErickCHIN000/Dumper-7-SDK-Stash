#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass PlayerFootstep.PlayerFootstep_C
class UPlayerFootstep_C : public UAnimNotify
{
public:
	enum class EFootstepSocket                   Socket;                                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1BAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            EditorOnlyPreviewSound;                            // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeMultiplier;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchMultiplier;                                   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerFootstep_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PlayFootstepAudio_Success);
};

}



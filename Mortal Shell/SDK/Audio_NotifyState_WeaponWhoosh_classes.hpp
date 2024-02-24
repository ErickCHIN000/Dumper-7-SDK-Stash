#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass Audio_NotifyState_WeaponWhoosh.Audio_NotifyState_WeaponWhoosh_C
class UAudio_NotifyState_WeaponWhoosh_C : public UAudio_NotifyState_Base_C
{
public:
	enum class EWeaponIdentity                   WeaponIdentity;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutDuration;                                   // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAudio_NotifyState_WeaponWhoosh_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_StopWeaponWhooshAudio_Return);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_PlayWeaponWhooshAudio_Return);
};

}



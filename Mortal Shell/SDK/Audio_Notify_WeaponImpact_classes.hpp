#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x49 - 0x48)
// BlueprintGeneratedClass Audio_Notify_WeaponImpact.Audio_Notify_WeaponImpact_C
class UAudio_Notify_WeaponImpact_C : public UAudio_Notify_Base_C
{
public:
	enum class EWeaponIdentity                   Weapon_Identity;                                   // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAudio_Notify_WeaponImpact_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PlayWeaponImpactAudioFromAnimation_Return);
};

}



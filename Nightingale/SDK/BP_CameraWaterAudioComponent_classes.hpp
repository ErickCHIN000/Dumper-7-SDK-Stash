#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF8 - 0xF8)
// BlueprintGeneratedClass BP_CameraWaterAudioComponent.BP_CameraWaterAudioComponent_C
class UBP_CameraWaterAudioComponent_C : public UCameraWaterAudioComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_CameraWaterAudioComponent_C* GetDefaultObj();

	class UScopedAkComponent* FindAudioEventTarget(class ABP_Character_C* PlayerCharacter, bool CallFunc_IsDedicatedServer_ReturnValue, class UScopedAkComponent* CallFunc_GetScopedAkBody_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PlayerAudio_AnimNotify_Interface.BP_PlayerAudio_AnimNotify_Interface_C
class IBP_PlayerAudio_AnimNotify_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_PlayerAudio_AnimNotify_Interface_C* GetDefaultObj();

	void OnFootstepAnimNotify(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance);
	void OnSwimStrokeAnimNotify();
};

}



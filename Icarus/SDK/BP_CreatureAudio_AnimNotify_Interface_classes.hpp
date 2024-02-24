#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C
class IBP_CreatureAudio_AnimNotify_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_CreatureAudio_AnimNotify_Interface_C* GetDefaultObj();

	void OnVocalisationAnimNotify(enum class EAIVocalisationType VocalisationType);
	void OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AN_Player_Swim_Stroke_VFX.AN_Player_Swim_Stroke_VFX_C
class UAN_Player_Swim_Stroke_VFX_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAN_Player_Swim_Stroke_VFX_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}



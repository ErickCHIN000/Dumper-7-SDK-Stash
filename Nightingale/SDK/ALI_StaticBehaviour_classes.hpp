#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_StaticBehaviour.ALI_StaticBehaviour_C
class IALI_StaticBehaviour_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_StaticBehaviour_C* GetDefaultObj();

	void LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour);
};

}



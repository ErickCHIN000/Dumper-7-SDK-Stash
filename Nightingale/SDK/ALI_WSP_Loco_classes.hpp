#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_WSP_Loco.ALI_WSP_Loco_C
class IALI_WSP_Loco_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_WSP_Loco_C* GetDefaultObj();

	void TrotLayer(const struct FPoseLink& InTrotPose, double InTrotPlayRate, const struct FAnimSequenceCache& TrotAnimSequence, struct FPoseLink* TrotLayer);
	void WalkLayer(const struct FPoseLink& InWalkPose, const struct FAnimSequenceCache& WalkAnimSequence, double InWalkPlayRate, struct FPoseLink* WalkLayer);
	void IdleLayer(const struct FPoseLink& IdleIn, double IdleInPlayRate, const struct FAnimSequenceCache& IdleAnimSequence, struct FPoseLink* IdleLayer);
};

}



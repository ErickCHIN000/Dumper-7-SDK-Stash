#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0xBD8 - 0xA90)
// AnimBlueprintGeneratedClass TestChargerVehicle.TestChargerVehicle_C
class UTestChargerVehicle_C : public UVehicleAnimationInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xA98(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xAA0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xAA8(0x20)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0xAC8(0x10)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xAD8(0x20)(None)
	struct FAnimNode_WheelController             AnimGraphNode_WheelController;                     // 0xAF8(0xE0)(None)

	static class UClass* StaticClass();
	static class UTestChargerVehicle_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_TestChargerVehicle(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass Anim_VehicleLayerInterface.Anim_VehicleLayerInterface_C
class IAnim_VehicleLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IAnim_VehicleLayerInterface_C* GetDefaultObj();

	void VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody);
	void VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody);
};

}



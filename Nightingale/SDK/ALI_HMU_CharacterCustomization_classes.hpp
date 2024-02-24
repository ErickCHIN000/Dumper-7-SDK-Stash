#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass ALI_HMU_CharacterCustomization.ALI_HMU_CharacterCustomization_C
class IALI_HMU_CharacterCustomization_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IALI_HMU_CharacterCustomization_C* GetDefaultObj();

	void EyeOffset(const struct FPoseLink& InPose_0, const struct FVector& Offset, struct FPoseLink* EyeOffset);
	void BodyType(const struct FPoseLink& InPose, enum class EBodyType InBodyType, struct FPoseLink* BodyType);
};

}



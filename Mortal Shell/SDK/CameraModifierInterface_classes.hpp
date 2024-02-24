#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CameraModifierInterface.CameraModifierInterface_C
class ICameraModifierInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICameraModifierInterface_C* GetDefaultObj();

	void CameraModifier_UpdateFOV();
	void CameraModifier_UpdateMotionBlur();
	void CameraModifier_UpdateBrightness();
	void CameraModifier_UpdateFilmGrain();
	void CameraModifier_UpdatePixelMode();
};

}



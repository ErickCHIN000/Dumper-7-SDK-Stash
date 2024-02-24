#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CustomisationWidgetInterface.CustomisationWidgetInterface_C
class ICustomisationWidgetInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICustomisationWidgetInterface_C* GetDefaultObj();

	void GetCameraFocus(struct FPreviewCameraSettingsEnum* CameraFocus);
	void GetCosmeticData(struct FCharacterCosmetics* CosmeticData);
};

}



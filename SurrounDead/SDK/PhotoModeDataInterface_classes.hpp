#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PhotoModeDataInterface.PhotoModeDataInterface_C
class IPhotoModeDataInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPhotoModeDataInterface_C* GetDefaultObj();

	void TabToOpen(int32 TabIndex, class UCommonButtonTab_C* CommonButtonPressed);
	void SendPhotoData(const struct FPhotosData& PhotoData);
};

}



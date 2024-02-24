#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LoadingScreenInterface.LoadingScreenInterface_C
class ILoadingScreenInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadingScreenInterface_C* GetDefaultObj();

	void LoadingScreen_ShouldLoadItemFromSave(bool Load_);
	void LoadingScreen_FastTravelCurrentLevel();
	void LoadingScreen_OnBeginPlay();
	void LoadingScreen_HandleLevelChange(bool Set_Travel_Destination, class FName Travel_Destination, class FName Map_To_Load);
	void LoadingScreen_FadeOutAndDestroy();
	void LoadingScreen_FadeIn();
};

}



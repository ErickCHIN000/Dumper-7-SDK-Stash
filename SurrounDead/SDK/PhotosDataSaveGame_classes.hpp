#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass PhotosDataSaveGame.PhotosDataSaveGame_C
class UPhotosDataSaveGame_C : public USaveGame
{
public:
	TArray<struct FPhotosData>                   PhotosData;                                        // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPhotosDataSaveGame_C* GetDefaultObj();

};

}



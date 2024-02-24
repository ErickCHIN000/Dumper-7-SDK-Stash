#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PhotosDataSaveGame.PhotosDataSaveGame_C
// (None)

class UClass* UPhotosDataSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotosDataSaveGame_C");

	return Clss;
}


// PhotosDataSaveGame_C PhotosDataSaveGame.Default__PhotosDataSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhotosDataSaveGame_C* UPhotosDataSaveGame_C::GetDefaultObj()
{
	static class UPhotosDataSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhotosDataSaveGame_C*>(UPhotosDataSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}



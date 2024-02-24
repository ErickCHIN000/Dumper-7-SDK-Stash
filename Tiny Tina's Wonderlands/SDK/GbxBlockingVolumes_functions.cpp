#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxBlockingVolumes.GbxBlockingVolume
// (Actor)

class UClass* AGbxBlockingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxBlockingVolume");

	return Clss;
}


// GbxBlockingVolume GbxBlockingVolumes.Default__GbxBlockingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxBlockingVolume* AGbxBlockingVolume::GetDefaultObj()
{
	static class AGbxBlockingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxBlockingVolume*>(AGbxBlockingVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxBlockingVolumes.GbxBlockingVolumeUserSettings
// (None)

class UClass* UGbxBlockingVolumeUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxBlockingVolumeUserSettings");

	return Clss;
}


// GbxBlockingVolumeUserSettings GbxBlockingVolumes.Default__GbxBlockingVolumeUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxBlockingVolumeUserSettings* UGbxBlockingVolumeUserSettings::GetDefaultObj()
{
	static class UGbxBlockingVolumeUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxBlockingVolumeUserSettings*>(UGbxBlockingVolumeUserSettings::StaticClass()->DefaultObject);

	return Default;
}

}



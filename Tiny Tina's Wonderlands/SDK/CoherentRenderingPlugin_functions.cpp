#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CoherentRenderingPlugin.CoherentRenderingSettings
// (None)

class UClass* UCoherentRenderingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoherentRenderingSettings");

	return Clss;
}


// CoherentRenderingSettings CoherentRenderingPlugin.Default__CoherentRenderingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoherentRenderingSettings* UCoherentRenderingSettings::GetDefaultObj()
{
	static class UCoherentRenderingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoherentRenderingSettings*>(UCoherentRenderingSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CoherentRenderingPlugin.CohTextureUserWrapData
// (None)

class UClass* UCohTextureUserWrapData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CohTextureUserWrapData");

	return Clss;
}


// CohTextureUserWrapData CoherentRenderingPlugin.Default__CohTextureUserWrapData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCohTextureUserWrapData* UCohTextureUserWrapData::GetDefaultObj()
{
	static class UCohTextureUserWrapData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCohTextureUserWrapData*>(UCohTextureUserWrapData::StaticClass()->DefaultObject);

	return Default;
}

}



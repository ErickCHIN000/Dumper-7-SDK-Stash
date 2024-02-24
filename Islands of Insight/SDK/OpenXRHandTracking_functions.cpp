#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
// (None)

class UClass* ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkOpenXRHandTrackingSourceFactory");

	return Clss;
}


// LiveLinkOpenXRHandTrackingSourceFactory OpenXRHandTracking.Default__LiveLinkOpenXRHandTrackingSourceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkOpenXRHandTrackingSourceFactory* ULiveLinkOpenXRHandTrackingSourceFactory::GetDefaultObj()
{
	static class ULiveLinkOpenXRHandTrackingSourceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkOpenXRHandTrackingSourceFactory*>(ULiveLinkOpenXRHandTrackingSourceFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
// (None)

class UClass* UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenXRHandTrackingLiveLinkRemapAsset");

	return Clss;
}


// OpenXRHandTrackingLiveLinkRemapAsset OpenXRHandTracking.Default__OpenXRHandTrackingLiveLinkRemapAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenXRHandTrackingLiveLinkRemapAsset* UOpenXRHandTrackingLiveLinkRemapAsset::GetDefaultObj()
{
	static class UOpenXRHandTrackingLiveLinkRemapAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenXRHandTrackingLiveLinkRemapAsset*>(UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass()->DefaultObject);

	return Default;
}

}



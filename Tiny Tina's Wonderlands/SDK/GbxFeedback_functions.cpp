#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxFeedback.GbxRumbleRemapping
// (None)

class UClass* UGbxRumbleRemapping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxRumbleRemapping");

	return Clss;
}


// GbxRumbleRemapping GbxFeedback.Default__GbxRumbleRemapping
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxRumbleRemapping* UGbxRumbleRemapping::GetDefaultObj()
{
	static class UGbxRumbleRemapping* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxRumbleRemapping*>(UGbxRumbleRemapping::StaticClass()->DefaultObject);

	return Default;
}

}



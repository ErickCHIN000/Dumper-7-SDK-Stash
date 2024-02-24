#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMS_G.BaseRCowgirlMS_G_C
// (None)

class UClass* UBaseRCowgirlMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMS_G_C");

	return Clss;
}


// BaseRCowgirlMS_G_C BaseRCowgirlMS_G.Default__BaseRCowgirlMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMS_G_C* UBaseRCowgirlMS_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMS_G_C*>(UBaseRCowgirlMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



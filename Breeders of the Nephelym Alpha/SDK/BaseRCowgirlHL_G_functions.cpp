#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHL_G.BaseRCowgirlHL_G_C
// (None)

class UClass* UBaseRCowgirlHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHL_G_C");

	return Clss;
}


// BaseRCowgirlHL_G_C BaseRCowgirlHL_G.Default__BaseRCowgirlHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHL_G_C* UBaseRCowgirlHL_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHL_G_C*>(UBaseRCowgirlHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMT_G.BaseRCowgirlMT_G_C
// (None)

class UClass* UBaseRCowgirlMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMT_G_C");

	return Clss;
}


// BaseRCowgirlMT_G_C BaseRCowgirlMT_G.Default__BaseRCowgirlMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMT_G_C* UBaseRCowgirlMT_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMT_G_C*>(UBaseRCowgirlMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



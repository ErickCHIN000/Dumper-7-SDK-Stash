#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTS_G.BaseRCowgirlTS_G_C
// (None)

class UClass* UBaseRCowgirlTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTS_G_C");

	return Clss;
}


// BaseRCowgirlTS_G_C BaseRCowgirlTS_G.Default__BaseRCowgirlTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTS_G_C* UBaseRCowgirlTS_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTS_G_C*>(UBaseRCowgirlTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



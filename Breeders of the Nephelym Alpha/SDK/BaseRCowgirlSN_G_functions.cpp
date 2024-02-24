#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSN_G.BaseRCowgirlSN_G_C
// (None)

class UClass* UBaseRCowgirlSN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSN_G_C");

	return Clss;
}


// BaseRCowgirlSN_G_C BaseRCowgirlSN_G.Default__BaseRCowgirlSN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSN_G_C* UBaseRCowgirlSN_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlSN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSN_G_C*>(UBaseRCowgirlSN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



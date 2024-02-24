#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTH_G.BaseRCowgirlTH_G_C
// (None)

class UClass* UBaseRCowgirlTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTH_G_C");

	return Clss;
}


// BaseRCowgirlTH_G_C BaseRCowgirlTH_G.Default__BaseRCowgirlTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTH_G_C* UBaseRCowgirlTH_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTH_G_C*>(UBaseRCowgirlTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



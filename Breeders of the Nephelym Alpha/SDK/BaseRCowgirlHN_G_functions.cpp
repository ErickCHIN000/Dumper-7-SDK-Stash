#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHN_G.BaseRCowgirlHN_G_C
// (None)

class UClass* UBaseRCowgirlHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHN_G_C");

	return Clss;
}


// BaseRCowgirlHN_G_C BaseRCowgirlHN_G.Default__BaseRCowgirlHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHN_G_C* UBaseRCowgirlHN_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHN_G_C*>(UBaseRCowgirlHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



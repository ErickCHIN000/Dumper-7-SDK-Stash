#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHT_G.BaseRCowgirlHT_G_C
// (None)

class UClass* UBaseRCowgirlHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHT_G_C");

	return Clss;
}


// BaseRCowgirlHT_G_C BaseRCowgirlHT_G.Default__BaseRCowgirlHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHT_G_C* UBaseRCowgirlHT_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHT_G_C*>(UBaseRCowgirlHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_Dog_Impact.WP_Dog_Impact_C
// (Actor)

class UClass* AWP_Dog_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_Dog_Impact_C");

	return Clss;
}


// WP_Dog_Impact_C WP_Dog_Impact.Default__WP_Dog_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWP_Dog_Impact_C* AWP_Dog_Impact_C::GetDefaultObj()
{
	static class AWP_Dog_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWP_Dog_Impact_C*>(AWP_Dog_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WitcherHandgun.WitcherHandgun_C
// (Actor)

class UClass* AWitcherHandgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WitcherHandgun_C");

	return Clss;
}


// WitcherHandgun_C WitcherHandgun.Default__WitcherHandgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWitcherHandgun_C* AWitcherHandgun_C::GetDefaultObj()
{
	static class AWitcherHandgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWitcherHandgun_C*>(AWitcherHandgun_C::StaticClass()->DefaultObject);

	return Default;
}

}



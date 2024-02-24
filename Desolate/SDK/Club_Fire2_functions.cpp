#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Club_Fire2.Club_Fire2_C
// (Actor)

class UClass* AClub_Fire2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Club_Fire2_C");

	return Clss;
}


// Club_Fire2_C Club_Fire2.Default__Club_Fire2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClub_Fire2_C* AClub_Fire2_C::GetDefaultObj()
{
	static class AClub_Fire2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClub_Fire2_C*>(AClub_Fire2_C::StaticClass()->DefaultObject);

	return Default;
}

}



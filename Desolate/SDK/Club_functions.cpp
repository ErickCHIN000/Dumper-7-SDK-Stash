#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Club.Club_C
// (Actor)

class UClass* AClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Club_C");

	return Clss;
}


// Club_C Club.Default__Club_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClub_C* AClub_C::GetDefaultObj()
{
	static class AClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClub_C*>(AClub_C::StaticClass()->DefaultObject);

	return Default;
}

}



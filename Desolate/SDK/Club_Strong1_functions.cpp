#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Club_Strong1.Club_Strong1_C
// (Actor)

class UClass* AClub_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Club_Strong1_C");

	return Clss;
}


// Club_Strong1_C Club_Strong1.Default__Club_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClub_Strong1_C* AClub_Strong1_C::GetDefaultObj()
{
	static class AClub_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClub_Strong1_C*>(AClub_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}



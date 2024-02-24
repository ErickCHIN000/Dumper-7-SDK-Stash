#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Club_Bleed1.Club_Bleed1_C
// (Actor)

class UClass* AClub_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Club_Bleed1_C");

	return Clss;
}


// Club_Bleed1_C Club_Bleed1.Default__Club_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClub_Bleed1_C* AClub_Bleed1_C::GetDefaultObj()
{
	static class AClub_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClub_Bleed1_C*>(AClub_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}



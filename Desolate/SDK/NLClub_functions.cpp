#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLClub.NLClub_C
// (Actor)

class UClass* ANLClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLClub_C");

	return Clss;
}


// NLClub_C NLClub.Default__NLClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLClub_C* ANLClub_C::GetDefaultObj()
{
	static class ANLClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLClub_C*>(ANLClub_C::StaticClass()->DefaultObject);

	return Default;
}

}



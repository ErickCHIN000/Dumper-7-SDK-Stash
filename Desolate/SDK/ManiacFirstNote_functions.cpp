#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ManiacFirstNote.ManiacFirstNote_C
// (Actor)

class UClass* AManiacFirstNote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManiacFirstNote_C");

	return Clss;
}


// ManiacFirstNote_C ManiacFirstNote.Default__ManiacFirstNote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AManiacFirstNote_C* AManiacFirstNote_C::GetDefaultObj()
{
	static class AManiacFirstNote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AManiacFirstNote_C*>(AManiacFirstNote_C::StaticClass()->DefaultObject);

	return Default;
}

}



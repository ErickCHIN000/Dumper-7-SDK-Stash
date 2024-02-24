#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reaper.Reaper_C
// (Actor, Pawn)

class UClass* AReaper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reaper_C");

	return Clss;
}


// Reaper_C Reaper.Default__Reaper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReaper_C* AReaper_C::GetDefaultObj()
{
	static class AReaper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReaper_C*>(AReaper_C::StaticClass()->DefaultObject);

	return Default;
}

}



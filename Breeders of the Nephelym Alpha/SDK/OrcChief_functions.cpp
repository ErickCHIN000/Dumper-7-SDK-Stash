#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcChief.OrcChief_C
// (Actor, Pawn)

class UClass* AOrcChief_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcChief_C");

	return Clss;
}


// OrcChief_C OrcChief.Default__OrcChief_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOrcChief_C* AOrcChief_C::GetDefaultObj()
{
	static class AOrcChief_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOrcChief_C*>(AOrcChief_C::StaticClass()->DefaultObject);

	return Default;
}

}



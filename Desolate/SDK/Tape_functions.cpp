#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tape.Tape_C
// (Actor)

class UClass* ATape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tape_C");

	return Clss;
}


// Tape_C Tape.Default__Tape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATape_C* ATape_C::GetDefaultObj()
{
	static class ATape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATape_C*>(ATape_C::StaticClass()->DefaultObject);

	return Default;
}

}



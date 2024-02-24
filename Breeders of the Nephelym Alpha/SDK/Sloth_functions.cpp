#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sloth.Sloth_C
// (Actor, Pawn)

class UClass* ASloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sloth_C");

	return Clss;
}


// Sloth_C Sloth.Default__Sloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASloth_C* ASloth_C::GetDefaultObj()
{
	static class ASloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASloth_C*>(ASloth_C::StaticClass()->DefaultObject);

	return Default;
}

}



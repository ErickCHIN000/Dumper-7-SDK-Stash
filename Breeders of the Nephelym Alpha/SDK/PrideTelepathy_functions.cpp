#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathy.PrideTelepathy_C
// (Actor, Pawn)

class UClass* APrideTelepathy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathy_C");

	return Clss;
}


// PrideTelepathy_C PrideTelepathy.Default__PrideTelepathy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrideTelepathy_C* APrideTelepathy_C::GetDefaultObj()
{
	static class APrideTelepathy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrideTelepathy_C*>(APrideTelepathy_C::StaticClass()->DefaultObject);

	return Default;
}

}



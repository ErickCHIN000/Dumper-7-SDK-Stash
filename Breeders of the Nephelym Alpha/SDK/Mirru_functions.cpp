#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mirru.Mirru_C
// (Actor, Pawn)

class UClass* AMirru_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mirru_C");

	return Clss;
}


// Mirru_C Mirru.Default__Mirru_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMirru_C* AMirru_C::GetDefaultObj()
{
	static class AMirru_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMirru_C*>(AMirru_C::StaticClass()->DefaultObject);

	return Default;
}

}



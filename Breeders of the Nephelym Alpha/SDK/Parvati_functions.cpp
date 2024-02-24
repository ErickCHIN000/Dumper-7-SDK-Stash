#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Parvati.Parvati_C
// (Actor, Pawn)

class UClass* AParvati_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Parvati_C");

	return Clss;
}


// Parvati_C Parvati.Default__Parvati_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AParvati_C* AParvati_C::GetDefaultObj()
{
	static class AParvati_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AParvati_C*>(AParvati_C::StaticClass()->DefaultObject);

	return Default;
}

}



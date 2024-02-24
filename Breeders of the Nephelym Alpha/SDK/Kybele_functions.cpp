#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kybele.Kybele_C
// (Actor, Pawn)

class UClass* AKybele_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kybele_C");

	return Clss;
}


// Kybele_C Kybele.Default__Kybele_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKybele_C* AKybele_C::GetDefaultObj()
{
	static class AKybele_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKybele_C*>(AKybele_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Neela.Neela_C
// (Actor, Pawn)

class UClass* ANeela_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Neela_C");

	return Clss;
}


// Neela_C Neela.Default__Neela_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANeela_C* ANeela_C::GetDefaultObj()
{
	static class ANeela_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANeela_C*>(ANeela_C::StaticClass()->DefaultObject);

	return Default;
}

}



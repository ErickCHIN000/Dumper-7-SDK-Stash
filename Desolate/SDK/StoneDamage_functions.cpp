#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoneDamage.StoneDamage_C
// (None)

class UClass* UStoneDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoneDamage_C");

	return Clss;
}


// StoneDamage_C StoneDamage.Default__StoneDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoneDamage_C* UStoneDamage_C::GetDefaultObj()
{
	static class UStoneDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoneDamage_C*>(UStoneDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



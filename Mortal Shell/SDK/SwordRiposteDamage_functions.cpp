#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SwordRiposteDamage.SwordRiposteDamage_C
// (None)

class UClass* USwordRiposteDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwordRiposteDamage_C");

	return Clss;
}


// SwordRiposteDamage_C SwordRiposteDamage.Default__SwordRiposteDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USwordRiposteDamage_C* USwordRiposteDamage_C::GetDefaultObj()
{
	static class USwordRiposteDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USwordRiposteDamage_C*>(USwordRiposteDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



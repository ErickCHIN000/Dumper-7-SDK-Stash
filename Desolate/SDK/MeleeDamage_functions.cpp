#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeDamage.MeleeDamage_C
// (None)

class UClass* UMeleeDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeDamage_C");

	return Clss;
}


// MeleeDamage_C MeleeDamage.Default__MeleeDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMeleeDamage_C* UMeleeDamage_C::GetDefaultObj()
{
	static class UMeleeDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeleeDamage_C*>(UMeleeDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



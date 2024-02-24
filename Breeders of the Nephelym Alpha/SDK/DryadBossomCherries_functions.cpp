#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadBossomCherries.DryadBossomCherries_C
// (None)

class UClass* UDryadBossomCherries_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadBossomCherries_C");

	return Clss;
}


// DryadBossomCherries_C DryadBossomCherries.Default__DryadBossomCherries_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadBossomCherries_C* UDryadBossomCherries_C::GetDefaultObj()
{
	static class UDryadBossomCherries_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadBossomCherries_C*>(UDryadBossomCherries_C::StaticClass()->DefaultObject);

	return Default;
}

}



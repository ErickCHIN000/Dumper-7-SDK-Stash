#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeLockedDungeon.AmberMaeLockedDungeon_C
// (None)

class UClass* UAmberMaeLockedDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeLockedDungeon_C");

	return Clss;
}


// AmberMaeLockedDungeon_C AmberMaeLockedDungeon.Default__AmberMaeLockedDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeLockedDungeon_C* UAmberMaeLockedDungeon_C::GetDefaultObj()
{
	static class UAmberMaeLockedDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeLockedDungeon_C*>(UAmberMaeLockedDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}



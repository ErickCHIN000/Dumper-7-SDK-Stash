#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeLockedDungeon2.AmberMaeLockedDungeon2_C
// (None)

class UClass* UAmberMaeLockedDungeon2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeLockedDungeon2_C");

	return Clss;
}


// AmberMaeLockedDungeon2_C AmberMaeLockedDungeon2.Default__AmberMaeLockedDungeon2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeLockedDungeon2_C* UAmberMaeLockedDungeon2_C::GetDefaultObj()
{
	static class UAmberMaeLockedDungeon2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeLockedDungeon2_C*>(UAmberMaeLockedDungeon2_C::StaticClass()->DefaultObject);

	return Default;
}

}



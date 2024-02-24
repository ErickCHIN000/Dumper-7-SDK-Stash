#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RomyLockedDungeon.RomyLockedDungeon_C
// (None)

class UClass* URomyLockedDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RomyLockedDungeon_C");

	return Clss;
}


// RomyLockedDungeon_C RomyLockedDungeon.Default__RomyLockedDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URomyLockedDungeon_C* URomyLockedDungeon_C::GetDefaultObj()
{
	static class URomyLockedDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URomyLockedDungeon_C*>(URomyLockedDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}



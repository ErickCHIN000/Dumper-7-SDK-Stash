#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDungeon.CassieDungeon_C
// (None)

class UClass* UCassieDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDungeon_C");

	return Clss;
}


// CassieDungeon_C CassieDungeon.Default__CassieDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDungeon_C* UCassieDungeon_C::GetDefaultObj()
{
	static class UCassieDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDungeon_C*>(UCassieDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}



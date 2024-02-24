#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDungeon2.CassieDungeon2_C
// (None)

class UClass* UCassieDungeon2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDungeon2_C");

	return Clss;
}


// CassieDungeon2_C CassieDungeon2.Default__CassieDungeon2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDungeon2_C* UCassieDungeon2_C::GetDefaultObj()
{
	static class UCassieDungeon2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDungeon2_C*>(UCassieDungeon2_C::StaticClass()->DefaultObject);

	return Default;
}

}



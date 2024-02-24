#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Brendy.Brendy_C
// (Actor)

class UClass* ABrendy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Brendy_C");

	return Clss;
}


// Brendy_C Brendy.Default__Brendy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABrendy_C* ABrendy_C::GetDefaultObj()
{
	static class ABrendy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABrendy_C*>(ABrendy_C::StaticClass()->DefaultObject);

	return Default;
}

}



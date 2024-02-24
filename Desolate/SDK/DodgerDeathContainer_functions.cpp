#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DodgerDeathContainer.DodgerDeathContainer_C
// (Actor)

class UClass* ADodgerDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DodgerDeathContainer_C");

	return Clss;
}


// DodgerDeathContainer_C DodgerDeathContainer.Default__DodgerDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADodgerDeathContainer_C* ADodgerDeathContainer_C::GetDefaultObj()
{
	static class ADodgerDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADodgerDeathContainer_C*>(ADodgerDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DorgDeathContainer_Alpha.DorgDeathContainer_Alpha_C
// (Actor)

class UClass* ADorgDeathContainer_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DorgDeathContainer_Alpha_C");

	return Clss;
}


// DorgDeathContainer_Alpha_C DorgDeathContainer_Alpha.Default__DorgDeathContainer_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADorgDeathContainer_Alpha_C* ADorgDeathContainer_Alpha_C::GetDefaultObj()
{
	static class ADorgDeathContainer_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADorgDeathContainer_Alpha_C*>(ADorgDeathContainer_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}



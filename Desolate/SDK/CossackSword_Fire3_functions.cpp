#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword_Fire3.CossackSword_Fire3_C
// (Actor)

class UClass* ACossackSword_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_Fire3_C");

	return Clss;
}


// CossackSword_Fire3_C CossackSword_Fire3.Default__CossackSword_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_Fire3_C* ACossackSword_Fire3_C::GetDefaultObj()
{
	static class ACossackSword_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_Fire3_C*>(ACossackSword_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}



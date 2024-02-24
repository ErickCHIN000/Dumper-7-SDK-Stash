#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword.CossackSword_C
// (Actor)

class UClass* ACossackSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_C");

	return Clss;
}


// CossackSword_C CossackSword.Default__CossackSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_C* ACossackSword_C::GetDefaultObj()
{
	static class ACossackSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_C*>(ACossackSword_C::StaticClass()->DefaultObject);

	return Default;
}

}



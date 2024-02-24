#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword_Strong3.CossackSword_Strong3_C
// (Actor)

class UClass* ACossackSword_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_Strong3_C");

	return Clss;
}


// CossackSword_Strong3_C CossackSword_Strong3.Default__CossackSword_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_Strong3_C* ACossackSword_Strong3_C::GetDefaultObj()
{
	static class ACossackSword_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_Strong3_C*>(ACossackSword_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}



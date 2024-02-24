#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword_Ice3.CossackSword_Ice3_C
// (Actor)

class UClass* ACossackSword_Ice3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_Ice3_C");

	return Clss;
}


// CossackSword_Ice3_C CossackSword_Ice3.Default__CossackSword_Ice3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_Ice3_C* ACossackSword_Ice3_C::GetDefaultObj()
{
	static class ACossackSword_Ice3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_Ice3_C*>(ACossackSword_Ice3_C::StaticClass()->DefaultObject);

	return Default;
}

}



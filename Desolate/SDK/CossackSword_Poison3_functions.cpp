#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword_Poison3.CossackSword_Poison3_C
// (Actor)

class UClass* ACossackSword_Poison3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_Poison3_C");

	return Clss;
}


// CossackSword_Poison3_C CossackSword_Poison3.Default__CossackSword_Poison3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_Poison3_C* ACossackSword_Poison3_C::GetDefaultObj()
{
	static class ACossackSword_Poison3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_Poison3_C*>(ACossackSword_Poison3_C::StaticClass()->DefaultObject);

	return Default;
}

}



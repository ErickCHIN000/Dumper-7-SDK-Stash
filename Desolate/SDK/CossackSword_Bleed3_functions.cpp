#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword_Bleed3.CossackSword_Bleed3_C
// (Actor)

class UClass* ACossackSword_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_Bleed3_C");

	return Clss;
}


// CossackSword_Bleed3_C CossackSword_Bleed3.Default__CossackSword_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_Bleed3_C* ACossackSword_Bleed3_C::GetDefaultObj()
{
	static class ACossackSword_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_Bleed3_C*>(ACossackSword_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}



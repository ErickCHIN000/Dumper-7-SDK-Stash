#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CossackSword_Electro3.CossackSword_Electro3_C
// (Actor)

class UClass* ACossackSword_Electro3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CossackSword_Electro3_C");

	return Clss;
}


// CossackSword_Electro3_C CossackSword_Electro3.Default__CossackSword_Electro3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACossackSword_Electro3_C* ACossackSword_Electro3_C::GetDefaultObj()
{
	static class ACossackSword_Electro3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACossackSword_Electro3_C*>(ACossackSword_Electro3_C::StaticClass()->DefaultObject);

	return Default;
}

}



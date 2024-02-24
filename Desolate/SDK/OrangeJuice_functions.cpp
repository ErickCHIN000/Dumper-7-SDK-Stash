#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrangeJuice.OrangeJuice_C
// (Actor)

class UClass* AOrangeJuice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrangeJuice_C");

	return Clss;
}


// OrangeJuice_C OrangeJuice.Default__OrangeJuice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOrangeJuice_C* AOrangeJuice_C::GetDefaultObj()
{
	static class AOrangeJuice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOrangeJuice_C*>(AOrangeJuice_C::StaticClass()->DefaultObject);

	return Default;
}

}



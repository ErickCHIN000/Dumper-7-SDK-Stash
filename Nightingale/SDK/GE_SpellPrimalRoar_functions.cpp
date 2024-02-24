#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpellPrimalRoar.GE_SpellPrimalRoar_C
// (None)

class UClass* UGE_SpellPrimalRoar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpellPrimalRoar_C");

	return Clss;
}


// GE_SpellPrimalRoar_C GE_SpellPrimalRoar.Default__GE_SpellPrimalRoar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpellPrimalRoar_C* UGE_SpellPrimalRoar_C::GetDefaultObj()
{
	static class UGE_SpellPrimalRoar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpellPrimalRoar_C*>(UGE_SpellPrimalRoar_C::StaticClass()->DefaultObject);

	return Default;
}

}



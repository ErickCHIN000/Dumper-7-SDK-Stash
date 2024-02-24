#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PotatoChips.PotatoChips_C
// (Actor)

class UClass* APotatoChips_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PotatoChips_C");

	return Clss;
}


// PotatoChips_C PotatoChips.Default__PotatoChips_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APotatoChips_C* APotatoChips_C::GetDefaultObj()
{
	static class APotatoChips_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APotatoChips_C*>(APotatoChips_C::StaticClass()->DefaultObject);

	return Default;
}

}



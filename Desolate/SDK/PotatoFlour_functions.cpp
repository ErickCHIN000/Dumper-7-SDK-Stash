#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PotatoFlour.PotatoFlour_C
// (Actor)

class UClass* APotatoFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PotatoFlour_C");

	return Clss;
}


// PotatoFlour_C PotatoFlour.Default__PotatoFlour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APotatoFlour_C* APotatoFlour_C::GetDefaultObj()
{
	static class APotatoFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APotatoFlour_C*>(APotatoFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}



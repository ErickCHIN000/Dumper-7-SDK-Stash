#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoyFlour.SoyFlour_C
// (Actor)

class UClass* ASoyFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoyFlour_C");

	return Clss;
}


// SoyFlour_C SoyFlour.Default__SoyFlour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoyFlour_C* ASoyFlour_C::GetDefaultObj()
{
	static class ASoyFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoyFlour_C*>(ASoyFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}



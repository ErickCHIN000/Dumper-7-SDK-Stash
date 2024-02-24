#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraAboutPawsmaati.PetraAboutPawsmaati_C
// (None)

class UClass* UPetraAboutPawsmaati_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraAboutPawsmaati_C");

	return Clss;
}


// PetraAboutPawsmaati_C PetraAboutPawsmaati.Default__PetraAboutPawsmaati_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraAboutPawsmaati_C* UPetraAboutPawsmaati_C::GetDefaultObj()
{
	static class UPetraAboutPawsmaati_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraAboutPawsmaati_C*>(UPetraAboutPawsmaati_C::StaticClass()->DefaultObject);

	return Default;
}

}



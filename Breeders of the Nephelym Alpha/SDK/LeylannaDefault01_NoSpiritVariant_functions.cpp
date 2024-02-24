#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_NoSpiritVariant.LeylannaDefault01_NoSpiritVariant_C
// (None)

class UClass* ULeylannaDefault01_NoSpiritVariant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_NoSpiritVariant_C");

	return Clss;
}


// LeylannaDefault01_NoSpiritVariant_C LeylannaDefault01_NoSpiritVariant.Default__LeylannaDefault01_NoSpiritVariant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_NoSpiritVariant_C* ULeylannaDefault01_NoSpiritVariant_C::GetDefaultObj()
{
	static class ULeylannaDefault01_NoSpiritVariant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_NoSpiritVariant_C*>(ULeylannaDefault01_NoSpiritVariant_C::StaticClass()->DefaultObject);

	return Default;
}

}



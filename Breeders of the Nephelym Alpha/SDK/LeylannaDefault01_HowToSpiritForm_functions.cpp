#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_HowToSpiritForm.LeylannaDefault01_HowToSpiritForm_C
// (None)

class UClass* ULeylannaDefault01_HowToSpiritForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_HowToSpiritForm_C");

	return Clss;
}


// LeylannaDefault01_HowToSpiritForm_C LeylannaDefault01_HowToSpiritForm.Default__LeylannaDefault01_HowToSpiritForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_HowToSpiritForm_C* ULeylannaDefault01_HowToSpiritForm_C::GetDefaultObj()
{
	static class ULeylannaDefault01_HowToSpiritForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_HowToSpiritForm_C*>(ULeylannaDefault01_HowToSpiritForm_C::StaticClass()->DefaultObject);

	return Default;
}

}



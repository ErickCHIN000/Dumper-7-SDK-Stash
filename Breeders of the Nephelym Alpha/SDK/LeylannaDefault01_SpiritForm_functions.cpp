#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_SpiritForm.LeylannaDefault01_SpiritForm_C
// (None)

class UClass* ULeylannaDefault01_SpiritForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_SpiritForm_C");

	return Clss;
}


// LeylannaDefault01_SpiritForm_C LeylannaDefault01_SpiritForm.Default__LeylannaDefault01_SpiritForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_SpiritForm_C* ULeylannaDefault01_SpiritForm_C::GetDefaultObj()
{
	static class ULeylannaDefault01_SpiritForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_SpiritForm_C*>(ULeylannaDefault01_SpiritForm_C::StaticClass()->DefaultObject);

	return Default;
}

}



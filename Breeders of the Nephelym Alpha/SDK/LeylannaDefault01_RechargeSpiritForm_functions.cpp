#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_RechargeSpiritForm.LeylannaDefault01_RechargeSpiritForm_C
// (None)

class UClass* ULeylannaDefault01_RechargeSpiritForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_RechargeSpiritForm_C");

	return Clss;
}


// LeylannaDefault01_RechargeSpiritForm_C LeylannaDefault01_RechargeSpiritForm.Default__LeylannaDefault01_RechargeSpiritForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_RechargeSpiritForm_C* ULeylannaDefault01_RechargeSpiritForm_C::GetDefaultObj()
{
	static class ULeylannaDefault01_RechargeSpiritForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_RechargeSpiritForm_C*>(ULeylannaDefault01_RechargeSpiritForm_C::StaticClass()->DefaultObject);

	return Default;
}

}



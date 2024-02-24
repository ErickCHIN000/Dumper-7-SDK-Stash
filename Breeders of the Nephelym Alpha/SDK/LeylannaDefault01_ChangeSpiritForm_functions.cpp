#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_ChangeSpiritForm.LeylannaDefault01_ChangeSpiritForm_C
// (None)

class UClass* ULeylannaDefault01_ChangeSpiritForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_ChangeSpiritForm_C");

	return Clss;
}


// LeylannaDefault01_ChangeSpiritForm_C LeylannaDefault01_ChangeSpiritForm.Default__LeylannaDefault01_ChangeSpiritForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_ChangeSpiritForm_C* ULeylannaDefault01_ChangeSpiritForm_C::GetDefaultObj()
{
	static class ULeylannaDefault01_ChangeSpiritForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_ChangeSpiritForm_C*>(ULeylannaDefault01_ChangeSpiritForm_C::StaticClass()->DefaultObject);

	return Default;
}

}



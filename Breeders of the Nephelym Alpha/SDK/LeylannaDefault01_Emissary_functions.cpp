#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDefault01_Emissary.LeylannaDefault01_Emissary_C
// (None)

class UClass* ULeylannaDefault01_Emissary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDefault01_Emissary_C");

	return Clss;
}


// LeylannaDefault01_Emissary_C LeylannaDefault01_Emissary.Default__LeylannaDefault01_Emissary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDefault01_Emissary_C* ULeylannaDefault01_Emissary_C::GetDefaultObj()
{
	static class ULeylannaDefault01_Emissary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDefault01_Emissary_C*>(ULeylannaDefault01_Emissary_C::StaticClass()->DefaultObject);

	return Default;
}

}



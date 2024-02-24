#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaAyu_BreederT.LeylannaAyu_BreederT_C
// (None)

class UClass* ULeylannaAyu_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaAyu_BreederT_C");

	return Clss;
}


// LeylannaAyu_BreederT_C LeylannaAyu_BreederT.Default__LeylannaAyu_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaAyu_BreederT_C* ULeylannaAyu_BreederT_C::GetDefaultObj()
{
	static class ULeylannaAyu_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaAyu_BreederT_C*>(ULeylannaAyu_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}



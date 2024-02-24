#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaSnakeCuddle_BreederT.NeelaSnakeCuddle_BreederT_C
// (None)

class UClass* UNeelaSnakeCuddle_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaSnakeCuddle_BreederT_C");

	return Clss;
}


// NeelaSnakeCuddle_BreederT_C NeelaSnakeCuddle_BreederT.Default__NeelaSnakeCuddle_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaSnakeCuddle_BreederT_C* UNeelaSnakeCuddle_BreederT_C::GetDefaultObj()
{
	static class UNeelaSnakeCuddle_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaSnakeCuddle_BreederT_C*>(UNeelaSnakeCuddle_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}



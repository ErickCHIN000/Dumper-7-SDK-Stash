#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaSnakeCuddle_BreederF.NeelaSnakeCuddle_BreederF_C
// (None)

class UClass* UNeelaSnakeCuddle_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaSnakeCuddle_BreederF_C");

	return Clss;
}


// NeelaSnakeCuddle_BreederF_C NeelaSnakeCuddle_BreederF.Default__NeelaSnakeCuddle_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaSnakeCuddle_BreederF_C* UNeelaSnakeCuddle_BreederF_C::GetDefaultObj()
{
	static class UNeelaSnakeCuddle_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaSnakeCuddle_BreederF_C*>(UNeelaSnakeCuddle_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}



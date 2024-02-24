#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaFaleneWarning.LeylannaFaleneWarning_C
// (None)

class UClass* ULeylannaFaleneWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaFaleneWarning_C");

	return Clss;
}


// LeylannaFaleneWarning_C LeylannaFaleneWarning.Default__LeylannaFaleneWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaFaleneWarning_C* ULeylannaFaleneWarning_C::GetDefaultObj()
{
	static class ULeylannaFaleneWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaFaleneWarning_C*>(ULeylannaFaleneWarning_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaSnakeCuddleT.NeelaSnakeCuddleT_C
// (None)

class UClass* UNeelaSnakeCuddleT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaSnakeCuddleT_C");

	return Clss;
}


// NeelaSnakeCuddleT_C NeelaSnakeCuddleT.Default__NeelaSnakeCuddleT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaSnakeCuddleT_C* UNeelaSnakeCuddleT_C::GetDefaultObj()
{
	static class UNeelaSnakeCuddleT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaSnakeCuddleT_C*>(UNeelaSnakeCuddleT_C::StaticClass()->DefaultObject);

	return Default;
}

}



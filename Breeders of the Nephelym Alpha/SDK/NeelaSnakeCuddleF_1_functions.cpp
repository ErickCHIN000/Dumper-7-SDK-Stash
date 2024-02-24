#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeelaSnakeCuddleF.NeelaSnakeCuddleF_C
// (None)

class UClass* UNeelaSnakeCuddleF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeelaSnakeCuddleF_C");

	return Clss;
}


// NeelaSnakeCuddleF_C NeelaSnakeCuddleF.Default__NeelaSnakeCuddleF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeelaSnakeCuddleF_C* UNeelaSnakeCuddleF_C::GetDefaultObj()
{
	static class UNeelaSnakeCuddleF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeelaSnakeCuddleF_C*>(UNeelaSnakeCuddleF_C::StaticClass()->DefaultObject);

	return Default;
}

}



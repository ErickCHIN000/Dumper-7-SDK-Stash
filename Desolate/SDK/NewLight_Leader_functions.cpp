#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_Leader.NewLight_Leader_C
// (Actor, Pawn)

class UClass* ANewLight_Leader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_Leader_C");

	return Clss;
}


// NewLight_Leader_C NewLight_Leader.Default__NewLight_Leader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_Leader_C* ANewLight_Leader_C::GetDefaultObj()
{
	static class ANewLight_Leader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_Leader_C*>(ANewLight_Leader_C::StaticClass()->DefaultObject);

	return Default;
}

}



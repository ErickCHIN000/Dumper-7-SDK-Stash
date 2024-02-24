#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThickLeather.ThickLeather_C
// (Actor)

class UClass* AThickLeather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThickLeather_C");

	return Clss;
}


// ThickLeather_C ThickLeather.Default__ThickLeather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AThickLeather_C* AThickLeather_C::GetDefaultObj()
{
	static class AThickLeather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AThickLeather_C*>(AThickLeather_C::StaticClass()->DefaultObject);

	return Default;
}

}



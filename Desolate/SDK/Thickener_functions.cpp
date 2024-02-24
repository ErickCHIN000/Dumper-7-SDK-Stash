#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Thickener.Thickener_C
// (Actor)

class UClass* AThickener_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Thickener_C");

	return Clss;
}


// Thickener_C Thickener.Default__Thickener_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AThickener_C* AThickener_C::GetDefaultObj()
{
	static class AThickener_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AThickener_C*>(AThickener_C::StaticClass()->DefaultObject);

	return Default;
}

}



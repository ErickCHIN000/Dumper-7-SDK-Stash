#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rum.Rum_C
// (Actor)

class UClass* ARum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rum_C");

	return Clss;
}


// Rum_C Rum.Default__Rum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARum_C* ARum_C::GetDefaultObj()
{
	static class ARum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARum_C*>(ARum_C::StaticClass()->DefaultObject);

	return Default;
}

}



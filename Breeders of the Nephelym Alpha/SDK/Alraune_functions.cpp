#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Alraune.Alraune_C
// (None)

class UClass* UAlraune_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Alraune_C");

	return Clss;
}


// Alraune_C Alraune.Default__Alraune_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlraune_C* UAlraune_C::GetDefaultObj()
{
	static class UAlraune_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlraune_C*>(UAlraune_C::StaticClass()->DefaultObject);

	return Default;
}

}



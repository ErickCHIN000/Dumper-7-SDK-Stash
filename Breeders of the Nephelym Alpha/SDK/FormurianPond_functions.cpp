#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FormurianPond.FormurianPond_C
// (None)

class UClass* UFormurianPond_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FormurianPond_C");

	return Clss;
}


// FormurianPond_C FormurianPond.Default__FormurianPond_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFormurianPond_C* UFormurianPond_C::GetDefaultObj()
{
	static class UFormurianPond_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFormurianPond_C*>(UFormurianPond_C::StaticClass()->DefaultObject);

	return Default;
}

}



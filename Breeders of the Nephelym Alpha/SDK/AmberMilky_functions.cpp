#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMilky.AmberMilky_C
// (None)

class UClass* UAmberMilky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMilky_C");

	return Clss;
}


// AmberMilky_C AmberMilky.Default__AmberMilky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMilky_C* UAmberMilky_C::GetDefaultObj()
{
	static class UAmberMilky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMilky_C*>(UAmberMilky_C::StaticClass()->DefaultObject);

	return Default;
}

}



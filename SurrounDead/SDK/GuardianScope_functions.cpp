#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GuardianScope.GuardianScope_C
// (None)

class UClass* UGuardianScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuardianScope_C");

	return Clss;
}


// GuardianScope_C GuardianScope.Default__GuardianScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuardianScope_C* UGuardianScope_C::GetDefaultObj()
{
	static class UGuardianScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuardianScope_C*>(UGuardianScope_C::StaticClass()->DefaultObject);

	return Default;
}

}



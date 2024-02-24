#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ThrowCrosshairs.ThrowCrosshairs_C
// (None)

class UClass* UThrowCrosshairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThrowCrosshairs_C");

	return Clss;
}


// ThrowCrosshairs_C ThrowCrosshairs.Default__ThrowCrosshairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThrowCrosshairs_C* UThrowCrosshairs_C::GetDefaultObj()
{
	static class UThrowCrosshairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrowCrosshairs_C*>(UThrowCrosshairs_C::StaticClass()->DefaultObject);

	return Default;
}

}



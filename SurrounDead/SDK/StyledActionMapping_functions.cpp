#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledActionMapping.StyledActionMapping_C
// (None)

class UClass* UStyledActionMapping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledActionMapping_C");

	return Clss;
}


// StyledActionMapping_C StyledActionMapping.Default__StyledActionMapping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledActionMapping_C* UStyledActionMapping_C::GetDefaultObj()
{
	static class UStyledActionMapping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledActionMapping_C*>(UStyledActionMapping_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledAxisMapping.StyledAxisMapping_C
// (None)

class UClass* UStyledAxisMapping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledAxisMapping_C");

	return Clss;
}


// StyledAxisMapping_C StyledAxisMapping.Default__StyledAxisMapping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledAxisMapping_C* UStyledAxisMapping_C::GetDefaultObj()
{
	static class UStyledAxisMapping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledAxisMapping_C*>(UStyledAxisMapping_C::StaticClass()->DefaultObject);

	return Default;
}

}



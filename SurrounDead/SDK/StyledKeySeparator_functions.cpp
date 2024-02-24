#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledKeySeparator.StyledKeySeparator_C
// (None)

class UClass* UStyledKeySeparator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledKeySeparator_C");

	return Clss;
}


// StyledKeySeparator_C StyledKeySeparator.Default__StyledKeySeparator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledKeySeparator_C* UStyledKeySeparator_C::GetDefaultObj()
{
	static class UStyledKeySeparator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledKeySeparator_C*>(UStyledKeySeparator_C::StaticClass()->DefaultObject);

	return Default;
}

}



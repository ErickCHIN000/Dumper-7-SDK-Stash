#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledActionLabel.StyledActionLabel_C
// (None)

class UClass* UStyledActionLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledActionLabel_C");

	return Clss;
}


// StyledActionLabel_C StyledActionLabel.Default__StyledActionLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledActionLabel_C* UStyledActionLabel_C::GetDefaultObj()
{
	static class UStyledActionLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledActionLabel_C*>(UStyledActionLabel_C::StaticClass()->DefaultObject);

	return Default;
}

}



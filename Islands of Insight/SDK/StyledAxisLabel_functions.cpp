#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledAxisLabel.StyledAxisLabel_C
// (None)

class UClass* UStyledAxisLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledAxisLabel_C");

	return Clss;
}


// StyledAxisLabel_C StyledAxisLabel.Default__StyledAxisLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledAxisLabel_C* UStyledAxisLabel_C::GetDefaultObj()
{
	static class UStyledAxisLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledAxisLabel_C*>(UStyledAxisLabel_C::StaticClass()->DefaultObject);

	return Default;
}

}



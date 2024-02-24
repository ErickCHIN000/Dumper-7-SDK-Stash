#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledPleaseWaitOverlay.StyledPleaseWaitOverlay_C
// (None)

class UClass* UStyledPleaseWaitOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledPleaseWaitOverlay_C");

	return Clss;
}


// StyledPleaseWaitOverlay_C StyledPleaseWaitOverlay.Default__StyledPleaseWaitOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledPleaseWaitOverlay_C* UStyledPleaseWaitOverlay_C::GetDefaultObj()
{
	static class UStyledPleaseWaitOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledPleaseWaitOverlay_C*>(UStyledPleaseWaitOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}



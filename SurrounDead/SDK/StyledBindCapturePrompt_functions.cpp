#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledBindCapturePrompt.StyledBindCapturePrompt_C
// (None)

class UClass* UStyledBindCapturePrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledBindCapturePrompt_C");

	return Clss;
}


// StyledBindCapturePrompt_C StyledBindCapturePrompt.Default__StyledBindCapturePrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledBindCapturePrompt_C* UStyledBindCapturePrompt_C::GetDefaultObj()
{
	static class UStyledBindCapturePrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledBindCapturePrompt_C*>(UStyledBindCapturePrompt_C::StaticClass()->DefaultObject);

	return Default;
}

}



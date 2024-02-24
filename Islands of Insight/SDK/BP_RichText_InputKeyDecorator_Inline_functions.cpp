#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RichText_InputKeyDecorator_Inline.BP_RichText_InputKeyDecorator_Inline_C
// (None)

class UClass* UBP_RichText_InputKeyDecorator_Inline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichText_InputKeyDecorator_Inline_C");

	return Clss;
}


// BP_RichText_InputKeyDecorator_Inline_C BP_RichText_InputKeyDecorator_Inline.Default__BP_RichText_InputKeyDecorator_Inline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RichText_InputKeyDecorator_Inline_C* UBP_RichText_InputKeyDecorator_Inline_C::GetDefaultObj()
{
	static class UBP_RichText_InputKeyDecorator_Inline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RichText_InputKeyDecorator_Inline_C*>(UBP_RichText_InputKeyDecorator_Inline_C::StaticClass()->DefaultObject);

	return Default;
}

}



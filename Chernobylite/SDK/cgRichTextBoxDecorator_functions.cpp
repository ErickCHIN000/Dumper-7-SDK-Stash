#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass cgRichTextBoxDecorator.cgRichTextBoxDecorator_C
// (None)

class UClass* UCgRichTextBoxDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cgRichTextBoxDecorator_C");

	return Clss;
}


// cgRichTextBoxDecorator_C cgRichTextBoxDecorator.Default__cgRichTextBoxDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCgRichTextBoxDecorator_C* UCgRichTextBoxDecorator_C::GetDefaultObj()
{
	static class UCgRichTextBoxDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCgRichTextBoxDecorator_C*>(UCgRichTextBoxDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}



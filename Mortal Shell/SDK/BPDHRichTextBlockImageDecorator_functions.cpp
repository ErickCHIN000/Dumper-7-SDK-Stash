#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPDHRichTextBlockImageDecorator.BPDHRichTextBlockImageDecorator_C
// (None)

class UClass* UBPDHRichTextBlockImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPDHRichTextBlockImageDecorator_C");

	return Clss;
}


// BPDHRichTextBlockImageDecorator_C BPDHRichTextBlockImageDecorator.Default__BPDHRichTextBlockImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPDHRichTextBlockImageDecorator_C* UBPDHRichTextBlockImageDecorator_C::GetDefaultObj()
{
	static class UBPDHRichTextBlockImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPDHRichTextBlockImageDecorator_C*>(UBPDHRichTextBlockImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}



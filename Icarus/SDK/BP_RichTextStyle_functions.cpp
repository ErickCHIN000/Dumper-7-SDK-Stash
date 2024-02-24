#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RichTextStyle.BP_RichTextStyle_C
// (None)

class UClass* UBP_RichTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichTextStyle_C");

	return Clss;
}


// BP_RichTextStyle_C BP_RichTextStyle.Default__BP_RichTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RichTextStyle_C* UBP_RichTextStyle_C::GetDefaultObj()
{
	static class UBP_RichTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RichTextStyle_C*>(UBP_RichTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}



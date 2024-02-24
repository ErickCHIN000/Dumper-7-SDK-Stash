#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RichTextImage.BP_RichTextImage_C
// (None)

class UClass* UBP_RichTextImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RichTextImage_C");

	return Clss;
}


// BP_RichTextImage_C BP_RichTextImage.Default__BP_RichTextImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RichTextImage_C* UBP_RichTextImage_C::GetDefaultObj()
{
	static class UBP_RichTextImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RichTextImage_C*>(UBP_RichTextImage_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Text_Scroll_Style_Default.Text_Scroll_Style_Default_C
// (None)

class UClass* UText_Scroll_Style_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Text_Scroll_Style_Default_C");

	return Clss;
}


// Text_Scroll_Style_Default_C Text_Scroll_Style_Default.Default__Text_Scroll_Style_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UText_Scroll_Style_Default_C* UText_Scroll_Style_Default_C::GetDefaultObj()
{
	static class UText_Scroll_Style_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UText_Scroll_Style_Default_C*>(UText_Scroll_Style_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Richtext_image_decorator_PC_Button.BP_Richtext_image_decorator_PC_Button_C
// (None)

class UClass* UBP_Richtext_image_decorator_PC_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Richtext_image_decorator_PC_Button_C");

	return Clss;
}


// BP_Richtext_image_decorator_PC_Button_C BP_Richtext_image_decorator_PC_Button.Default__BP_Richtext_image_decorator_PC_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Richtext_image_decorator_PC_Button_C* UBP_Richtext_image_decorator_PC_Button_C::GetDefaultObj()
{
	static class UBP_Richtext_image_decorator_PC_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Richtext_image_decorator_PC_Button_C*>(UBP_Richtext_image_decorator_PC_Button_C::StaticClass()->DefaultObject);

	return Default;
}

}



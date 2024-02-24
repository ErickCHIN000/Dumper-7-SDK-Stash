#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Richtext_image_decorator_PC.BP_Richtext_image_decorator_PC_C
// (None)

class UClass* UBP_Richtext_image_decorator_PC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Richtext_image_decorator_PC_C");

	return Clss;
}


// BP_Richtext_image_decorator_PC_C BP_Richtext_image_decorator_PC.Default__BP_Richtext_image_decorator_PC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Richtext_image_decorator_PC_C* UBP_Richtext_image_decorator_PC_C::GetDefaultObj()
{
	static class UBP_Richtext_image_decorator_PC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Richtext_image_decorator_PC_C*>(UBP_Richtext_image_decorator_PC_C::StaticClass()->DefaultObject);

	return Default;
}

}



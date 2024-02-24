#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_FP_UnarmedOffhand.AnimB_FP_UnarmedOffhand_C
// (None)

class UClass* UAnimB_FP_UnarmedOffhand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_FP_UnarmedOffhand_C");

	return Clss;
}


// AnimB_FP_UnarmedOffhand_C AnimB_FP_UnarmedOffhand.Default__AnimB_FP_UnarmedOffhand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_FP_UnarmedOffhand_C* UAnimB_FP_UnarmedOffhand_C::GetDefaultObj()
{
	static class UAnimB_FP_UnarmedOffhand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_FP_UnarmedOffhand_C*>(UAnimB_FP_UnarmedOffhand_C::StaticClass()->DefaultObject);

	return Default;
}

}



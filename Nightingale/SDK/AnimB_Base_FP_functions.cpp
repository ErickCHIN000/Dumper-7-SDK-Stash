#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_Base_FP.AnimB_Base_FP_C
// (None)

class UClass* UAnimB_Base_FP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_Base_FP_C");

	return Clss;
}


// AnimB_Base_FP_C AnimB_Base_FP.Default__AnimB_Base_FP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_Base_FP_C* UAnimB_Base_FP_C::GetDefaultObj()
{
	static class UAnimB_Base_FP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_Base_FP_C*>(UAnimB_Base_FP_C::StaticClass()->DefaultObject);

	return Default;
}

}



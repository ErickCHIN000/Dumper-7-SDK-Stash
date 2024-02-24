#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_Base.AnimB_Base_C
// (None)

class UClass* UAnimB_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_Base_C");

	return Clss;
}


// AnimB_Base_C AnimB_Base.Default__AnimB_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_Base_C* UAnimB_Base_C::GetDefaultObj()
{
	static class UAnimB_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_Base_C*>(UAnimB_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}



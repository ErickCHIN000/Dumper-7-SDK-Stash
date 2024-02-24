#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_EndSection.AnimNotify_EndSection_C
// (None)

class UClass* UAnimNotify_EndSection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EndSection_C");

	return Clss;
}


// AnimNotify_EndSection_C AnimNotify_EndSection.Default__AnimNotify_EndSection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_EndSection_C* UAnimNotify_EndSection_C::GetDefaultObj()
{
	static class UAnimNotify_EndSection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EndSection_C*>(UAnimNotify_EndSection_C::StaticClass()->DefaultObject);

	return Default;
}

}



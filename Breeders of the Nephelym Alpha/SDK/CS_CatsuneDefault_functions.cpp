#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_CatsuneDefault.CS_CatsuneDefault_C
// (None)

class UClass* UCS_CatsuneDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_CatsuneDefault_C");

	return Clss;
}


// CS_CatsuneDefault_C CS_CatsuneDefault.Default__CS_CatsuneDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_CatsuneDefault_C* UCS_CatsuneDefault_C::GetDefaultObj()
{
	static class UCS_CatsuneDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_CatsuneDefault_C*>(UCS_CatsuneDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}



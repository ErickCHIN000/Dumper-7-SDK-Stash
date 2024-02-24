#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_MinotaurDefaultEx.CS_MinotaurDefaultEx_C
// (None)

class UClass* UCS_MinotaurDefaultEx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_MinotaurDefaultEx_C");

	return Clss;
}


// CS_MinotaurDefaultEx_C CS_MinotaurDefaultEx.Default__CS_MinotaurDefaultEx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_MinotaurDefaultEx_C* UCS_MinotaurDefaultEx_C::GetDefaultObj()
{
	static class UCS_MinotaurDefaultEx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_MinotaurDefaultEx_C*>(UCS_MinotaurDefaultEx_C::StaticClass()->DefaultObject);

	return Default;
}

}



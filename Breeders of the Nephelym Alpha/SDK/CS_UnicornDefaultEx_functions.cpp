#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_UnicornDefaultEx.CS_UnicornDefaultEx_C
// (None)

class UClass* UCS_UnicornDefaultEx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_UnicornDefaultEx_C");

	return Clss;
}


// CS_UnicornDefaultEx_C CS_UnicornDefaultEx.Default__CS_UnicornDefaultEx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_UnicornDefaultEx_C* UCS_UnicornDefaultEx_C::GetDefaultObj()
{
	static class UCS_UnicornDefaultEx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_UnicornDefaultEx_C*>(UCS_UnicornDefaultEx_C::StaticClass()->DefaultObject);

	return Default;
}

}



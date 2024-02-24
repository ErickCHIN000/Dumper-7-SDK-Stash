#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Text_Warning.CS_Text_Warning_C
// (None)

class UClass* UCS_Text_Warning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Text_Warning_C");

	return Clss;
}


// CS_Text_Warning_C CS_Text_Warning.Default__CS_Text_Warning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Text_Warning_C* UCS_Text_Warning_C::GetDefaultObj()
{
	static class UCS_Text_Warning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Text_Warning_C*>(UCS_Text_Warning_C::StaticClass()->DefaultObject);

	return Default;
}

}



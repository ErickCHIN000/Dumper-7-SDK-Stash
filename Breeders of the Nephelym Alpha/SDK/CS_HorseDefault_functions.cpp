#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_HorseDefault.CS_HorseDefault_C
// (None)

class UClass* UCS_HorseDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_HorseDefault_C");

	return Clss;
}


// CS_HorseDefault_C CS_HorseDefault.Default__CS_HorseDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_HorseDefault_C* UCS_HorseDefault_C::GetDefaultObj()
{
	static class UCS_HorseDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_HorseDefault_C*>(UCS_HorseDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}



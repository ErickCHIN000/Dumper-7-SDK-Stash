#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_HorseDefaultEx.CS_HorseDefaultEx_C
// (None)

class UClass* UCS_HorseDefaultEx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_HorseDefaultEx_C");

	return Clss;
}


// CS_HorseDefaultEx_C CS_HorseDefaultEx.Default__CS_HorseDefaultEx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_HorseDefaultEx_C* UCS_HorseDefaultEx_C::GetDefaultObj()
{
	static class UCS_HorseDefaultEx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_HorseDefaultEx_C*>(UCS_HorseDefaultEx_C::StaticClass()->DefaultObject);

	return Default;
}

}



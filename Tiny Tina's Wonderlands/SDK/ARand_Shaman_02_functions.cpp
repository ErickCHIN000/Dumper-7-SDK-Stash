#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Shaman_02.ARand_Shaman_02_C
// (None)

class UClass* UARand_Shaman_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Shaman_02_C");

	return Clss;
}


// ARand_Shaman_02_C ARand_Shaman_02.Default__ARand_Shaman_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Shaman_02_C* UARand_Shaman_02_C::GetDefaultObj()
{
	static class UARand_Shaman_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Shaman_02_C*>(UARand_Shaman_02_C::StaticClass()->DefaultObject);

	return Default;
}

}



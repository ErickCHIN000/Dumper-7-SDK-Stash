#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Rogue_FromTheShadows_Start.ARand_Rogue_FromTheShadows_Start_C
// (None)

class UClass* UARand_Rogue_FromTheShadows_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Rogue_FromTheShadows_Start_C");

	return Clss;
}


// ARand_Rogue_FromTheShadows_Start_C ARand_Rogue_FromTheShadows_Start.Default__ARand_Rogue_FromTheShadows_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Rogue_FromTheShadows_Start_C* UARand_Rogue_FromTheShadows_Start_C::GetDefaultObj()
{
	static class UARand_Rogue_FromTheShadows_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Rogue_FromTheShadows_Start_C*>(UARand_Rogue_FromTheShadows_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}



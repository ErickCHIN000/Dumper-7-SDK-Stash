#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_PlayerMeleeData.BPClass_PlayerMeleeData_C
// (None)

class UClass* UBPClass_PlayerMeleeData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_PlayerMeleeData_C");

	return Clss;
}


// BPClass_PlayerMeleeData_C BPClass_PlayerMeleeData.Default__BPClass_PlayerMeleeData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPClass_PlayerMeleeData_C* UBPClass_PlayerMeleeData_C::GetDefaultObj()
{
	static class UBPClass_PlayerMeleeData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPClass_PlayerMeleeData_C*>(UBPClass_PlayerMeleeData_C::StaticClass()->DefaultObject);

	return Default;
}

}



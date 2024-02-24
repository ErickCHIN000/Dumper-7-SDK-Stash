#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMilky_Breeder.AmberMilky_Breeder_C
// (None)

class UClass* UAmberMilky_Breeder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMilky_Breeder_C");

	return Clss;
}


// AmberMilky_Breeder_C AmberMilky_Breeder.Default__AmberMilky_Breeder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMilky_Breeder_C* UAmberMilky_Breeder_C::GetDefaultObj()
{
	static class UAmberMilky_Breeder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMilky_Breeder_C*>(UAmberMilky_Breeder_C::StaticClass()->DefaultObject);

	return Default;
}

}



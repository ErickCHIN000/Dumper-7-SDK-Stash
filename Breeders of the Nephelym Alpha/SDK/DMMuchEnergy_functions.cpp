#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMMuchEnergy.DMMuchEnergy_C
// (None)

class UClass* UDMMuchEnergy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMMuchEnergy_C");

	return Clss;
}


// DMMuchEnergy_C DMMuchEnergy.Default__DMMuchEnergy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMMuchEnergy_C* UDMMuchEnergy_C::GetDefaultObj()
{
	static class UDMMuchEnergy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMMuchEnergy_C*>(UDMMuchEnergy_C::StaticClass()->DefaultObject);

	return Default;
}

}



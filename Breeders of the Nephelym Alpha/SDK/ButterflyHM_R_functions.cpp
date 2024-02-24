#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHM_R.ButterflyHM_R_C
// (None)

class UClass* UButterflyHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHM_R_C");

	return Clss;
}


// ButterflyHM_R_C ButterflyHM_R.Default__ButterflyHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHM_R_C* UButterflyHM_R_C::GetDefaultObj()
{
	static class UButterflyHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHM_R_C*>(UButterflyHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



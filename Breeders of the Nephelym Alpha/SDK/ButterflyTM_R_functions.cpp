#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTM_R.ButterflyTM_R_C
// (None)

class UClass* UButterflyTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTM_R_C");

	return Clss;
}


// ButterflyTM_R_C ButterflyTM_R.Default__ButterflyTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTM_R_C* UButterflyTM_R_C::GetDefaultObj()
{
	static class UButterflyTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTM_R_C*>(UButterflyTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



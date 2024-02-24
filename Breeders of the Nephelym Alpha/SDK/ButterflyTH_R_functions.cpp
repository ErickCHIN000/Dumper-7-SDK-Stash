#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTH_R.ButterflyTH_R_C
// (None)

class UClass* UButterflyTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTH_R_C");

	return Clss;
}


// ButterflyTH_R_C ButterflyTH_R.Default__ButterflyTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTH_R_C* UButterflyTH_R_C::GetDefaultObj()
{
	static class UButterflyTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTH_R_C*>(UButterflyTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



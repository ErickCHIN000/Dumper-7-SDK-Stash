#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTL_R.ButterflyTL_R_C
// (None)

class UClass* UButterflyTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTL_R_C");

	return Clss;
}


// ButterflyTL_R_C ButterflyTL_R.Default__ButterflyTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTL_R_C* UButterflyTL_R_C::GetDefaultObj()
{
	static class UButterflyTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTL_R_C*>(UButterflyTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



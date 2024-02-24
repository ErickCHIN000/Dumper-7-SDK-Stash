#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNH_R.ButterflyNH_R_C
// (None)

class UClass* UButterflyNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNH_R_C");

	return Clss;
}


// ButterflyNH_R_C ButterflyNH_R.Default__ButterflyNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNH_R_C* UButterflyNH_R_C::GetDefaultObj()
{
	static class UButterflyNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNH_R_C*>(UButterflyNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



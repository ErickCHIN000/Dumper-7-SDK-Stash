#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMH_R.ButterflyMH_R_C
// (None)

class UClass* UButterflyMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMH_R_C");

	return Clss;
}


// ButterflyMH_R_C ButterflyMH_R.Default__ButterflyMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMH_R_C* UButterflyMH_R_C::GetDefaultObj()
{
	static class UButterflyMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMH_R_C*>(UButterflyMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



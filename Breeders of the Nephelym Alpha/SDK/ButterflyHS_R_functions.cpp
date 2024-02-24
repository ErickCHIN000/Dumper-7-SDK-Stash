#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHS_R.ButterflyHS_R_C
// (None)

class UClass* UButterflyHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHS_R_C");

	return Clss;
}


// ButterflyHS_R_C ButterflyHS_R.Default__ButterflyHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHS_R_C* UButterflyHS_R_C::GetDefaultObj()
{
	static class UButterflyHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHS_R_C*>(UButterflyHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



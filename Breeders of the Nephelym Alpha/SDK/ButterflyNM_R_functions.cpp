#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNM_R.ButterflyNM_R_C
// (None)

class UClass* UButterflyNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNM_R_C");

	return Clss;
}


// ButterflyNM_R_C ButterflyNM_R.Default__ButterflyNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNM_R_C* UButterflyNM_R_C::GetDefaultObj()
{
	static class UButterflyNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNM_R_C*>(UButterflyNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



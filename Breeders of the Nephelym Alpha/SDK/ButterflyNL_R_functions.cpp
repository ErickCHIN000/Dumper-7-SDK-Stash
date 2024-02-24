#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNL_R.ButterflyNL_R_C
// (None)

class UClass* UButterflyNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNL_R_C");

	return Clss;
}


// ButterflyNL_R_C ButterflyNL_R.Default__ButterflyNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNL_R_C* UButterflyNL_R_C::GetDefaultObj()
{
	static class UButterflyNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNL_R_C*>(UButterflyNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



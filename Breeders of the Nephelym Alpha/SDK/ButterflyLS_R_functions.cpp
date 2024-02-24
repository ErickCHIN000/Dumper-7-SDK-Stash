#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLS_R.ButterflyLS_R_C
// (None)

class UClass* UButterflyLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLS_R_C");

	return Clss;
}


// ButterflyLS_R_C ButterflyLS_R.Default__ButterflyLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLS_R_C* UButterflyLS_R_C::GetDefaultObj()
{
	static class UButterflyLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLS_R_C*>(UButterflyLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



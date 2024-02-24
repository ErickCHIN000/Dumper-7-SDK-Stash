#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTS_R.ButterflyTS_R_C
// (None)

class UClass* UButterflyTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTS_R_C");

	return Clss;
}


// ButterflyTS_R_C ButterflyTS_R.Default__ButterflyTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTS_R_C* UButterflyTS_R_C::GetDefaultObj()
{
	static class UButterflyTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTS_R_C*>(UButterflyTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



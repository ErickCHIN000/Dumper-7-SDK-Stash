#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMT_R.ButterflyMT_R_C
// (None)

class UClass* UButterflyMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMT_R_C");

	return Clss;
}


// ButterflyMT_R_C ButterflyMT_R.Default__ButterflyMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMT_R_C* UButterflyMT_R_C::GetDefaultObj()
{
	static class UButterflyMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMT_R_C*>(UButterflyMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNT_R.ButterflyNT_R_C
// (None)

class UClass* UButterflyNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNT_R_C");

	return Clss;
}


// ButterflyNT_R_C ButterflyNT_R.Default__ButterflyNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNT_R_C* UButterflyNT_R_C::GetDefaultObj()
{
	static class UButterflyNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNT_R_C*>(UButterflyNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



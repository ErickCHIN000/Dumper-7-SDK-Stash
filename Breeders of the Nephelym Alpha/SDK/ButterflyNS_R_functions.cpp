#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNS_R.ButterflyNS_R_C
// (None)

class UClass* UButterflyNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNS_R_C");

	return Clss;
}


// ButterflyNS_R_C ButterflyNS_R.Default__ButterflyNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNS_R_C* UButterflyNS_R_C::GetDefaultObj()
{
	static class UButterflyNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNS_R_C*>(UButterflyNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



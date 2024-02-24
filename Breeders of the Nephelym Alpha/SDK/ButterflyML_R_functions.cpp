#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyML_R.ButterflyML_R_C
// (None)

class UClass* UButterflyML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyML_R_C");

	return Clss;
}


// ButterflyML_R_C ButterflyML_R.Default__ButterflyML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyML_R_C* UButterflyML_R_C::GetDefaultObj()
{
	static class UButterflyML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyML_R_C*>(UButterflyML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



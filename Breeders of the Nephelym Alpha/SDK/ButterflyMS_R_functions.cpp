#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMS_R.ButterflyMS_R_C
// (None)

class UClass* UButterflyMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMS_R_C");

	return Clss;
}


// ButterflyMS_R_C ButterflyMS_R.Default__ButterflyMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMS_R_C* UButterflyMS_R_C::GetDefaultObj()
{
	static class UButterflyMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMS_R_C*>(UButterflyMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}



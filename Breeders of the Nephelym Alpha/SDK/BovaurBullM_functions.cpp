#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurBullM.BovaurBullM_C
// (None)

class UClass* UBovaurBullM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurBullM_C");

	return Clss;
}


// BovaurBullM_C BovaurBullM.Default__BovaurBullM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurBullM_C* UBovaurBullM_C::GetDefaultObj()
{
	static class UBovaurBullM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurBullM_C*>(UBovaurBullM_C::StaticClass()->DefaultObject);

	return Default;
}

}



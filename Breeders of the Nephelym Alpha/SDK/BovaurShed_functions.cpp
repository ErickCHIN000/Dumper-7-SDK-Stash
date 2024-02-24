#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurShed.BovaurShed_C
// (None)

class UClass* UBovaurShed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurShed_C");

	return Clss;
}


// BovaurShed_C BovaurShed.Default__BovaurShed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurShed_C* UBovaurShed_C::GetDefaultObj()
{
	static class UBovaurShed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurShed_C*>(UBovaurShed_C::StaticClass()->DefaultObject);

	return Default;
}

}



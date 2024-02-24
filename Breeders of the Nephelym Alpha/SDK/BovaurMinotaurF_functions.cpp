#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurMinotaurF.BovaurMinotaurF_C
// (None)

class UClass* UBovaurMinotaurF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurMinotaurF_C");

	return Clss;
}


// BovaurMinotaurF_C BovaurMinotaurF.Default__BovaurMinotaurF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurMinotaurF_C* UBovaurMinotaurF_C::GetDefaultObj()
{
	static class UBovaurMinotaurF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurMinotaurF_C*>(UBovaurMinotaurF_C::StaticClass()->DefaultObject);

	return Default;
}

}



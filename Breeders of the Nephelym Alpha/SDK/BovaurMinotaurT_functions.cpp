#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BovaurMinotaurT.BovaurMinotaurT_C
// (None)

class UClass* UBovaurMinotaurT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BovaurMinotaurT_C");

	return Clss;
}


// BovaurMinotaurT_C BovaurMinotaurT.Default__BovaurMinotaurT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaurMinotaurT_C* UBovaurMinotaurT_C::GetDefaultObj()
{
	static class UBovaurMinotaurT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaurMinotaurT_C*>(UBovaurMinotaurT_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewLight_ThrowItem.NewLight_ThrowItem_C
// (Actor)

class UClass* ANewLight_ThrowItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewLight_ThrowItem_C");

	return Clss;
}


// NewLight_ThrowItem_C NewLight_ThrowItem.Default__NewLight_ThrowItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewLight_ThrowItem_C* ANewLight_ThrowItem_C::GetDefaultObj()
{
	static class ANewLight_ThrowItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewLight_ThrowItem_C*>(ANewLight_ThrowItem_C::StaticClass()->DefaultObject);

	return Default;
}

}



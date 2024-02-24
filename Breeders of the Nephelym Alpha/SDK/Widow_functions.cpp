#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Widow.Widow_C
// (Actor, Pawn)

class UClass* AWidow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Widow_C");

	return Clss;
}


// Widow_C Widow.Default__Widow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWidow_C* AWidow_C::GetDefaultObj()
{
	static class AWidow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWidow_C*>(AWidow_C::StaticClass()->DefaultObject);

	return Default;
}

}



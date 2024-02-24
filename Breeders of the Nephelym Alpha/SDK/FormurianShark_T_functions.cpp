#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FormurianShark_T.FormurianShark_T_C
// (None)

class UClass* UFormurianShark_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FormurianShark_T_C");

	return Clss;
}


// FormurianShark_T_C FormurianShark_T.Default__FormurianShark_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFormurianShark_T_C* UFormurianShark_T_C::GetDefaultObj()
{
	static class UFormurianShark_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFormurianShark_T_C*>(UFormurianShark_T_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FormurianShark_F.FormurianShark_F_C
// (None)

class UClass* UFormurianShark_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FormurianShark_F_C");

	return Clss;
}


// FormurianShark_F_C FormurianShark_F.Default__FormurianShark_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFormurianShark_F_C* UFormurianShark_F_C::GetDefaultObj()
{
	static class UFormurianShark_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFormurianShark_F_C*>(UFormurianShark_F_C::StaticClass()->DefaultObject);

	return Default;
}

}



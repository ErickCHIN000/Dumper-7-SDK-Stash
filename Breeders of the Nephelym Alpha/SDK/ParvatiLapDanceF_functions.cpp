#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiLapDanceF.ParvatiLapDanceF_C
// (None)

class UClass* UParvatiLapDanceF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiLapDanceF_C");

	return Clss;
}


// ParvatiLapDanceF_C ParvatiLapDanceF.Default__ParvatiLapDanceF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiLapDanceF_C* UParvatiLapDanceF_C::GetDefaultObj()
{
	static class UParvatiLapDanceF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiLapDanceF_C*>(UParvatiLapDanceF_C::StaticClass()->DefaultObject);

	return Default;
}

}



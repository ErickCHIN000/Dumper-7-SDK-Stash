#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchStartShySexF.MonarchStartShySexF_C
// (None)

class UClass* UMonarchStartShySexF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchStartShySexF_C");

	return Clss;
}


// MonarchStartShySexF_C MonarchStartShySexF.Default__MonarchStartShySexF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchStartShySexF_C* UMonarchStartShySexF_C::GetDefaultObj()
{
	static class UMonarchStartShySexF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchStartShySexF_C*>(UMonarchStartShySexF_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Tired_SetByCaller.GE_Tired_SetByCaller_C
// (None)

class UClass* UGE_Tired_SetByCaller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Tired_SetByCaller_C");

	return Clss;
}


// GE_Tired_SetByCaller_C GE_Tired_SetByCaller.Default__GE_Tired_SetByCaller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Tired_SetByCaller_C* UGE_Tired_SetByCaller_C::GetDefaultObj()
{
	static class UGE_Tired_SetByCaller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Tired_SetByCaller_C*>(UGE_Tired_SetByCaller_C::StaticClass()->DefaultObject);

	return Default;
}

}



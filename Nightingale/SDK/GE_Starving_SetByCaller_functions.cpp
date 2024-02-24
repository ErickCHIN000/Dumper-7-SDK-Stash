#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Starving_SetByCaller.GE_Starving_SetByCaller_C
// (None)

class UClass* UGE_Starving_SetByCaller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Starving_SetByCaller_C");

	return Clss;
}


// GE_Starving_SetByCaller_C GE_Starving_SetByCaller.Default__GE_Starving_SetByCaller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Starving_SetByCaller_C* UGE_Starving_SetByCaller_C::GetDefaultObj()
{
	static class UGE_Starving_SetByCaller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Starving_SetByCaller_C*>(UGE_Starving_SetByCaller_C::StaticClass()->DefaultObject);

	return Default;
}

}



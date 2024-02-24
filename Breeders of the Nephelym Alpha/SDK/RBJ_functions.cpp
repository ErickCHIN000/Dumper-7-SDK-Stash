#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RBJ.RBJ_C
// (None)

class UClass* URBJ_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RBJ_C");

	return Clss;
}


// RBJ_C RBJ.Default__RBJ_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URBJ_C* URBJ_C::GetDefaultObj()
{
	static class URBJ_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URBJ_C*>(URBJ_C::StaticClass()->DefaultObject);

	return Default;
}

}



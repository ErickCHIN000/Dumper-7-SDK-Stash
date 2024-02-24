#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vector.BP_Vector_C
// (Actor)

class UClass* ABP_Vector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vector_C");

	return Clss;
}


// BP_Vector_C BP_Vector.Default__BP_Vector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vector_C* ABP_Vector_C::GetDefaultObj()
{
	static class ABP_Vector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vector_C*>(ABP_Vector_C::StaticClass()->DefaultObject);

	return Default;
}

}



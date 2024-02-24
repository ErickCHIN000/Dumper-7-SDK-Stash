#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainThrowableClass.BP_MainThrowableClass_C
// (Actor)

class UClass* ABP_MainThrowableClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainThrowableClass_C");

	return Clss;
}


// BP_MainThrowableClass_C BP_MainThrowableClass.Default__BP_MainThrowableClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainThrowableClass_C* ABP_MainThrowableClass_C::GetDefaultObj()
{
	static class ABP_MainThrowableClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainThrowableClass_C*>(ABP_MainThrowableClass_C::StaticClass()->DefaultObject);

	return Default;
}

}



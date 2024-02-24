#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Drenched.GE_Drenched_C
// (None)

class UClass* UGE_Drenched_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Drenched_C");

	return Clss;
}


// GE_Drenched_C GE_Drenched.Default__GE_Drenched_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Drenched_C* UGE_Drenched_C::GetDefaultObj()
{
	static class UGE_Drenched_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Drenched_C*>(UGE_Drenched_C::StaticClass()->DefaultObject);

	return Default;
}

}



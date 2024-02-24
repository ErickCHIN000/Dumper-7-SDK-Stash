#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Hail.GE_Hail_C
// (None)

class UClass* UGE_Hail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Hail_C");

	return Clss;
}


// GE_Hail_C GE_Hail.Default__GE_Hail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Hail_C* UGE_Hail_C::GetDefaultObj()
{
	static class UGE_Hail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Hail_C*>(UGE_Hail_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Extinguish.GE_Extinguish_C
// (None)

class UClass* UGE_Extinguish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Extinguish_C");

	return Clss;
}


// GE_Extinguish_C GE_Extinguish.Default__GE_Extinguish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Extinguish_C* UGE_Extinguish_C::GetDefaultObj()
{
	static class UGE_Extinguish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Extinguish_C*>(UGE_Extinguish_C::StaticClass()->DefaultObject);

	return Default;
}

}



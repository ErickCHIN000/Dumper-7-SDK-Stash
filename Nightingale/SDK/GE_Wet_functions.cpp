#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Wet.GE_Wet_C
// (None)

class UClass* UGE_Wet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Wet_C");

	return Clss;
}


// GE_Wet_C GE_Wet.Default__GE_Wet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Wet_C* UGE_Wet_C::GetDefaultObj()
{
	static class UGE_Wet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Wet_C*>(UGE_Wet_C::StaticClass()->DefaultObject);

	return Default;
}

}



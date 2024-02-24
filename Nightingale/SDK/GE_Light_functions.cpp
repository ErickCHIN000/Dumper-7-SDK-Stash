#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Light.GE_Light_C
// (None)

class UClass* UGE_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Light_C");

	return Clss;
}


// GE_Light_C GE_Light.Default__GE_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Light_C* UGE_Light_C::GetDefaultObj()
{
	static class UGE_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Light_C*>(UGE_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}



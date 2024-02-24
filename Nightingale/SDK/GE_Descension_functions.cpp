#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Descension.GE_Descension_C
// (None)

class UClass* UGE_Descension_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Descension_C");

	return Clss;
}


// GE_Descension_C GE_Descension.Default__GE_Descension_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Descension_C* UGE_Descension_C::GetDefaultObj()
{
	static class UGE_Descension_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Descension_C*>(UGE_Descension_C::StaticClass()->DefaultObject);

	return Default;
}

}



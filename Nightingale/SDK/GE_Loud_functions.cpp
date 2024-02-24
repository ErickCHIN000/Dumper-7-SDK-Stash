#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Loud.GE_Loud_C
// (None)

class UClass* UGE_Loud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Loud_C");

	return Clss;
}


// GE_Loud_C GE_Loud.Default__GE_Loud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Loud_C* UGE_Loud_C::GetDefaultObj()
{
	static class UGE_Loud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Loud_C*>(UGE_Loud_C::StaticClass()->DefaultObject);

	return Default;
}

}



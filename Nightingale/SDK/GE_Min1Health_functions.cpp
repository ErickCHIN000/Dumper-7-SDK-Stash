#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Min1Health.GE_Min1Health_C
// (None)

class UClass* UGE_Min1Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Min1Health_C");

	return Clss;
}


// GE_Min1Health_C GE_Min1Health.Default__GE_Min1Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Min1Health_C* UGE_Min1Health_C::GetDefaultObj()
{
	static class UGE_Min1Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Min1Health_C*>(UGE_Min1Health_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LoadoutLevel.GE_LoadoutLevel_C
// (None)

class UClass* UGE_LoadoutLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LoadoutLevel_C");

	return Clss;
}


// GE_LoadoutLevel_C GE_LoadoutLevel.Default__GE_LoadoutLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LoadoutLevel_C* UGE_LoadoutLevel_C::GetDefaultObj()
{
	static class UGE_LoadoutLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LoadoutLevel_C*>(UGE_LoadoutLevel_C::StaticClass()->DefaultObject);

	return Default;
}

}



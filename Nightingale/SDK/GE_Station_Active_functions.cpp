#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Station_Active.GE_Station_Active_C
// (None)

class UClass* UGE_Station_Active_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Station_Active_C");

	return Clss;
}


// GE_Station_Active_C GE_Station_Active.Default__GE_Station_Active_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Station_Active_C* UGE_Station_Active_C::GetDefaultObj()
{
	static class UGE_Station_Active_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Station_Active_C*>(UGE_Station_Active_C::StaticClass()->DefaultObject);

	return Default;
}

}



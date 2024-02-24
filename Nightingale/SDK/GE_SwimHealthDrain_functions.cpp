#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SwimHealthDrain.GE_SwimHealthDrain_C
// (None)

class UClass* UGE_SwimHealthDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SwimHealthDrain_C");

	return Clss;
}


// GE_SwimHealthDrain_C GE_SwimHealthDrain.Default__GE_SwimHealthDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SwimHealthDrain_C* UGE_SwimHealthDrain_C::GetDefaultObj()
{
	static class UGE_SwimHealthDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SwimHealthDrain_C*>(UGE_SwimHealthDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



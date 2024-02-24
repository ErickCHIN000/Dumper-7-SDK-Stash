#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FedDrain.GE_FedDrain_C
// (None)

class UClass* UGE_FedDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FedDrain_C");

	return Clss;
}


// GE_FedDrain_C GE_FedDrain.Default__GE_FedDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FedDrain_C* UGE_FedDrain_C::GetDefaultObj()
{
	static class UGE_FedDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FedDrain_C*>(UGE_FedDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



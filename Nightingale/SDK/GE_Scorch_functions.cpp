#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Scorch.GE_Scorch_C
// (None)

class UClass* UGE_Scorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Scorch_C");

	return Clss;
}


// GE_Scorch_C GE_Scorch.Default__GE_Scorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Scorch_C* UGE_Scorch_C::GetDefaultObj()
{
	static class UGE_Scorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Scorch_C*>(UGE_Scorch_C::StaticClass()->DefaultObject);

	return Default;
}

}



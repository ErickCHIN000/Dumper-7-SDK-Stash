#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Incorporeal.GE_Incorporeal_C
// (None)

class UClass* UGE_Incorporeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Incorporeal_C");

	return Clss;
}


// GE_Incorporeal_C GE_Incorporeal.Default__GE_Incorporeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Incorporeal_C* UGE_Incorporeal_C::GetDefaultObj()
{
	static class UGE_Incorporeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Incorporeal_C*>(UGE_Incorporeal_C::StaticClass()->DefaultObject);

	return Default;
}

}



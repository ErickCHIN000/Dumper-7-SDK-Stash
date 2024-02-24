#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RestedBuff.GE_RestedBuff_C
// (None)

class UClass* UGE_RestedBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RestedBuff_C");

	return Clss;
}


// GE_RestedBuff_C GE_RestedBuff.Default__GE_RestedBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RestedBuff_C* UGE_RestedBuff_C::GetDefaultObj()
{
	static class UGE_RestedBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RestedBuff_C*>(UGE_RestedBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}



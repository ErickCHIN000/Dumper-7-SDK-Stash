#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiLickF.FesssiLickF_C
// (None)

class UClass* UFesssiLickF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiLickF_C");

	return Clss;
}


// FesssiLickF_C FesssiLickF.Default__FesssiLickF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiLickF_C* UFesssiLickF_C::GetDefaultObj()
{
	static class UFesssiLickF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiLickF_C*>(UFesssiLickF_C::StaticClass()->DefaultObject);

	return Default;
}

}



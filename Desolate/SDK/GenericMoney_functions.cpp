#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericMoney.GenericMoney_C
// (Actor)

class UClass* AGenericMoney_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericMoney_C");

	return Clss;
}


// GenericMoney_C GenericMoney.Default__GenericMoney_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericMoney_C* AGenericMoney_C::GetDefaultObj()
{
	static class AGenericMoney_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericMoney_C*>(AGenericMoney_C::StaticClass()->DefaultObject);

	return Default;
}

}



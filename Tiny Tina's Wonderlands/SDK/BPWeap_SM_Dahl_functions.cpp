#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SM_Dahl.BPWeap_SM_Dahl_C
// (Actor)

class UClass* ABPWeap_SM_Dahl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SM_Dahl_C");

	return Clss;
}


// BPWeap_SM_Dahl_C BPWeap_SM_Dahl.Default__BPWeap_SM_Dahl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SM_Dahl_C* ABPWeap_SM_Dahl_C::GetDefaultObj()
{
	static class ABPWeap_SM_Dahl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SM_Dahl_C*>(ABPWeap_SM_Dahl_C::StaticClass()->DefaultObject);

	return Default;
}

}



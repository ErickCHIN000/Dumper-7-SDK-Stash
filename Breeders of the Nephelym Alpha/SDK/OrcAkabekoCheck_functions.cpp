#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcAkabekoCheck.OrcAkabekoCheck_C
// (None)

class UClass* UOrcAkabekoCheck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcAkabekoCheck_C");

	return Clss;
}


// OrcAkabekoCheck_C OrcAkabekoCheck.Default__OrcAkabekoCheck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcAkabekoCheck_C* UOrcAkabekoCheck_C::GetDefaultObj()
{
	static class UOrcAkabekoCheck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcAkabekoCheck_C*>(UOrcAkabekoCheck_C::StaticClass()->DefaultObject);

	return Default;
}

}



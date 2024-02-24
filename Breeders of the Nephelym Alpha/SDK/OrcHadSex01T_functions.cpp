#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcHadSex01T.OrcHadSex01T_C
// (None)

class UClass* UOrcHadSex01T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcHadSex01T_C");

	return Clss;
}


// OrcHadSex01T_C OrcHadSex01T.Default__OrcHadSex01T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcHadSex01T_C* UOrcHadSex01T_C::GetDefaultObj()
{
	static class UOrcHadSex01T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcHadSex01T_C*>(UOrcHadSex01T_C::StaticClass()->DefaultObject);

	return Default;
}

}



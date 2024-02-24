#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trade_MikhailBasic.LL_Trade_MikhailBasic_C
// (Actor)

class UClass* ALL_Trade_MikhailBasic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trade_MikhailBasic_C");

	return Clss;
}


// LL_Trade_MikhailBasic_C LL_Trade_MikhailBasic.Default__LL_Trade_MikhailBasic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trade_MikhailBasic_C* ALL_Trade_MikhailBasic_C::GetDefaultObj()
{
	static class ALL_Trade_MikhailBasic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trade_MikhailBasic_C*>(ALL_Trade_MikhailBasic_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryAngelGroinLove_BreederT.EmissaryAngelGroinLove_BreederT_C
// (None)

class UClass* UEmissaryAngelGroinLove_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryAngelGroinLove_BreederT_C");

	return Clss;
}


// EmissaryAngelGroinLove_BreederT_C EmissaryAngelGroinLove_BreederT.Default__EmissaryAngelGroinLove_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryAngelGroinLove_BreederT_C* UEmissaryAngelGroinLove_BreederT_C::GetDefaultObj()
{
	static class UEmissaryAngelGroinLove_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryAngelGroinLove_BreederT_C*>(UEmissaryAngelGroinLove_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}



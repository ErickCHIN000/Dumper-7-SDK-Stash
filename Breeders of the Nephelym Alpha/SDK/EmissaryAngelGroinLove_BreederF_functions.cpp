#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryAngelGroinLove_BreederF.EmissaryAngelGroinLove_BreederF_C
// (None)

class UClass* UEmissaryAngelGroinLove_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryAngelGroinLove_BreederF_C");

	return Clss;
}


// EmissaryAngelGroinLove_BreederF_C EmissaryAngelGroinLove_BreederF.Default__EmissaryAngelGroinLove_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryAngelGroinLove_BreederF_C* UEmissaryAngelGroinLove_BreederF_C::GetDefaultObj()
{
	static class UEmissaryAngelGroinLove_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryAngelGroinLove_BreederF_C*>(UEmissaryAngelGroinLove_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}



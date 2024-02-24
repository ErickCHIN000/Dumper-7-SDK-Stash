#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryAngelGroinLove.EmissaryAngelGroinLove_C
// (None)

class UClass* UEmissaryAngelGroinLove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryAngelGroinLove_C");

	return Clss;
}


// EmissaryAngelGroinLove_C EmissaryAngelGroinLove.Default__EmissaryAngelGroinLove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryAngelGroinLove_C* UEmissaryAngelGroinLove_C::GetDefaultObj()
{
	static class UEmissaryAngelGroinLove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryAngelGroinLove_C*>(UEmissaryAngelGroinLove_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_WhatGoddessDoes.EmissaryDefault01_WhatGoddessDoes_C
// (None)

class UClass* UEmissaryDefault01_WhatGoddessDoes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_WhatGoddessDoes_C");

	return Clss;
}


// EmissaryDefault01_WhatGoddessDoes_C EmissaryDefault01_WhatGoddessDoes.Default__EmissaryDefault01_WhatGoddessDoes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_WhatGoddessDoes_C* UEmissaryDefault01_WhatGoddessDoes_C::GetDefaultObj()
{
	static class UEmissaryDefault01_WhatGoddessDoes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_WhatGoddessDoes_C*>(UEmissaryDefault01_WhatGoddessDoes_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CassieDefault01_WhatCanBuild.CassieDefault01_WhatCanBuild_C
// (None)

class UClass* UCassieDefault01_WhatCanBuild_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CassieDefault01_WhatCanBuild_C");

	return Clss;
}


// CassieDefault01_WhatCanBuild_C CassieDefault01_WhatCanBuild.Default__CassieDefault01_WhatCanBuild_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCassieDefault01_WhatCanBuild_C* UCassieDefault01_WhatCanBuild_C::GetDefaultObj()
{
	static class UCassieDefault01_WhatCanBuild_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCassieDefault01_WhatCanBuild_C*>(UCassieDefault01_WhatCanBuild_C::StaticClass()->DefaultObject);

	return Default;
}

}



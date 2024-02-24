#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaDungeon_RL.LeylannaDungeon_RL_C
// (None)

class UClass* ULeylannaDungeon_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaDungeon_RL_C");

	return Clss;
}


// LeylannaDungeon_RL_C LeylannaDungeon_RL.Default__LeylannaDungeon_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaDungeon_RL_C* ULeylannaDungeon_RL_C::GetDefaultObj()
{
	static class ULeylannaDungeon_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaDungeon_RL_C*>(ULeylannaDungeon_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TarnishedSeal_Anchor_PosedStaticMesh_Blueprint.TarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C
// (Actor)

class UClass* ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C");

	return Clss;
}


// TarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C TarnishedSeal_Anchor_PosedStaticMesh_Blueprint.Default__TarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C* ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C::GetDefaultObj()
{
	static class ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C*>(ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}



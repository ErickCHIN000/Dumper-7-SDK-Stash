#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StructureComposite_PieceAdded.GE_StructureComposite_PieceAdded_C
// (None)

class UClass* UGE_StructureComposite_PieceAdded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StructureComposite_PieceAdded_C");

	return Clss;
}


// GE_StructureComposite_PieceAdded_C GE_StructureComposite_PieceAdded.Default__GE_StructureComposite_PieceAdded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StructureComposite_PieceAdded_C* UGE_StructureComposite_PieceAdded_C::GetDefaultObj()
{
	static class UGE_StructureComposite_PieceAdded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StructureComposite_PieceAdded_C*>(UGE_StructureComposite_PieceAdded_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StructureOcclusion.StructureOcclusionProvider
// (None)

class UClass* IStructureOcclusionProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureOcclusionProvider");

	return Clss;
}


// StructureOcclusionProvider StructureOcclusion.Default__StructureOcclusionProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IStructureOcclusionProvider* IStructureOcclusionProvider::GetDefaultObj()
{
	static class IStructureOcclusionProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IStructureOcclusionProvider*>(IStructureOcclusionProvider::StaticClass()->DefaultObject);

	return Default;
}

}



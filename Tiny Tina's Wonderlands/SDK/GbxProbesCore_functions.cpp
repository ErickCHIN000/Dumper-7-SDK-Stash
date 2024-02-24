#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxProbesCore.GbxProbeInterface
// (None)

class UClass* IGbxProbeInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxProbeInterface");

	return Clss;
}


// GbxProbeInterface GbxProbesCore.Default__GbxProbeInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGbxProbeInterface* IGbxProbeInterface::GetDefaultObj()
{
	static class IGbxProbeInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGbxProbeInterface*>(IGbxProbeInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGbxProbeId                 OutId                                                            (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGbxProbeInterface::GetGbxProbeId(struct FGbxProbeId* OutId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbeInterface", "GetGbxProbeId");

	Params::IGbxProbeInterface_GetGbxProbeId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutId != nullptr)
		*OutId = std::move(Parms.OutId);

}

}



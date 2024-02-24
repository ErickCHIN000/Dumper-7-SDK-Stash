#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicNodeRuntime.MagicNode
// (None)

class UClass* UMagicNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicNode");

	return Clss;
}


// MagicNode MagicNodeRuntime.Default__MagicNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicNode* UMagicNode::GetDefaultObj()
{
	static class UMagicNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicNode*>(UMagicNode::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicNodeRuntime.MagicNode.Finish
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMagicNode::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicNode", "Finish");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MagicNodeRuntime.MagicNodeScript
// (None)

class UClass* UMagicNodeScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicNodeScript");

	return Clss;
}


// MagicNodeScript MagicNodeRuntime.Default__MagicNodeScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicNodeScript* UMagicNodeScript::GetDefaultObj()
{
	static class UMagicNodeScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicNodeScript*>(UMagicNodeScript::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicNodeRuntime.MGC_Settings
// (None)

class UClass* UMGC_Settings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MGC_Settings");

	return Clss;
}


// MGC_Settings MagicNodeRuntime.Default__MGC_Settings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMGC_Settings* UMGC_Settings::GetDefaultObj()
{
	static class UMGC_Settings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMGC_Settings*>(UMGC_Settings::StaticClass()->DefaultObject);

	return Default;
}

}



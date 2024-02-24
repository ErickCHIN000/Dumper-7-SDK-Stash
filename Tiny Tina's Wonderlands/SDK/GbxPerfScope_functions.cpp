#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxPerfScope.GbxPerfScopeOptions
// (None)

class UClass* UGbxPerfScopeOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxPerfScopeOptions");

	return Clss;
}


// GbxPerfScopeOptions GbxPerfScope.Default__GbxPerfScopeOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxPerfScopeOptions* UGbxPerfScopeOptions::GetDefaultObj()
{
	static class UGbxPerfScopeOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxPerfScopeOptions*>(UGbxPerfScopeOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxPerfScope.GbxPerfScopePerfSampleData
// (None)

class UClass* UGbxPerfScopePerfSampleData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxPerfScopePerfSampleData");

	return Clss;
}


// GbxPerfScopePerfSampleData GbxPerfScope.Default__GbxPerfScopePerfSampleData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxPerfScopePerfSampleData* UGbxPerfScopePerfSampleData::GetDefaultObj()
{
	static class UGbxPerfScopePerfSampleData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxPerfScopePerfSampleData*>(UGbxPerfScopePerfSampleData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSamples                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxPerfScopePerfSampleData::GetMapGPUHotspots(class UObject* WorldContext, int32 NumSamples, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxPerfScopePerfSampleData", "GetMapGPUHotspots");

	Params::UGbxPerfScopePerfSampleData_GetMapGPUHotspots_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.NumSamples = NumSamples;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



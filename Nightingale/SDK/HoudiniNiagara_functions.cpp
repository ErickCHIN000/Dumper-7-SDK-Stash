#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoudiniNiagara.HoudiniPointCache
// (None)

class UClass* UHoudiniPointCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoudiniPointCache");

	return Clss;
}


// HoudiniPointCache HoudiniNiagara.Default__HoudiniPointCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoudiniPointCache* UHoudiniPointCache::GetDefaultObj()
{
	static class UHoudiniPointCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoudiniPointCache*>(UHoudiniPointCache::StaticClass()->DefaultObject);

	return Default;
}


// Function HoudiniNiagara.HoudiniPointCache.SetUseCustomCSVTitleRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInUseCustomCSVTitleRow                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniPointCache::SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "SetUseCustomCSVTitleRow");

	Params::UHoudiniPointCache_SetUseCustomCSVTitleRow_Params Parms{};

	Parms.bInUseCustomCSVTitleRow = bInUseCustomCSVTitleRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HoudiniNiagara.HoudiniPointCache.GetVelocityValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetVelocityValue(int32& SampleIndex, struct FVector* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetVelocityValue");

	Params::UHoudiniPointCache_GetVelocityValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetVectorValueForString
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoSwap                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoScale                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetVectorValueForString(int32& SampleIndex, const class FString& Attribute, struct FVector* Value, bool& DoSwap, bool& DoScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetVectorValueForString");

	Params::UHoudiniPointCache_GetVectorValueForString_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.Attribute = Attribute;
	Parms.DoSwap = DoSwap;
	Parms.DoScale = DoScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetVectorValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttrIndex                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoSwap                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoScale                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetVectorValue(int32& SampleIndex, int32& AttrIndex, struct FVector* Value, bool& DoSwap, bool& DoScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetVectorValue");

	Params::UHoudiniPointCache_GetVectorValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.AttrIndex = AttrIndex;
	Parms.DoSwap = DoSwap;
	Parms.DoScale = DoScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetVector4ValueForString
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetVector4ValueForString(int32& SampleIndex, const class FString& Attribute, struct FVector4* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetVector4ValueForString");

	Params::UHoudiniPointCache_GetVector4ValueForString_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetVector4Value
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttrIndex                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetVector4Value(int32& SampleIndex, int32& AttrIndex, struct FVector4* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetVector4Value");

	Params::UHoudiniPointCache_GetVector4Value_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.AttrIndex = AttrIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetUseCustomCSVTitleRow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetUseCustomCSVTitleRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetUseCustomCSVTitleRow");

	Params::UHoudiniPointCache_GetUseCustomCSVTitleRow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetTimeValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetTimeValue(int32& SampleIndex, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetTimeValue");

	Params::UHoudiniPointCache_GetTimeValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetSpecialAttributeIndexes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<int32> UHoudiniPointCache::GetSpecialAttributeIndexes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetSpecialAttributeIndexes");

	Params::UHoudiniPointCache_GetSpecialAttributeIndexes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetSpawnTimes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UHoudiniPointCache::GetSpawnTimes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetSpawnTimes");

	Params::UHoudiniPointCache_GetSpawnTimes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetSampleIndexesForPointAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PrevSampleIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NextSampleIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PrevWeight                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetSampleIndexesForPointAtTime(int32& POINTID, float& DesiredTime, int32* PrevSampleIndex, int32* NextSampleIndex, float* PrevWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetSampleIndexesForPointAtTime");

	Params::UHoudiniPointCache_GetSampleIndexesForPointAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PrevSampleIndex != nullptr)
		*PrevSampleIndex = Parms.PrevSampleIndex;

	if (NextSampleIndex != nullptr)
		*NextSampleIndex = Parms.NextSampleIndex;

	if (PrevWeight != nullptr)
		*PrevWeight = Parms.PrevWeight;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetQuatValueForString
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Value                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoHoudiniToUnrealConversion                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetQuatValueForString(int32& SampleIndex, const class FString& Attribute, struct FQuat* Value, bool& DoHoudiniToUnrealConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetQuatValueForString");

	Params::UHoudiniPointCache_GetQuatValueForString_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.Attribute = Attribute;
	Parms.DoHoudiniToUnrealConversion = DoHoudiniToUnrealConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetQuatValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttrIndex                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Value                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoHoudiniToUnrealConversion                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetQuatValue(int32& SampleIndex, int32& AttrIndex, struct FQuat* Value, bool& DoHoudiniToUnrealConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetQuatValue");

	Params::UHoudiniPointCache_GetQuatValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.AttrIndex = AttrIndex;
	Parms.DoHoudiniToUnrealConversion = DoHoudiniToUnrealConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPositionValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPositionValue(int32& SampleIndex, struct FVector* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPositionValue");

	Params::UHoudiniPointCache_GetPositionValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTimeForString
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoSwap                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoScale                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointVectorValueAtTimeForString(int32 POINTID, const class FString& Attribute, float DesiredTime, struct FVector* Vector, bool DoSwap, bool DoScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointVectorValueAtTimeForString");

	Params::UHoudiniPointCache_GetPointVectorValueAtTimeForString_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.Attribute = Attribute;
	Parms.DesiredTime = DesiredTime;
	Parms.DoSwap = DoSwap;
	Parms.DoScale = DoScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointVectorValueAtTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoSwap                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoScale                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointVectorValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, struct FVector* Vector, bool DoSwap, bool DoScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointVectorValueAtTime");

	Params::UHoudiniPointCache_GetPointVectorValueAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.AttributeIndex = AttributeIndex;
	Parms.DesiredTime = DesiredTime;
	Parms.DoSwap = DoSwap;
	Parms.DoScale = DoScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTimeForString
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointVector4ValueAtTimeForString(int32 POINTID, const class FString& Attribute, float DesiredTime, struct FVector4* Vector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointVector4ValueAtTimeForString");

	Params::UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.Attribute = Attribute;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointVector4ValueAtTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointVector4ValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, struct FVector4* Vector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointVector4ValueAtTime");

	Params::UHoudiniPointCache_GetPointVector4ValueAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.AttributeIndex = AttributeIndex;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointValueIndexes
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FPointIndexes>       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FPointIndexes> UHoudiniPointCache::GetPointValueIndexes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointValueIndexes");

	Params::UHoudiniPointCache_GetPointValueIndexes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointValueAtTimeForString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointValueAtTimeForString(int32& POINTID, const class FString& Attribute, float& DesiredTime, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointValueAtTimeForString");

	Params::UHoudiniPointCache_GetPointValueAtTimeForString_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.Attribute = Attribute;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointValueAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointValueAtTime(int32& POINTID, int32& AttributeIndex, float& DesiredTime, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointValueAtTime");

	Params::UHoudiniPointCache_GetPointValueAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.AttributeIndex = AttributeIndex;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointTypes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<int32> UHoudiniPointCache::GetPointTypes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointTypes");

	Params::UHoudiniPointCache_GetPointTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointType(int32& POINTID, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointType");

	Params::UHoudiniPointCache_GetPointType_Params Parms{};

	Parms.POINTID = POINTID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTimeForString
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Quat                                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoHoudiniToUnrealConversion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointQuatValueAtTimeForString(int32 POINTID, const class FString& Attribute, float DesiredTime, struct FQuat* Quat, bool DoHoudiniToUnrealConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointQuatValueAtTimeForString");

	Params::UHoudiniPointCache_GetPointQuatValueAtTimeForString_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.Attribute = Attribute;
	Parms.DesiredTime = DesiredTime;
	Parms.DoHoudiniToUnrealConversion = DoHoudiniToUnrealConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Quat != nullptr)
		*Quat = std::move(Parms.Quat);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointQuatValueAtTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Quat                                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DoHoudiniToUnrealConversion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointQuatValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, struct FQuat* Quat, bool DoHoudiniToUnrealConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointQuatValueAtTime");

	Params::UHoudiniPointCache_GetPointQuatValueAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.AttributeIndex = AttributeIndex;
	Parms.DesiredTime = DesiredTime;
	Parms.DoHoudiniToUnrealConversion = DoHoudiniToUnrealConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Quat != nullptr)
		*Quat = std::move(Parms.Quat);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointPositionAtTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Vector                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointPositionAtTime(int32& POINTID, float& DesiredTime, struct FVector* Vector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointPositionAtTime");

	Params::UHoudiniPointCache_GetPointPositionAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointLifeAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointLifeAtTime(int32& POINTID, float& DesiredTime, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointLifeAtTime");

	Params::UHoudiniPointCache_GetPointLifeAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointLife
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointLife(int32& POINTID, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointLife");

	Params::UHoudiniPointCache_GetPointLife_Params Parms{};

	Parms.POINTID = POINTID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointInt32ValueAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointInt32ValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointInt32ValueAtTime");

	Params::UHoudiniPointCache_GetPointInt32ValueAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.AttributeIndex = AttributeIndex;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointIDsToSpawnAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxID                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LastSpawnedPointID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LastSpawnTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LastSpawnTimeRequest                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointIDsToSpawnAtTime(float& DesiredTime, int32* MinID, int32* MaxID, int32* Count, int32* LastSpawnedPointID, float* LastSpawnTime, float* LastSpawnTimeRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointIDsToSpawnAtTime");

	Params::UHoudiniPointCache_GetPointIDsToSpawnAtTime_Params Parms{};

	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinID != nullptr)
		*MinID = Parms.MinID;

	if (MaxID != nullptr)
		*MaxID = Parms.MaxID;

	if (Count != nullptr)
		*Count = Parms.Count;

	if (LastSpawnedPointID != nullptr)
		*LastSpawnedPointID = Parms.LastSpawnedPointID;

	if (LastSpawnTime != nullptr)
		*LastSpawnTime = Parms.LastSpawnTime;

	if (LastSpawnTimeRequest != nullptr)
		*LastSpawnTimeRequest = Parms.LastSpawnTimeRequest;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetPointFloatValueAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              POINTID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DesiredTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetPointFloatValueAtTime(int32 POINTID, int32 AttributeIndex, float DesiredTime, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetPointFloatValueAtTime");

	Params::UHoudiniPointCache_GetPointFloatValueAtTime_Params Parms{};

	Parms.POINTID = POINTID;
	Parms.AttributeIndex = AttributeIndex;
	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetNumberOfSamples
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHoudiniPointCache::GetNumberOfSamples()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetNumberOfSamples");

	Params::UHoudiniPointCache_GetNumberOfSamples_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetNumberOfPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHoudiniPointCache::GetNumberOfPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetNumberOfPoints");

	Params::UHoudiniPointCache_GetNumberOfPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetNumberOfAttributes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHoudiniPointCache::GetNumberOfAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetNumberOfAttributes");

	Params::UHoudiniPointCache_GetNumberOfAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetNormalValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetNormalValue(int32& SampleIndex, struct FVector* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetNormalValue");

	Params::UHoudiniPointCache_GetNormalValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetLifeValues
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UHoudiniPointCache::GetLifeValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetLifeValues");

	Params::UHoudiniPointCache_GetLifeValues_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetLastSampleIndexAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              DesiredTime                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LastSampleIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetLastSampleIndexAtTime(float& DesiredTime, int32* LastSampleIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetLastSampleIndexAtTime");

	Params::UHoudiniPointCache_GetLastSampleIndexAtTime_Params Parms{};

	Parms.DesiredTime = DesiredTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LastSampleIndex != nullptr)
		*LastSampleIndex = Parms.LastSampleIndex;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetLastPointIDToSpawnAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Time                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LastID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetLastPointIDToSpawnAtTime(float& Time, int32* LastID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetLastPointIDToSpawnAtTime");

	Params::UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LastID != nullptr)
		*LastID = Parms.LastID;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetImpulseValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetImpulseValue(int32& SampleIndex, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetImpulseValue");

	Params::UHoudiniPointCache_GetImpulseValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetFloatValueForString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetFloatValueForString(int32& SampleIndex, const class FString& Attribute, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetFloatValueForString");

	Params::UHoudiniPointCache_GetFloatValueForString_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetFloatValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttrIndex                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetFloatValue(int32& SampleIndex, int32& AttrIndex, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetFloatValue");

	Params::UHoudiniPointCache_GetFloatValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;
	Parms.AttrIndex = AttrIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetFloatSampleData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<float> UHoudiniPointCache::GetFloatSampleData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetFloatSampleData");

	Params::UHoudiniPointCache_GetFloatSampleData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetColorValue
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SampleIndex                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetColorValue(int32& SampleIndex, struct FLinearColor* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetColorValue");

	Params::UHoudiniPointCache_GetColorValue_Params Parms{};

	Parms.SampleIndex = SampleIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetAttributeIndexInArrayFromString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InAttribute                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              InAttributeArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              OutAttributeIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetAttributeIndexInArrayFromString(const class FString& InAttribute, TArray<class FString>& InAttributeArray, int32* OutAttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetAttributeIndexInArrayFromString");

	Params::UHoudiniPointCache_GetAttributeIndexInArrayFromString_Params Parms{};

	Parms.InAttribute = InAttribute;
	Parms.InAttributeArray = InAttributeArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttributeIndex != nullptr)
		*OutAttributeIndex = Parms.OutAttributeIndex;

	return Parms.ReturnValue;

}


// Function HoudiniNiagara.HoudiniPointCache.GetAttributeIndexFromString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Attribute                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniPointCache::GetAttributeIndexFromString(const class FString& Attribute, int32* AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniPointCache", "GetAttributeIndexFromString");

	Params::UHoudiniPointCache_GetAttributeIndexFromString_Params Parms{};

	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeIndex != nullptr)
		*AttributeIndex = Parms.AttributeIndex;

	return Parms.ReturnValue;

}


// Class HoudiniNiagara.NiagaraDataInterfaceHoudini
// (None)

class UClass* UNiagaraDataInterfaceHoudini::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceHoudini");

	return Clss;
}


// NiagaraDataInterfaceHoudini HoudiniNiagara.Default__NiagaraDataInterfaceHoudini
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceHoudini* UNiagaraDataInterfaceHoudini::GetDefaultObj()
{
	static class UNiagaraDataInterfaceHoudini* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceHoudini*>(UNiagaraDataInterfaceHoudini::StaticClass()->DefaultObject);

	return Default;
}

}



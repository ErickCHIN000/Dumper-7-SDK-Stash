#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxRuntime.GbxDataAsset
// (None)

class UClass* UGbxDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDataAsset");

	return Clss;
}


// GbxDataAsset GbxRuntime.Default__GbxDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDataAsset* UGbxDataAsset::GetDefaultObj()
{
	static class UGbxDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDataAsset*>(UGbxDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxRuntime.GbxCondition
// (None)

class UClass* UGbxCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition");

	return Clss;
}


// GbxCondition GbxRuntime.Default__GbxCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition* UGbxCondition::GetDefaultObj()
{
	static class UGbxCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition*>(UGbxCondition::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxRuntime.GbxCondition.K2_EvaluateConditionType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGbxCondition>   Condition                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxCondition::K2_EvaluateConditionType(TSubclassOf<class UGbxCondition> Condition, class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCondition", "K2_EvaluateConditionType");

	Params::UGbxCondition_K2_EvaluateConditionType_Params Parms{};

	Parms.Condition = Condition;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.GbxCondition.K2_EvaluateCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGbxCondition*               Condition                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxCondition::K2_EvaluateCondition(class UGbxCondition* Condition, class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxCondition", "K2_EvaluateCondition");

	Params::UGbxCondition_K2_EvaluateCondition_Params Parms{};

	Parms.Condition = Condition;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxRuntime.GbxDataAssetBlueprintable
// (None)

class UClass* UGbxDataAssetBlueprintable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxDataAssetBlueprintable");

	return Clss;
}


// GbxDataAssetBlueprintable GbxRuntime.Default__GbxDataAssetBlueprintable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxDataAssetBlueprintable* UGbxDataAssetBlueprintable::GetDefaultObj()
{
	static class UGbxDataAssetBlueprintable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxDataAssetBlueprintable*>(UGbxDataAssetBlueprintable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxRuntime.NumericRangeExt
// (None)

class UClass* UNumericRangeExt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NumericRangeExt");

	return Clss;
}


// NumericRangeExt GbxRuntime.Default__NumericRangeExt
// (Public, ClassDefaultObject, ArchetypeObject)

class UNumericRangeExt* UNumericRangeExt::GetDefaultObj()
{
	static class UNumericRangeExt* Default = nullptr;

	if (!Default)
		Default = static_cast<UNumericRangeExt*>(UNumericRangeExt::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxRuntime.NumericRangeExt.ToValueVarianceString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNumericRangeExt::ToValueVarianceString(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "ToValueVarianceString");

	Params::UNumericRangeExt_ToValueVarianceString_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.ToValueString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNumericRangeExt::ToValueString(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "ToValueString");

	Params::UNumericRangeExt_ToValueString_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.ToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNumericRangeExt::ToString(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "ToString");

	Params::UNumericRangeExt_ToString_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.ToMinMaxString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNumericRangeExt::ToMinMaxString(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "ToMinMaxString");

	Params::UNumericRangeExt_ToMinMaxString_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.SetMinimum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Minimum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNumericRangeExt::SetMinimum(struct FNumericRange* Range, float Minimum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "SetMinimum");

	Params::UNumericRangeExt_SetMinimum_Params Parms{};

	Parms.Minimum = Minimum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Range != nullptr)
		*Range = std::move(Parms.Range);

}


// Function GbxRuntime.NumericRangeExt.SetMaximum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNumericRange               Range                                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Maximum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNumericRangeExt::SetMaximum(struct FNumericRange* Range, float Maximum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "SetMaximum");

	Params::UNumericRangeExt_SetMaximum_Params Parms{};

	Parms.Maximum = Maximum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Range != nullptr)
		*Range = std::move(Parms.Range);

}


// Function GbxRuntime.NumericRangeExt.IsWithin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNumericRangeExt::IsWithin(struct FNumericRange& Range, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "IsWithin");

	Params::UNumericRangeExt_IsWithin_Params Parms{};

	Parms.Range = Range;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.GetMinimum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNumericRangeExt::GetMinimum(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "GetMinimum");

	Params::UNumericRangeExt_GetMinimum_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.GetMaximum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNumericRangeExt::GetMaximum(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "GetMaximum");

	Params::UNumericRangeExt_GetMaximum_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.GenerateRandomNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNumericRange               Range                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNumericRangeExt::GenerateRandomNumber(struct FNumericRange& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "GenerateRandomNumber");

	Params::UNumericRangeExt_GenerateRandomNumber_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.CreateNumericRangeMinMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Minimum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Maximum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNumericRange               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FNumericRange UNumericRangeExt::CreateNumericRangeMinMax(float Minimum, float Maximum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "CreateNumericRangeMinMax");

	Params::UNumericRangeExt_CreateNumericRangeMinMax_Params Parms{};

	Parms.Minimum = Minimum;
	Parms.Maximum = Maximum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxRuntime.NumericRangeExt.CreateNumericRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Variance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNumericRange               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FNumericRange UNumericRangeExt::CreateNumericRange(float Value, float Variance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NumericRangeExt", "CreateNumericRange");

	Params::UNumericRangeExt_CreateNumericRange_Params Parms{};

	Parms.Value = Value;
	Parms.Variance = Variance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxRuntime.RenderActor
// (Actor)

class UClass* ARenderActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RenderActor");

	return Clss;
}


// RenderActor GbxRuntime.Default__RenderActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ARenderActor* ARenderActor::GetDefaultObj()
{
	static class ARenderActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ARenderActor*>(ARenderActor::StaticClass()->DefaultObject);

	return Default;
}

}



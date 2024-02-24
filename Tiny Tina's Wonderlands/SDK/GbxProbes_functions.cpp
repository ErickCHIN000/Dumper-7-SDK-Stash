#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxProbes.GbxProbesBlueprintLibrary
// (None)

class UClass* UGbxProbesBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxProbesBlueprintLibrary");

	return Clss;
}


// GbxProbesBlueprintLibrary GbxProbes.Default__GbxProbesBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxProbesBlueprintLibrary* UGbxProbesBlueprintLibrary::GetDefaultObj()
{
	static class UGbxProbesBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxProbesBlueprintLibrary*>(UGbxProbesBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxProbes.GbxProbesBlueprintLibrary.ResolveGbxProbeId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InObj                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InTag                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProbeId                 OutId                                                            (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::ResolveGbxProbeId(class UObject* InObj, const struct FGameplayTag& InTag, struct FGbxProbeId* OutId, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "ResolveGbxProbeId");

	Params::UGbxProbesBlueprintLibrary_ResolveGbxProbeId_Params Parms{};

	Parms.InObj = InObj;
	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutId != nullptr)
		*OutId = std::move(Parms.OutId);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.MakeProbeId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Class                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SubType                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxProbeId                 OutId                                                            (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::MakeProbeId(const class FString& Class, const class FString& Type, const class FString& SubType, struct FGbxProbeId* OutId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "MakeProbeId");

	Params::UGbxProbesBlueprintLibrary_MakeProbeId_Params Parms{};

	Parms.Class = Class;
	Parms.Type = Type;
	Parms.SubType = SubType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutId != nullptr)
		*OutId = std::move(Parms.OutId);

}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsValidId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxProbeId                 ProbeId                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::IsValidId(struct FGbxProbeId& ProbeId, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "IsValidId");

	Params::UGbxProbesBlueprintLibrary_IsValidId_Params Parms{};

	Parms.ProbeId = ProbeId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsTestProbeEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxProbeId                 ProbeId                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Test                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::IsTestProbeEnabled(struct FGbxProbeId& ProbeId, class FName Test, bool* IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "IsTestProbeEnabled");

	Params::UGbxProbesBlueprintLibrary_IsTestProbeEnabled_Params Parms{};

	Parms.ProbeId = ProbeId;
	Parms.Test = Test;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsTestEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Test                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::IsTestEnabled(class FName Test, bool* IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "IsTestEnabled");

	Params::UGbxProbesBlueprintLibrary_IsTestEnabled_Params Parms{};

	Parms.Test = Test;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.IsClassEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsEnabled                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::IsClassEnabled(class FName Class, bool* IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "IsClassEnabled");

	Params::UGbxProbesBlueprintLibrary_IsClassEnabled_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.FlushPendingTestProbes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UGbxProbesBlueprintLibrary::FlushPendingTestProbes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "FlushPendingTestProbes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResultWithData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxProbeId                 ProbeId                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Test                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxProbeResult         Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGbxProbeExtraData>  ExtraDataArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::EmitTestProbeResultWithData(struct FGbxProbeId& ProbeId, class FName Test, enum class EGbxProbeResult Result, TArray<struct FGbxProbeExtraData>& ExtraDataArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "EmitTestProbeResultWithData");

	Params::UGbxProbesBlueprintLibrary_EmitTestProbeResultWithData_Params Parms{};

	Parms.ProbeId = ProbeId;
	Parms.Test = Test;
	Parms.Result = Result;
	Parms.ExtraDataArray = ExtraDataArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxProbes.GbxProbesBlueprintLibrary.EmitTestProbeResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxProbeId                 ProbeId                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Test                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGbxProbeResult         Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraData                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxProbesBlueprintLibrary::EmitTestProbeResult(struct FGbxProbeId& ProbeId, class FName Test, enum class EGbxProbeResult Result, const class FString& ExtraData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxProbesBlueprintLibrary", "EmitTestProbeResult");

	Params::UGbxProbesBlueprintLibrary_EmitTestProbeResult_Params Parms{};

	Parms.ProbeId = ProbeId;
	Parms.Test = Test;
	Parms.Result = Result;
	Parms.ExtraData = ExtraData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



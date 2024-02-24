#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NWXCore.BitwiseFunctions
// (None)

class UClass* UBitwiseFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BitwiseFunctions");

	return Clss;
}


// BitwiseFunctions NWXCore.Default__BitwiseFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UBitwiseFunctions* UBitwiseFunctions::GetDefaultObj()
{
	static class UBitwiseFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UBitwiseFunctions*>(UBitwiseFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.BitwiseFunctions.GetNthBitValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              BitMask                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              N                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBitwiseFunctions::GetNthBitValue(int32& BitMask, int32& N)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BitwiseFunctions", "GetNthBitValue");

	Params::UBitwiseFunctions_GetNthBitValue_Params Parms{};

	Parms.BitMask = BitMask;
	Parms.N = N;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.BitwiseFunctions.BitwiseRightShift
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Num                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ShiftAmount                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBitwiseFunctions::BitwiseRightShift(int32& Num, int32& ShiftAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BitwiseFunctions", "BitwiseRightShift");

	Params::UBitwiseFunctions_BitwiseRightShift_Params Parms{};

	Parms.Num = Num;
	Parms.ShiftAmount = ShiftAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.BitwiseFunctions.BitwiseLeftShift
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Num                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ShiftAmount                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBitwiseFunctions::BitwiseLeftShift(int32& Num, int32& ShiftAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BitwiseFunctions", "BitwiseLeftShift");

	Params::UBitwiseFunctions_BitwiseLeftShift_Params Parms{};

	Parms.Num = Num;
	Parms.ShiftAmount = ShiftAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.ComparisonFunctionLibrary
// (None)

class UClass* UComparisonFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComparisonFunctionLibrary");

	return Clss;
}


// ComparisonFunctionLibrary NWXCore.Default__ComparisonFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UComparisonFunctionLibrary* UComparisonFunctionLibrary::GetDefaultObj()
{
	static class UComparisonFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UComparisonFunctionLibrary*>(UComparisonFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.ComparisonFunctionLibrary.CompareInts
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              LHS                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENWXMathComparison      Comparison                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComparisonFunctionLibrary::CompareInts(int32 LHS, int32 RHS, enum class ENWXMathComparison Comparison)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComparisonFunctionLibrary", "CompareInts");

	Params::UComparisonFunctionLibrary_CompareInts_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;
	Parms.Comparison = Comparison;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.DataValidationHelperFunctions
// (None)

class UClass* UDataValidationHelperFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataValidationHelperFunctions");

	return Clss;
}


// DataValidationHelperFunctions NWXCore.Default__DataValidationHelperFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataValidationHelperFunctions* UDataValidationHelperFunctions::GetDefaultObj()
{
	static class UDataValidationHelperFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataValidationHelperFunctions*>(UDataValidationHelperFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.DataValidationHelperFunctions.ValidateTextIsSetAndInAStringTable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Label                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FText>                ValidationErrors                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EDataValidationResult   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDataValidationResult UDataValidationHelperFunctions::ValidateTextIsSetAndInAStringTable(const class FString& Label, class FText& Text, TArray<class FText>& ValidationErrors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataValidationHelperFunctions", "ValidateTextIsSetAndInAStringTable");

	Params::UDataValidationHelperFunctions_ValidateTextIsSetAndInAStringTable_Params Parms{};

	Parms.Label = Label;
	Parms.Text = Text;
	Parms.ValidationErrors = ValidationErrors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.DataValidationHelperFunctions.ValidateTextIsEmptyOrInAStringTable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Label                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FText>                ValidationErrors                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EDataValidationResult   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDataValidationResult UDataValidationHelperFunctions::ValidateTextIsEmptyOrInAStringTable(const class FString& Label, class FText& Text, TArray<class FText>& ValidationErrors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataValidationHelperFunctions", "ValidateTextIsEmptyOrInAStringTable");

	Params::UDataValidationHelperFunctions_ValidateTextIsEmptyOrInAStringTable_Params Parms{};

	Parms.Label = Label;
	Parms.Text = Text;
	Parms.ValidationErrors = ValidationErrors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.DataValidationHelperFunctions.CombineValidationResults
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EDataValidationResult   A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDataValidationResult   B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDataValidationResult   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EDataValidationResult UDataValidationHelperFunctions::CombineValidationResults(enum class EDataValidationResult A, enum class EDataValidationResult B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataValidationHelperFunctions", "CombineValidationResults");

	Params::UDataValidationHelperFunctions_CombineValidationResults_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.GetPrimitivesByTagInterface
// (None)

class UClass* IGetPrimitivesByTagInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetPrimitivesByTagInterface");

	return Clss;
}


// GetPrimitivesByTagInterface NWXCore.Default__GetPrimitivesByTagInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGetPrimitivesByTagInterface* IGetPrimitivesByTagInterface::GetDefaultObj()
{
	static class IGetPrimitivesByTagInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGetPrimitivesByTagInterface*>(IGetPrimitivesByTagInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.GetPrimitivesByTagInterface.GetPrimitiveComponentsByTag
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UPrimitiveComponent*> ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UPrimitiveComponent*> IGetPrimitivesByTagInterface::GetPrimitiveComponentsByTag(struct FGameplayTagContainer& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetPrimitivesByTagInterface", "GetPrimitiveComponentsByTag");

	Params::IGetPrimitivesByTagInterface_GetPrimitiveComponentsByTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.LiveServicesDataTable
// (None)

class UClass* ULiveServicesDataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveServicesDataTable");

	return Clss;
}


// LiveServicesDataTable NWXCore.Default__LiveServicesDataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveServicesDataTable* ULiveServicesDataTable::GetDefaultObj()
{
	static class ULiveServicesDataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveServicesDataTable*>(ULiveServicesDataTable::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.LiveServicesDataTable.WriteDefaultJsonFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveServicesDataTable::WriteDefaultJsonFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesDataTable", "WriteDefaultJsonFile");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXCore.LiveServicesDataTable.UpdateFromLiveConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewTableJson                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesDataTable::UpdateFromLiveConfig(const class FString& NewTableJson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesDataTable", "UpdateFromLiveConfig");

	Params::ULiveServicesDataTable_UpdateFromLiveConfig_Params Parms{};

	Parms.NewTableJson = NewTableJson;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.LiveServicesFunctionLibrary
// (None)

class UClass* ULiveServicesFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveServicesFunctionLibrary");

	return Clss;
}


// LiveServicesFunctionLibrary NWXCore.Default__LiveServicesFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveServicesFunctionLibrary* ULiveServicesFunctionLibrary::GetDefaultObj()
{
	static class ULiveServicesFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveServicesFunctionLibrary*>(ULiveServicesFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.LiveServicesFunctionLibrary.UpdateDynamicStructsUStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Struct                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        DynamicStruct                                                    (Parm, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        DynamicStructOut                                                 (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveServicesFunctionLibrary::UpdateDynamicStructsUStruct(class UObject* Struct, const struct FDynamicTypedStructs& DynamicStruct, struct FDynamicTypedStructs* DynamicStructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "UpdateDynamicStructsUStruct");

	Params::ULiveServicesFunctionLibrary_UpdateDynamicStructsUStruct_Params Parms{};

	Parms.Struct = Struct;
	Parms.DynamicStruct = DynamicStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DynamicStructOut != nullptr)
		*DynamicStructOut = std::move(Parms.DynamicStructOut);

}


// Function NWXCore.LiveServicesFunctionLibrary.UpdateDynamicStructs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicTypedStructs        DynamicStruct                                                    (Parm, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        DynamicStructOut                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FJsonStruct                 JsonStruct                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULiveServicesFunctionLibrary::UpdateDynamicStructs(const struct FDynamicTypedStructs& DynamicStruct, struct FDynamicTypedStructs* DynamicStructOut, struct FJsonStruct& JsonStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "UpdateDynamicStructs");

	Params::ULiveServicesFunctionLibrary_UpdateDynamicStructs_Params Parms{};

	Parms.DynamicStruct = DynamicStruct;
	Parms.JsonStruct = JsonStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DynamicStructOut != nullptr)
		*DynamicStructOut = std::move(Parms.DynamicStructOut);

}


// Function NWXCore.LiveServicesFunctionLibrary.StringToDynamicStructs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDynamicTypedStructs ULiveServicesFunctionLibrary::StringToDynamicStructs(const class FString& String, bool* Succeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "StringToDynamicStructs");

	Params::ULiveServicesFunctionLibrary_StringToDynamicStructs_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.SetJsonStructByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonStruct                 JsonStruct                                                       (Parm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               StructData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FJsonStruct                 OutJsonStruct                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::SetJsonStructByType(const struct FJsonStruct& JsonStruct, class UScriptStruct* StructType, struct FTableRowBase& StructData, struct FJsonStruct* OutJsonStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "SetJsonStructByType");

	Params::ULiveServicesFunctionLibrary_SetJsonStructByType_Params Parms{};

	Parms.JsonStruct = JsonStruct;
	Parms.StructType = StructType;
	Parms.StructData = StructData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJsonStruct != nullptr)
		*OutJsonStruct = std::move(Parms.OutJsonStruct);

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.RemoveStructByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicTypedStructs        DynamicStruct                                                    (Parm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        DynamicStructOut                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::RemoveStructByType(const struct FDynamicTypedStructs& DynamicStruct, class UScriptStruct* StructType, struct FDynamicTypedStructs* DynamicStructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "RemoveStructByType");

	Params::ULiveServicesFunctionLibrary_RemoveStructByType_Params Parms{};

	Parms.DynamicStruct = DynamicStruct;
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DynamicStructOut != nullptr)
		*DynamicStructOut = std::move(Parms.DynamicStructOut);

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.MergeDynamicStructs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicTypedStructs        A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDynamicTypedStructs        OutResultStruct                                                  (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveServicesFunctionLibrary::MergeDynamicStructs(struct FDynamicTypedStructs& A, struct FDynamicTypedStructs& B, struct FDynamicTypedStructs* OutResultStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "MergeDynamicStructs");

	Params::ULiveServicesFunctionLibrary_MergeDynamicStructs_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResultStruct != nullptr)
		*OutResultStruct = std::move(Parms.OutResultStruct);

}


// Function NWXCore.LiveServicesFunctionLibrary.IsJsonEqual
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonStringA                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JsonStringB                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::IsJsonEqual(const class FString& JsonStringA, const class FString& JsonStringB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "IsJsonEqual");

	Params::ULiveServicesFunctionLibrary_IsJsonEqual_Params Parms{};

	Parms.JsonStringA = JsonStringA;
	Parms.JsonStringB = JsonStringB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.IsDynamicStructEmpty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDynamicTypedStructs        DynamicStruct                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::IsDynamicStructEmpty(struct FDynamicTypedStructs& DynamicStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "IsDynamicStructEmpty");

	Params::ULiveServicesFunctionLibrary_IsDynamicStructEmpty_Params Parms{};

	Parms.DynamicStruct = DynamicStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.GetStructByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicTypedStructs        StructsContainer                                                 (Parm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutStruct                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::GetStructByType(const struct FDynamicTypedStructs& StructsContainer, class UScriptStruct* StructType, struct FTableRowBase* OutStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "GetStructByType");

	Params::ULiveServicesFunctionLibrary_GetStructByType_Params Parms{};

	Parms.StructsContainer = StructsContainer;
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutStruct != nullptr)
		*OutStruct = std::move(Parms.OutStruct);

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.GetJsonStructByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FJsonStruct                 JsonStruct                                                       (Parm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutStruct                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::GetJsonStructByType(const struct FJsonStruct& JsonStruct, class UScriptStruct* StructType, struct FTableRowBase* OutStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "GetJsonStructByType");

	Params::ULiveServicesFunctionLibrary_GetJsonStructByType_Params Parms{};

	Parms.JsonStruct = JsonStruct;
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutStruct != nullptr)
		*OutStruct = std::move(Parms.OutStruct);

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.DynamicStructsToString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDynamicTypedStructs        Struct                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULiveServicesFunctionLibrary::DynamicStructsToString(const struct FDynamicTypedStructs& Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "DynamicStructsToString");

	Params::ULiveServicesFunctionLibrary_DynamicStructsToString_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.DynamicStructContains
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicTypedStructs        DynamicStruct                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveServicesFunctionLibrary::DynamicStructContains(struct FDynamicTypedStructs& DynamicStruct, class UScriptStruct* StructType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "DynamicStructContains");

	Params::ULiveServicesFunctionLibrary_DynamicStructContains_Params Parms{};

	Parms.DynamicStruct = DynamicStruct;
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXCore.LiveServicesFunctionLibrary.CreateJsonStruct
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Struct                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJsonStruct                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FJsonStruct ULiveServicesFunctionLibrary::CreateJsonStruct(class UObject* Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveServicesFunctionLibrary", "CreateJsonStruct");

	Params::ULiveServicesFunctionLibrary_CreateJsonStruct_Params Parms{};

	Parms.Struct = Struct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.NWXCoreFunctionLibrary
// (None)

class UClass* UNWXCoreFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXCoreFunctionLibrary");

	return Clss;
}


// NWXCoreFunctionLibrary NWXCore.Default__NWXCoreFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXCoreFunctionLibrary* UNWXCoreFunctionLibrary::GetDefaultObj()
{
	static class UNWXCoreFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXCoreFunctionLibrary*>(UNWXCoreFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXCore.NWXCoreFunctionLibrary.AreAutomatedTestsRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNWXCoreFunctionLibrary::AreAutomatedTestsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXCoreFunctionLibrary", "AreAutomatedTestsRunning");

	Params::UNWXCoreFunctionLibrary_AreAutomatedTestsRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXCore.NWXGameInstanceSubsystem
// (None)

class UClass* UNWXGameInstanceSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXGameInstanceSubsystem");

	return Clss;
}


// NWXGameInstanceSubsystem NWXCore.Default__NWXGameInstanceSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXGameInstanceSubsystem* UNWXGameInstanceSubsystem::GetDefaultObj()
{
	static class UNWXGameInstanceSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXGameInstanceSubsystem*>(UNWXGameInstanceSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXCore.NWXWorldSubsystem
// (None)

class UClass* UNWXWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXWorldSubsystem");

	return Clss;
}


// NWXWorldSubsystem NWXCore.Default__NWXWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXWorldSubsystem* UNWXWorldSubsystem::GetDefaultObj()
{
	static class UNWXWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXWorldSubsystem*>(UNWXWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXCore.NWXTickableWorldSubsystem
// (None)

class UClass* UNWXTickableWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXTickableWorldSubsystem");

	return Clss;
}


// NWXTickableWorldSubsystem NWXCore.Default__NWXTickableWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXTickableWorldSubsystem* UNWXTickableWorldSubsystem::GetDefaultObj()
{
	static class UNWXTickableWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXTickableWorldSubsystem*>(UNWXTickableWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}



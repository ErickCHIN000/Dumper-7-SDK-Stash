#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AffinityTable.AffinityTable
// (None)

class UClass* UAffinityTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AffinityTable");

	return Clss;
}


// AffinityTable AffinityTable.Default__AffinityTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UAffinityTable* UAffinityTable::GetDefaultObj()
{
	static class UAffinityTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UAffinityTable*>(UAffinityTable::StaticClass()->DefaultObject);

	return Default;
}


// Class AffinityTable.AffinityTableBlueprintLibrary
// (None)

class UClass* UAffinityTableBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AffinityTableBlueprintLibrary");

	return Clss;
}


// AffinityTableBlueprintLibrary AffinityTable.Default__AffinityTableBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAffinityTableBlueprintLibrary* UAffinityTableBlueprintLibrary::GetDefaultObj()
{
	static class UAffinityTableBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAffinityTableBlueprintLibrary*>(UAffinityTableBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AffinityTable.AffinityTableBlueprintLibrary.QueryTableForRow
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAffinityTable*              Table                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                RowTag                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ExactMatch                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UScriptStruct*>       StructureTypes                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FCellDataArrayWrapper>OutMemoryPtrs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAffinityTableBlueprintLibrary::QueryTableForRow(class UAffinityTable* Table, struct FGameplayTag& RowTag, bool ExactMatch, const TArray<class UScriptStruct*>& StructureTypes, TArray<struct FCellDataArrayWrapper>* OutMemoryPtrs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AffinityTableBlueprintLibrary", "QueryTableForRow");

	Params::UAffinityTableBlueprintLibrary_QueryTableForRow_Params Parms{};

	Parms.Table = Table;
	Parms.RowTag = RowTag;
	Parms.ExactMatch = ExactMatch;
	Parms.StructureTypes = StructureTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMemoryPtrs != nullptr)
		*OutMemoryPtrs = std::move(Parms.OutMemoryPtrs);

	return Parms.ReturnValue;

}


// Function AffinityTable.AffinityTableBlueprintLibrary.QueryTable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAffinityTable*              Table                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                RowTag                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ColumnTag                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ExactMatch                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UScriptStruct*>       StructureTypes                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FAffinityTableCellDataWrapper>OutMemoryPtrs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAffinityTableBlueprintLibrary::QueryTable(class UAffinityTable* Table, struct FGameplayTag& RowTag, struct FGameplayTag& ColumnTag, bool ExactMatch, const TArray<class UScriptStruct*>& StructureTypes, TArray<struct FAffinityTableCellDataWrapper>* OutMemoryPtrs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AffinityTableBlueprintLibrary", "QueryTable");

	Params::UAffinityTableBlueprintLibrary_QueryTable_Params Parms{};

	Parms.Table = Table;
	Parms.RowTag = RowTag;
	Parms.ColumnTag = ColumnTag;
	Parms.ExactMatch = ExactMatch;
	Parms.StructureTypes = StructureTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMemoryPtrs != nullptr)
		*OutMemoryPtrs = std::move(Parms.OutMemoryPtrs);

	return Parms.ReturnValue;

}


// Function AffinityTable.AffinityTableBlueprintLibrary.GetTableCellsData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCellDataArrayWrapper>MemoryPtrs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FAffinityTableCellDataWrapper>OutData                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAffinityTableBlueprintLibrary::GetTableCellsData(class UScriptStruct* StructType, int32 DataIndex, const TArray<struct FCellDataArrayWrapper>& MemoryPtrs, TArray<struct FAffinityTableCellDataWrapper>* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AffinityTableBlueprintLibrary", "GetTableCellsData");

	Params::UAffinityTableBlueprintLibrary_GetTableCellsData_Params Parms{};

	Parms.StructType = StructType;
	Parms.DataIndex = DataIndex;
	Parms.MemoryPtrs = MemoryPtrs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function AffinityTable.AffinityTableBlueprintLibrary.GetTableCellData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAffinityTableCellDataWrapper>MemoryPtrs                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FAffinityTableCellDataWrapperOutData                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UAffinityTableBlueprintLibrary::GetTableCellData(class UScriptStruct* StructType, int32 DataIndex, const TArray<struct FAffinityTableCellDataWrapper>& MemoryPtrs, struct FAffinityTableCellDataWrapper* OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AffinityTableBlueprintLibrary", "GetTableCellData");

	Params::UAffinityTableBlueprintLibrary_GetTableCellData_Params Parms{};

	Parms.StructType = StructType;
	Parms.DataIndex = DataIndex;
	Parms.MemoryPtrs = MemoryPtrs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class IcarusUtilities.RowLibrary
// (None)

class UClass* URowLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RowLibrary");

	return Clss;
}


// RowLibrary IcarusUtilities.Default__RowLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URowLibrary* URowLibrary::GetDefaultObj()
{
	static class URowLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URowLibrary*>(URowLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.RowLibrary.IsRowHandleValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URowLibrary::IsRowHandleValid(struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "IsRowHandleValid");

	Params::URowLibrary_IsRowHandleValid_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.IsRowHandleNone
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URowLibrary::IsRowHandleNone(struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "IsRowHandleNone");

	Params::URowLibrary_IsRowHandleNone_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.IsRowEnumValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowEnum                    Enum                                                             (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URowLibrary::IsRowEnumValid(struct FRowEnum& Enum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "IsRowEnumValid");

	Params::URowLibrary_IsRowEnumValid_Params Parms{};

	Parms.Enum = Enum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.IsRowEnumNone
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowEnum                    Enum                                                             (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URowLibrary::IsRowEnumNone(struct FRowEnum& Enum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "IsRowEnumNone");

	Params::URowLibrary_IsRowEnumNone_Params Parms{};

	Parms.Enum = Enum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.GetRowIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRowHandle                  Row                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URowLibrary::GetRowIndex(struct FRowHandle& Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "GetRowIndex");

	Params::URowLibrary_GetRowIndex_Params Parms{};

	Parms.Row = Row;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.GetMetadata
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRowMetadata                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FRowMetadata URowLibrary::GetMetadata(const struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "GetMetadata");

	Params::URowLibrary_GetMetadata_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.GetFeatureLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle URowLibrary::GetFeatureLevel(const struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "GetFeatureLevel");

	Params::URowLibrary_GetFeatureLevel_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.GetDataTableName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URowLibrary::GetDataTableName(const struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "GetDataTableName");

	Params::URowLibrary_GetDataTableName_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.GetDataTableForEdit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UIcarusDataTable*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIcarusDataTable* URowLibrary::GetDataTableForEdit(const struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "GetDataTableForEdit");

	Params::URowLibrary_GetDataTableForEdit_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.GetDataTable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UIcarusDataTable*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UIcarusDataTable* URowLibrary::GetDataTable(const struct FRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "GetDataTable");

	Params::URowLibrary_GetDataTable_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.RowLibrary.EqualEqual_FRowHandleFRowHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRowHandle                  RowHandleA                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRowHandle                  RowHandleB                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URowLibrary::EqualEqual_FRowHandleFRowHandle(const struct FRowHandle& RowHandleA, const struct FRowHandle& RowHandleB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RowLibrary", "EqualEqual_FRowHandleFRowHandle");

	Params::URowLibrary_EqualEqual_FRowHandleFRowHandle_Params Parms{};

	Parms.RowHandleA = RowHandleA;
	Parms.RowHandleB = RowHandleB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IcarusUtilities.IcarusDataTable
// (None)

class UClass* UIcarusDataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusDataTable");

	return Clss;
}


// IcarusDataTable IcarusUtilities.Default__IcarusDataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusDataTable* UIcarusDataTable::GetDefaultObj()
{
	static class UIcarusDataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusDataTable*>(UIcarusDataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class IcarusUtilities.FeatureLevelsLibrary
// (None)

class UClass* UFeatureLevelsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeatureLevelsLibrary");

	return Clss;
}


// FeatureLevelsLibrary IcarusUtilities.Default__FeatureLevelsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFeatureLevelsLibrary* UFeatureLevelsLibrary::GetDefaultObj()
{
	static class UFeatureLevelsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeatureLevelsLibrary*>(UFeatureLevelsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.FeatureLevelsLibrary.StructToRowHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          EnumValue                                                        (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle UFeatureLevelsLibrary::StructToRowHandle(const struct FFeatureLevelsEnum& EnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "StructToRowHandle");

	Params::UFeatureLevelsLibrary_StructToRowHandle_Params Parms{};

	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.StructToName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          EnumValue                                                        (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFeatureLevelsLibrary::StructToName(const struct FFeatureLevelsEnum& EnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "StructToName");

	Params::UFeatureLevelsLibrary_StructToName_Params Parms{};

	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.StructToInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          EnumValue                                                        (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFeatureLevelsLibrary::StructToInt(const struct FFeatureLevelsEnum& EnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "StructToInt");

	Params::UFeatureLevelsLibrary_StructToInt_Params Parms{};

	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.RowHandleToStruct
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsRowHandle     RowHandle                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsEnum          ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsEnum UFeatureLevelsLibrary::RowHandleToStruct(const struct FFeatureLevelsRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "RowHandleToStruct");

	Params::UFeatureLevelsLibrary_RowHandleToStruct_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.RemoveRowFromFeatureLevelsTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeatureLevelsLibrary::RemoveRowFromFeatureLevelsTable(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "RemoveRowFromFeatureLevelsTable");

	Params::UFeatureLevelsLibrary_RemoveRowFromFeatureLevelsTable_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IcarusUtilities.FeatureLevelsLibrary.RefreshConstants
// (Final, Native, Static, Public)
// Parameters:

void UFeatureLevelsLibrary::RefreshConstants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "RefreshConstants");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function IcarusUtilities.FeatureLevelsLibrary.NumRows
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFeatureLevelsLibrary::NumRows()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "NumRows");

	Params::UFeatureLevelsLibrary_NumRows_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          A                                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureLevelsLibrary::NotEqual_EnumName(const struct FFeatureLevelsEnum& A, class FName B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "NotEqual_EnumName");

	Params::UFeatureLevelsLibrary_NotEqual_EnumName_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          A                                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsEnum          B                                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureLevelsLibrary::NotEqual_EnumEnum(const struct FFeatureLevelsEnum& A, const struct FFeatureLevelsEnum& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "NotEqual_EnumEnum");

	Params::UFeatureLevelsLibrary_NotEqual_EnumEnum_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.NameToStruct
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NameValue                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsEnum          ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsEnum UFeatureLevelsLibrary::NameToStruct(class FName NameValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "NameToStruct");

	Params::UFeatureLevelsLibrary_NameToStruct_Params Parms{};

	Parms.NameValue = NameValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.NameToInt
// (Final, Native, Static, Public)
// Parameters:
// class FName                        NameValue                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFeatureLevelsLibrary::NameToInt(class FName NameValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "NameToInt");

	Params::UFeatureLevelsLibrary_NameToInt_Params Parms{};

	Parms.NameValue = NameValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.MakeLiteralFeatureLevels
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsRowHandle     RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle UFeatureLevelsLibrary::MakeLiteralFeatureLevels(const struct FFeatureLevelsRowHandle& RowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "MakeLiteralFeatureLevels");

	Params::UFeatureLevelsLibrary_MakeLiteralFeatureLevels_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsFromIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle UFeatureLevelsLibrary::MakeFeatureLevelsFromIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "MakeFeatureLevelsFromIndex");

	Params::UFeatureLevelsLibrary_MakeFeatureLevelsFromIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          Enum                                                             (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsEnum          ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsEnum UFeatureLevelsLibrary::MakeFeatureLevelsEnum(const struct FFeatureLevelsEnum& Enum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "MakeFeatureLevelsEnum");

	Params::UFeatureLevelsLibrary_MakeFeatureLevelsEnum_Params Parms{};

	Parms.Enum = Enum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevels
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        RowName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle UFeatureLevelsLibrary::MakeFeatureLevels(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "MakeFeatureLevels");

	Params::UFeatureLevelsLibrary_MakeFeatureLevels_Params Parms{};

	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.IsValidName
// (Final, Native, Static, Public)
// Parameters:
// class FName                        NameValue                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureLevelsLibrary::IsValidName(class FName NameValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "IsValidName");

	Params::UFeatureLevelsLibrary_IsValidName_Params Parms{};

	Parms.NameValue = NameValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.IntToStruct
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              IntValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsEnum          ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsEnum UFeatureLevelsLibrary::IntToStruct(int32 IntValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "IntToStruct");

	Params::UFeatureLevelsLibrary_IntToStruct_Params Parms{};

	Parms.IntValue = IntValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.IntToName
// (Final, Native, Static, Public)
// Parameters:
// int32                              IntValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFeatureLevelsLibrary::IntToName(int32 IntValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "IntToName");

	Params::UFeatureLevelsLibrary_IntToName_Params Parms{};

	Parms.IntValue = IntValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.GetFeatureLevelsStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFeatureLevelsRowHandle     RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelData           FeatureLevels                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EValid                  Paths                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeatureLevelsLibrary::GetFeatureLevelsStruct(const struct FFeatureLevelsRowHandle& RowHandle, struct FFeatureLevelData* FeatureLevels, enum class EValid* Paths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "GetFeatureLevelsStruct");

	Params::UFeatureLevelsLibrary_GetFeatureLevelsStruct_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FeatureLevels != nullptr)
		*FeatureLevels = std::move(Parms.FeatureLevels);

	if (Paths != nullptr)
		*Paths = Parms.Paths;

}


// Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsRowHandle     RowHandleA                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     RowHandleB                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureLevelsLibrary::EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(const struct FFeatureLevelsRowHandle& RowHandleA, const struct FFeatureLevelsRowHandle& RowHandleB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle");

	Params::UFeatureLevelsLibrary_EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle_Params Parms{};

	Parms.RowHandleA = RowHandleA;
	Parms.RowHandleB = RowHandleB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_EnumEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          A                                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsEnum          B                                                                (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureLevelsLibrary::EqualEqual_EnumEnum(const struct FFeatureLevelsEnum& A, const struct FFeatureLevelsEnum& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "EqualEqual_EnumEnum");

	Params::UFeatureLevelsLibrary_EqualEqual_EnumEnum_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.CastToFeatureLevelsRowHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRowHandle                  RowHandle                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EValid                  Paths                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle UFeatureLevelsLibrary::CastToFeatureLevelsRowHandle(const struct FRowHandle& RowHandle, enum class EValid* Paths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "CastToFeatureLevelsRowHandle");

	Params::UFeatureLevelsLibrary_CastToFeatureLevelsRowHandle_Params Parms{};

	Parms.RowHandle = RowHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Paths != nullptr)
		*Paths = Parms.Paths;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.FeatureLevelsLibrary.BreakFeatureLevelsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsEnum          Enum                                                             (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeatureLevelsLibrary::BreakFeatureLevelsEnum(const struct FFeatureLevelsEnum& Enum, class FName* Name, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "BreakFeatureLevelsEnum");

	Params::UFeatureLevelsLibrary_BreakFeatureLevelsEnum_Params Parms{};

	Parms.Enum = Enum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = Parms.Name;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function IcarusUtilities.FeatureLevelsLibrary.AddRowToFeatureLevelsTable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFeatureLevelData           Data                                                             (Parm, NativeAccessSpecifierPublic)
// struct FFeatureLevelsRowHandle     NewRow                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOverrideExistingRow                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeatureLevelsLibrary::AddRowToFeatureLevelsTable(class FName Name, const struct FFeatureLevelData& Data, struct FFeatureLevelsRowHandle* NewRow, bool bOverrideExistingRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureLevelsLibrary", "AddRowToFeatureLevelsTable");

	Params::UFeatureLevelsLibrary_AddRowToFeatureLevelsTable_Params Parms{};

	Parms.Name = Name;
	Parms.Data = Data;
	Parms.bOverrideExistingRow = bOverrideExistingRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewRow != nullptr)
		*NewRow = std::move(Parms.NewRow);

}


// Class IcarusUtilities.FeatureLevelsTable
// (None)

class UClass* UFeatureLevelsTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeatureLevelsTable");

	return Clss;
}


// FeatureLevelsTable IcarusUtilities.Default__FeatureLevelsTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFeatureLevelsTable* UFeatureLevelsTable::GetDefaultObj()
{
	static class UFeatureLevelsTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeatureLevelsTable*>(UFeatureLevelsTable::StaticClass()->DefaultObject);

	return Default;
}


// Class IcarusUtilities.IcarusContainerLibrary
// (None)

class UClass* UIcarusContainerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusContainerLibrary");

	return Clss;
}


// IcarusContainerLibrary IcarusUtilities.Default__IcarusContainerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusContainerLibrary* UIcarusContainerLibrary::GetDefaultObj()
{
	static class UIcarusContainerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusContainerLibrary*>(UIcarusContainerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class IcarusUtilities.IcarusFeatureLevelFunctionLibrary
// (None)

class UClass* UIcarusFeatureLevelFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusFeatureLevelFunctionLibrary");

	return Clss;
}


// IcarusFeatureLevelFunctionLibrary IcarusUtilities.Default__IcarusFeatureLevelFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusFeatureLevelFunctionLibrary* UIcarusFeatureLevelFunctionLibrary::GetDefaultObj()
{
	static class UIcarusFeatureLevelFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusFeatureLevelFunctionLibrary*>(UIcarusFeatureLevelFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.IsFeatureLevelEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsRowHandle     InFeatureLevel                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusFeatureLevelFunctionLibrary::IsFeatureLevelEnabled(const struct FFeatureLevelsRowHandle& InFeatureLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusFeatureLevelFunctionLibrary", "IsFeatureLevelEnabled");

	Params::UIcarusFeatureLevelFunctionLibrary_IsFeatureLevelEnabled_Params Parms{};

	Parms.InFeatureLevel = InFeatureLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.GetCurrentFeatureLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFeatureLevelsRowHandle     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFeatureLevelsRowHandle UIcarusFeatureLevelFunctionLibrary::GetCurrentFeatureLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusFeatureLevelFunctionLibrary", "GetCurrentFeatureLevel");

	Params::UIcarusFeatureLevelFunctionLibrary_GetCurrentFeatureLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IcarusUtilities.IcarusHashesFunctionLibrary
// (None)

class UClass* UIcarusHashesFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusHashesFunctionLibrary");

	return Clss;
}


// IcarusHashesFunctionLibrary IcarusUtilities.Default__IcarusHashesFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusHashesFunctionLibrary* UIcarusHashesFunctionLibrary::GetDefaultObj()
{
	static class UIcarusHashesFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusHashesFunctionLibrary*>(UIcarusHashesFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.IcarusHashesFunctionLibrary.NameToHash
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UIcarusHashesFunctionLibrary::NameToHash(class FName& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusHashesFunctionLibrary", "NameToHash");

	Params::UIcarusHashesFunctionLibrary_NameToHash_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusHashesFunctionLibrary.HashToName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Hash                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UIcarusHashesFunctionLibrary::HashToName(int32 Hash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusHashesFunctionLibrary", "HashToName");

	Params::UIcarusHashesFunctionLibrary_HashToName_Params Parms{};

	Parms.Hash = Hash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IcarusUtilities.IcarusMetaTable
// (None)

class UClass* UIcarusMetaTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusMetaTable");

	return Clss;
}


// IcarusMetaTable IcarusUtilities.Default__IcarusMetaTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusMetaTable* UIcarusMetaTable::GetDefaultObj()
{
	static class UIcarusMetaTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusMetaTable*>(UIcarusMetaTable::StaticClass()->DefaultObject);

	return Default;
}


// Class IcarusUtilities.IcarusStringFunctionLibrary
// (None)

class UClass* UIcarusStringFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcarusStringFunctionLibrary");

	return Clss;
}


// IcarusStringFunctionLibrary IcarusUtilities.Default__IcarusStringFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UIcarusStringFunctionLibrary* UIcarusStringFunctionLibrary::GetDefaultObj()
{
	static class UIcarusStringFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UIcarusStringFunctionLibrary*>(UIcarusStringFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.IcarusStringFunctionLibrary.StringContainsSpecialCharacters_Output
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutSpecialCharacters                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusStringFunctionLibrary::StringContainsSpecialCharacters_Output(const class FString& String, TArray<class FString>* OutSpecialCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "StringContainsSpecialCharacters_Output");

	Params::UIcarusStringFunctionLibrary_StringContainsSpecialCharacters_Output_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSpecialCharacters != nullptr)
		*OutSpecialCharacters = std::move(Parms.OutSpecialCharacters);

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusStringFunctionLibrary.StringContainsSpecialCharacters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusStringFunctionLibrary::StringContainsSpecialCharacters(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "StringContainsSpecialCharacters");

	Params::UIcarusStringFunctionLibrary_StringContainsSpecialCharacters_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusStringFunctionLibrary.ParseIntoLines
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      MultiLineInput                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UIcarusStringFunctionLibrary::ParseIntoLines(const class FString& MultiLineInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "ParseIntoLines");

	Params::UIcarusStringFunctionLibrary_ParseIntoLines_Params Parms{};

	Parms.MultiLineInput = MultiLineInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Text
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        TextA                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        TextB                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusStringFunctionLibrary::LexicalLess_Text(class FText& TextA, class FText& TextB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "LexicalLess_Text");

	Params::UIcarusStringFunctionLibrary_LexicalLess_Text_Params Parms{};

	Parms.TextA = TextA;
	Parms.TextB = TextB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_String
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      StringA                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringB                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusStringFunctionLibrary::LexicalLess_String(const class FString& StringA, const class FString& StringB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "LexicalLess_String");

	Params::UIcarusStringFunctionLibrary_LexicalLess_String_Params Parms{};

	Parms.StringA = StringA;
	Parms.StringB = StringB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Name
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NameA                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NameB                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusStringFunctionLibrary::LexicalLess_Name(class FName& NameA, class FName& NameB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "LexicalLess_Name");

	Params::UIcarusStringFunctionLibrary_LexicalLess_Name_Params Parms{};

	Parms.NameA = NameA;
	Parms.NameB = NameB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.IcarusStringFunctionLibrary.FastLess_Name
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        NameA                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NameB                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UIcarusStringFunctionLibrary::FastLess_Name(class FName& NameA, class FName& NameB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IcarusStringFunctionLibrary", "FastLess_Name");

	Params::UIcarusStringFunctionLibrary_FastLess_Name_Params Parms{};

	Parms.NameA = NameA;
	Parms.NameB = NameB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IcarusUtilities.LessInterface
// (None)

class UClass* ILessInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LessInterface");

	return Clss;
}


// LessInterface IcarusUtilities.Default__LessInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILessInterface* ILessInterface::GetDefaultObj()
{
	static class ILessInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILessInterface*>(ILessInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.LessInterface.LessThan
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Other                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ILessInterface::LessThan(class UObject* Other)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LessInterface", "LessThan");

	Params::ILessInterface_LessThan_Params Parms{};

	Parms.Other = Other;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class IcarusUtilities.PanningPanel
// (None)

class UClass* UPanningPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PanningPanel");

	return Clss;
}


// PanningPanel IcarusUtilities.Default__PanningPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UPanningPanel* UPanningPanel::GetDefaultObj()
{
	static class UPanningPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UPanningPanel*>(UPanningPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function IcarusUtilities.PanningPanel.SetZoomOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPanningPanel::SetZoomOverride(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanningPanel", "SetZoomOverride");

	Params::UPanningPanel_SetZoomOverride_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IcarusUtilities.PanningPanel.SetPositionOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPanningPanel::SetPositionOverride(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanningPanel", "SetPositionOverride");

	Params::UPanningPanel_SetPositionOverride_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function IcarusUtilities.PanningPanel.Refresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPanningPanel::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanningPanel", "Refresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function IcarusUtilities.PanningPanel.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UPanningPanel::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanningPanel", "GetPosition");

	Params::UPanningPanel_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function IcarusUtilities.PanningPanel.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOverlaySlot* UPanningPanel::AddChildToOverlay(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanningPanel", "AddChildToOverlay");

	Params::UPanningPanel_AddChildToOverlay_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


